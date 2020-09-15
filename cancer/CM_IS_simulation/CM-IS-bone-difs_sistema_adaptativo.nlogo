extensions [ matrix Csv] ;uso de la liberia Netlogo de matrices
breed [ tumors tumor ] ; tumor cells

; Innate mmune system
breed [ neutrs neutr ] ; neutrophils cells
breed [ macros macro ] ; macrophages cells
breed [ natuks natuk ] ; natural killers, NK naturally regulate adaptative immune system cell proliferation

;BONE
breed [ tumorsb tumorb ] ; tumor cells corresponding to bone
breed [ neutrsb neutrb ] ; neutrophils cells corresponding to bone
breed [ macrosb macrob ] ; macrophages cells corresponding to bone
breed [ natuksb natukb ] ; natural killers, NK naturally regulate adaptative immune system cell proliferation corresponding to bone

;LUNG
breed [ tumorsLg tumorbLg ] ; tumor cells corresponding to lung
; Innate mmune system
breed [ neutrsLg neutrLg ] ; neutrophils cells corresponding to lung
breed [ macrosLg macroLg ] ; macrophages cells corresponding to lung
breed [ natuksLg natukLg ] ; natural killers, NK naturally regulate adaptative immune system cell proliferation corresponding to lung

;LIVER
breed [ tumorsLv tumorbLv ] ; tumor cells corresponding to liver
; Innate mmune system
breed [ neutrsLv neutrLv ] ; neutrophils cells corresponding to liver
breed [ macrosLv macroLv ] ; macrophages cells corresponding to liver
breed [ natuksLv natukLv ] ; natural killers, NK naturally regulate adaptative immune system cell proliferation corresponding to liver

breed [Tr-cells Tr-cell] ; Tregs cells
breed [Th-cells Th-cell] ; Helpelrs cells


neutrs-own [ neut? tan1? tan2? ]
neutrsb-own [ neut? tan1? tan2? ]
neutrsLv-own [ neut? tan1? tan2? ]
neutrsLg-own [ neut? tan1? tan2? ] ; neut? is a neutrophil
                                 ; tan1? is a tumor associate neutrophil type 1 (pro-inflamatory antitumor)
                                 ; tan2? is a tumor associate neutrophil type 2 (pro-tumor anti-inflamatory)
macros-own [ macr? tam1? tam2? ]
macrosb-own [ macr? tam1? tam2? ]
macrosLv-own [ macr? tam1? tam2? ]
macrosLg-own [ macr? tam1? tam2? ] ; macr? is a macrophage
                                 ; tam1? is a tumor associate macrophage type 1 (pro-inflamatory antitumor, eats
                                 ;                                               that tumor cells that are innactive)
                                 ; tam2? is a tumor associate macrophage type 2 (pro-tumor anti-inflamatory, and
                                 ;                                          attack some adaptive immune system cells)

turtles-own [ age ] ; cell age

globals [
  tan1
  tan2
  tam1
  tam2
  treg
  helpp
  helpn
  T-Cn
  T-Cp
  Hamilton
  HamiltonTu
  HamiltonIS
  i
  j
  aij
  prod
  edad
  l
  prob
  min-tumors
  Q
  P
  counter
  file_number
  data
  No.-of-initial-tumor-cells
  No.-of-initial-neutrophils-cell
  No.-of-initial-macrophages-cells
  No.-of-initial-natural-killers-cells
  recruit-neutrophils
  ProbOfSuccesOfInterac-NeutTum
  ProbOfChange-to-tan1-or-tan2
  ProbOfSuccesOf-tan1
  No-of-desactivating-tumor-cells-by-tan1
  ProbOfSuccesOf-tam1
  recruit-macrophages
  ProbOfSuccesOfInterac-MacrTum
  ProbOfChange-to-tam1-or-tam2
  recruit-natural-killers
  ProbOfSAttackSuccesByNk
  ProbOfSuccesOf-tan2
  No-of-activating-tumor-cells-by-tan2
  ProbOfSuccesOf-tam2
  No-of-activating-tumor-cells-by-tam2
  max-tumors
  No.ticks
  max-age-tam1
  max-age-tam2
  max-age-tan1
  max-age-tan2
  max-age-nk

  No.-of-initial-treg-cells
  No.-of-initial-helper-cells
  ProbOfSuccesOfInterac-Th-Tum
  ProbOfChange-thcells-to-thcells-
  ProbOfChange-thcells-to-Cd8
  ProbOfAttackSuccesByCd8
  ;No.-of-initial-cd8-cells
  ;------------------------------------ new variables
  filename-template
  total-files
  file-num
  can_there_be_metastasis
  are_there_metastasis_bone
  are_there_metastasis_lung
  are_there_metastasis_liver
  tick-init-metastasis-bone
  tick-init-metastasis-lung
  tick-init-metastasis-liver
  increase-tumor
  a-gauss
  ticks-tumor-spread
] ; some counts

to-report logistic [increase x]
  let a increase - 1.0
  let k 9                     ; Tasa de crecimiento
  let x0 0.4                  ; Punto de inflexion

  report 1.0 + ( a / (1.0 + (e ^ (- k * (x - x0)))) )
end

to calc-logistic-proportion [increase ticks-spread]
  set i 0
  let d_x 1.0 / (ticks-spread - 1.0)
  let v_result [1]

  repeat (ticks-spread - 1) [
    set v_result lput ( logistic increase ((i + 1) * d_x) / logistic increase ((i) * d_x)) v_result
    set i i + 1
  ]

  set a-gauss max v_result - 1.0
end

to-report gauss-aproximation [x]
  let a a-gauss
  let b 0.4
  let c 0.19

  let result a * (e ^ ( - ((x - b) ^ 2.0) / (2.0 * (c ^ 2.0) ) ))

  report result
end

to-report tumors-to-recruit [ticks-spreading]
;  report int(gauss 100 t)
  let d_x 1.0 / (ticks-tumor-spread - 1.0)
  let x (ticks-spreading * d_x)
  report int( (count tumors) * gauss-aproximation x )
end

to-report tumorsb-to-recruit [ticks-spreading]
;  report int(gauss 100 t)
  let d_x 1.0 / (ticks-tumor-spread - 1.0)
  let x (ticks-spreading * d_x)
  report int( (count tumorsb) * gauss-aproximation x )
end

to-report tumorsLg-to-recruit [ticks-spreading]
;  report int(gauss 100 t)
  let d_x 1.0 / (ticks-tumor-spread - 1.0)
  let x (ticks-spreading * d_x)
  report int( (count tumorsLg) * gauss-aproximation x )
end

to-report tumorsLv-to-recruit [ticks-spreading]
;  report int(gauss 100 t)
  let d_x 1.0 / (ticks-tumor-spread - 1.0)
  let x (ticks-spreading * d_x)
  report int( (count tumorsLv) * gauss-aproximation x )
end


to-report gauss [a x]
  set a a / 3.0
  let b (No.ticks / 1.5) * 2.0 / 5.0
  let c 2 * No.ticks / 20.0

  let result a * (e ^ ( - ((x - b) ^ 2.0) / (2.0 * c ^ 2.0 ) ))

  report result
end

to-report neutrophils-to-recruit [x]
  report int(gauss recruit-neutrophils x)
end

to-report macrophages-to-recruit [x]
  report int(gauss recruit-macrophages x)
end

to-report natural-killers-to-recruit [x]
  report int(gauss recruit-natural-killers x)
end

;------------------------------------- cells definitions
to tumors-cells         ; tumor cells
    set color blue
    set shape "circle 1"
    set size 1
    if not graficos
    [
      set hidden? true
    ]
end


to neutrs-cells     ; neutrophils cells
  set shape "circle 1"
  set color brown
  set size 1
  set neut? true
  set tan1? false
  set tan2? false
  if not graficos
    [
      set hidden? true
    ]
end

to macros-cells        ; macrophages cells
  set shape "circle 1"
  set color 54
  set size 1
  set macr? true
  set tam1? false
  set tam2? false
  if not graficos
    [
      set hidden? true
    ]
end

to natuks-cells      ; natural killer cells
  set shape "circle 1"
  set color red
  set size 1
  if  not graficos
    [
      set hidden? true
    ]
end

to treg-cells         ; Tr-cells cells
    set color 66
    set shape "circle 1"
    set size 1
    if not graficos
    [
      set hidden? true
    ]
end


to helpers-cells         ; Th-cells cells
    set color cyan
    set shape "circle 1"
    set size 1
    if not graficos
    [
      set hidden? true
    ]

end

;------------------------------------- setup
to setup
  ; Lecture of variable input files. Files eg. {"input_values1.csv", "input_values2.csv", ... , "input_valuesN.csv"} -> "input-values"
  set filename-template "data/medio-medio/input_values"
  set total-files 10
  set file-num random 150 + 1

  init
end

to clear-vars
  set tan1 0
  set tan2 0
  set tam1 0
  set tam2 0
  set treg 0
  set helpp 0
  set helpn 0
  set T-Cn 0
  set T-Cp 0
  set Hamilton 0
  set HamiltonTu 0
  set HamiltonIS 0
  set i 0
  set j 0
  set aij 0
  set prod 0
  set edad 0
  set l 0
  set prob 0
  set min-tumors 0
  set Q 0
  set P 0
  set counter 0
  set file_number 0
  set data 0
  set No.-of-initial-tumor-cells 0
  set No.-of-initial-neutrophils-cell 0
  set No.-of-initial-macrophages-cells 0
  set No.-of-initial-natural-killers-cells 0
  set recruit-neutrophils 0
  set ProbOfSuccesOfInterac-NeutTum 0
  set ProbOfChange-to-tan1-or-tan2 0
  set ProbOfSuccesOf-tan1 0
  set No-of-desactivating-tumor-cells-by-tan1 0
  set ProbOfSuccesOf-tam1 0
  set recruit-macrophages 0
  set ProbOfSuccesOfInterac-MacrTum 0
  set ProbOfChange-to-tam1-or-tam2 0
  set recruit-natural-killers 0
  set ProbOfSAttackSuccesByNk 0
  set ProbOfSuccesOf-tan2 0
  set No-of-activating-tumor-cells-by-tan2 0
  set ProbOfSuccesOf-tam2 0
  set No-of-activating-tumor-cells-by-tam2 0
  set max-tumors 0
  set No.ticks 0
  set max-age-tam1 0
  set max-age-tam2 0
  set max-age-tan1 0
  set max-age-tan2 0
  set max-age-nk 0
  set No.-of-initial-treg-cells 0
  set No.-of-initial-helper-cells 0
  set ProbOfSuccesOfInterac-Th-Tum 0
  set ProbOfChange-thcells-to-thcells- 0
  set ProbOfChange-thcells-to-Cd8 0
  set ProbOfAttackSuccesByCd8 0
  set can_there_be_metastasis false
  set are_there_metastasis_bone false
  set are_there_metastasis_lung false
  set are_there_metastasis_liver false
  set tick-init-metastasis-bone -1
  set tick-init-metastasis-lung -1
  set tick-init-metastasis-liver -1
  set increase-tumor 2
  set a-gauss 0
  set ticks-tumor-spread 0
end

to init
  clear-vars
  clear-ticks
  clear-turtles
  clear-patches
  clear-drawing
  clear-all-plots
  clear-output

  file-close-all

  ;read of input from files
  set_input (word filename-template file-num ".csv")

  set increase-tumor 5
  set ticks-tumor-spread No.Ticks
  calc-logistic-proportion increase-tumor ticks-tumor-spread

  ;initial conditions of IS and CC cells
  ; -16 0 are the coordinates of the center of the primary tumor world
  setup1 -16 16 -1 1

  ; coloring of four parts of the world
  if graficos [
    let p1 -32
    repeat 33 [
      let p2 0
      repeat 33 [
        let xaux -1 * p2
        let yaux -1 * p1

        ;corresponding to primary tumor
        ask patch p1 p2 [set pcolor gray]
        ;corresponding to bone
        ask patch p2 yaux [set pcolor orange + 2]
        ;corresponding to liver
        ask patch p2 p1 [set pcolor brown]
        ;corresponding to lung
        ask patch p1 xaux [set pcolor pink]

        set p2 p2 + 1
      ]

      set p1 p1 + 1
    ]
  ]
  reset-ticks

  ;create the files corresponding to each organ
  ;file number is to distinguish the files of each simulation
  set file_number date-and-time
  print_file "log/primary_tumor/primary tumor" file_number
  print_file "log/bone/bone tumor" file_number
  print_file_hamilton
  ;write initial data to files
  set counter 0
  print_data_primary counter file_number
  print_data_bone counter file_number
  ;initialize variables
  set hamilton 0
  set HamiltonTu 0
  set HamiltonIS 0
end

; Init metastasis bone
to setup_metastasis_bone
  if can_there_be_metastasis = true [
    set are_there_metastasis_bone are_there_metastasis_site "bone"

    if are_there_metastasis_bone = true [
      set tick-init-metastasis-bone ticks
      setupbone 1 1
    ]
  ]
end

; Init metastasis lung
to setup_metastasis_lung
  if can_there_be_metastasis = true [
    set are_there_metastasis_lung are_there_metastasis_site "lung"

    if are_there_metastasis_lung = true [
      set tick-init-metastasis-lung ticks
      setuplung -1 -1
    ]
  ]
end

; Init metastasis liver
to setup_metastasis_liver
  if can_there_be_metastasis = true [
    set are_there_metastasis_liver are_there_metastasis_site "liver"

    if are_there_metastasis_liver = true [
      set tick-init-metastasis-liver ticks
      setupliver 1 -1
    ]
  ]
end

; set up  initial conditions of IS and CC cells
; a, b tags of sections
;cordx cordy are the cordinates of the center of the corresponding world
to setup1[cordx cordy a b]
  set  min-tumors 2
  create-tumors No.-of-initial-tumor-cells [
    setxy cordx cordy
    tumors-cells
    set age 0
  ]
  ask tumors [ fd 0.5 ]

  create-neutrs No.-of-initial-neutrophils-cell
  [
    let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1

    setxy x y
    neutrs-cells
    set age 0
  ]

  create-macros No.-of-initial-macrophages-cells
  [
    let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1
    setxy x y

   macros-cells
   set age 0
  ]
  create-natuks No.-of-initial-natural-killers-cells [
  let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1
    setxy x y

   natuks-cells
   set age 0
  ]

  create-Th-cells No.-of-initial-helper-cells [
  let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1
    setxy x y

   helpers-cells
   set age 0
  ]

  create-Tr-cells No.-of-initial-treg-cells [
  let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1
    setxy x y

   treg-cells
   set age 0
  ]
end


;cordinates correspondig to a b cuadrant
; crd=1 if its about x
;crd= -1 if its about y
; sign its de sign of cordinate 1 or -1
to-report cordinates[sign crd]
  let cord 0
  ifelse crd = 1
  [
    set cord random-xcor
  ]
  [
    set cord random-ycor
  ]
  let aux cord * sign

  if aux < 0 [ set cord -1 * cord]
  if cord = 0 [set cord sign * 0.5]

  report cord
end

;read of all initial values from a file
to set_input[filename]
  ;open file wich contains input values
  file-open filename

  set data csv:from-row file-read-line
  set No.-of-initial-tumor-cells item 1 data

  set data csv:from-row file-read-line
  set No.-of-initial-neutrophils-cell item 1 data

  set data csv:from-row file-read-line
  set No.-of-initial-macrophages-cells item 1 data

  set data csv:from-row file-read-line
  set No.-of-initial-natural-killers-cells item 1 data

  set data csv:from-row file-read-line
  set recruit-neutrophils item 1 data

  set data csv:from-row file-read-line
  set ProbOfSuccesOfInterac-NeutTum item 1 data

  set data csv:from-row file-read-line
  set ProbOfChange-to-tan1-or-tan2 item 1 data

  set data csv:from-row file-read-line
  set ProbOfSuccesOf-tan1 item 1 data
  set ProbOfSuccesOf-tan2 1 - ProbOfSuccesOf-tan1

  set data csv:from-row file-read-line
  set No-of-desactivating-tumor-cells-by-tan1 item 1 data

  set data csv:from-row file-read-line
  set ProbOfSuccesOf-tam1 item 1 data
  set ProbOfSuccesOf-tam2 1 - ProbOfSuccesOf-tam1

  set data csv:from-row file-read-line
  set recruit-macrophages item 1 data

  set data csv:from-row file-read-line
  set ProbOfSuccesOfInterac-MacrTum item 1 data

  set data csv:from-row file-read-line
  set ProbOfChange-to-tam1-or-tam2 item 1 data

  set data csv:from-row file-read-line
  set recruit-natural-killers item 1 data

  set data csv:from-row file-read-line
  set ProbOfSAttackSuccesByNk item 1 data

  set data csv:from-row file-read-line
  set No-of-activating-tumor-cells-by-tan2 item 1 data

  set data csv:from-row file-read-line
  set No-of-activating-tumor-cells-by-tam2 item 1 data

  set data csv:from-row file-read-line
  set max-tumors item 1 data

  set data csv:from-row file-read-line
  set No.ticks item 1 data

  set data csv:from-row file-read-line
  set max-age-tam1 item 1 data

  set data csv:from-row file-read-line
  set max-age-tam2 item 1 data

  set data csv:from-row file-read-line
  set max-age-tan1 item 1 data

  set data csv:from-row file-read-line
  set max-age-tan2 item 1 data

  set data csv:from-row file-read-line
  set max-age-nk item 1 data

  set data csv:from-row file-read-line
  set No.-of-initial-treg-cells item 1 data

  set data csv:from-row file-read-line
  set No.-of-initial-helper-cells item 1 data

  set data csv:from-row file-read-line
  set ProbOfSuccesOfInterac-Th-Tum item 1 data

  set data csv:from-row file-read-line
  set ProbOfChange-thcells-to-thcells- item 1 data
  set ProbOfChange-thcells-to-Cd8 100 - ProbOfChange-thcells-to-thcells-

  set data csv:from-row file-read-line
  set ProbOfAttackSuccesByCd8 item 1 data

end


;------------------------------------- go
to go
  ;--------------------- Automatic stops
  ; too many iterartions
  if ticks >= No.ticks
  [
    output_files
    file-close-all

    ifelse file-num < total-files [
      set file-num file-num + 1
      init
    ] [
      stop
    ]
  ]
  ;too large the tumor
  if count tumors >= max-tumors
  [
    output_files
    user-message "Demasiado grande el tumor"
    file-close-all

    ifelse file-num < total-files [
      set file-num file-num + 1
      init
    ] [
      stop
    ]
  ]

  ; Cell actions
  mitosis-tumors tumors

  move-neutr
  neutr-tumor-interc

  move-macro
  macro-tumor-interc

  move-natuk natuks -16 16

  ;move-help Th-cells -16 0
  ;th-tumor-interc


  ; recruit of innate immune system cells
  let x cordinates -1 1
  create-neutrs neutrophils-to-recruit ticks [ neutrs-cells setxy x 32 set age 0 ]

  set x cordinates -1 1
  create-macros macrophages-to-recruit ticks [ macros-cells setxy x 0 set age 0 ]

  let y cordinates 1 -1
  create-natuks natural-killers-to-recruit ticks [ natuks-cells setxy 0 y set age 0 ]

  hamilton-1

  ;METASTASIS
  ;go-metastasis
  tick

  ;write current data to files
  set counter counter + 1
  print_data_primary counter file_number
  print_data_bone counter file_number

end

to go-metastasis
  set can_there_be_metastasis can_there_be_general_metastasis

  ifelse are_there_metastasis_bone = true [
    metastasisBone
  ] [
    ; Try to start bone metastasis
    setup_metastasis_bone
  ]
  ifelse are_there_metastasis_lung = true [
    metastasisLung
  ] [
    ; Try to start lung metastasis
    setup_metastasis_lung
  ]
  ifelse are_there_metastasis_liver = true [
    metastasisLiver
  ] [
    ; Try to start liver metastasis
    setup_metastasis_liver
  ]
end

;___________________________________ output files
;export all deafault netlogo output files
to output_files
  export-view (word "log/primary_tumor/modelo_cancer" file_number ".png")
  export-output (word "log/primary_tumor/salida_modelo_cancer" file_number ".csv")
  export-world (word "log/primary_tumor/modelo_hamilton" file_number ".csv")
  export-all-plots (word "log/primary_tumor/primary tumor graphs " file_number ".csv")
  export-plot "Primary tumor cells" (word "log/primary_tumor/primary_tumor_graphs" file_number ".csv")
  export-plot "Bone tumor cells" (word "log/bone/primary_tumor_graphs" file_number ".csv")
  export-plot "Lung tumor cells" (word "log/lung/primary_tumor_graphs" file_number ".csv")
  export-plot "Liver tumor cells" (word "log/liver/primary_tumor_graphs" file_number ".csv")
end



;------------------------------------- mitosis-tumors
to mitosis-tumors [tumorstype]
  if (not stop-replication?) [
    ask tumorstype [
      set age age + 1
      set color blue - 0.25 * age
    ]

    (ifelse is-tumor? one-of tumorstype [
        create-tumors tumors-to-recruit ticks [
          setxy -16 16
          tumors-cells
          rt random-float 360
          fd 0.5
          set age 0
        ]
      ]
      is-tumorb? one-of tumorstype [
        create-tumorsb tumorsb-to-recruit ticks [
          setxy 16 16
          tumors-cells
          rt random-float 360
          fd 0.5
          set age 0
        ]
      ]
      is-tumorbLg? one-of tumorstype [
        create-tumorsLg tumorsLg-to-recruit ticks [
          setxy -16 -16
          tumors-cells
          rt random-float 360
          fd 0.5
          set age 0
        ]
      ]
      is-tumorbLv? one-of tumorstype [
        create-tumorsLv tumorsLv-to-recruit ticks [
          setxy 16 -16
          tumors-cells
          rt random-float 360
          fd 0.5
          set age 0
        ]
      ]
    )
  ]
end

;------------------------------------- neutrophils-tumor interaction
to neutr-tumor-interc
  ask neutrs [
    let tumh one-of tumors-here

    if tumh != nobody [
      if random 100 < ProbOfSuccesOf-tan1
      [
        if (tan1?) and (not tan2?) and (not neut?)  ; desactivation of tumor replication
        [
          let m count tumors
          let aux list m No-of-desactivating-tumor-cells-by-tan1
          let n min aux
          ask n-of n tumors [ set age 7 ]
        ]
      ]

      if random 100 < ProbOfSuccesOf-tan2
      [
        if (tan2?) and (not tan1?) and (not neut?)  ; activation of tumor replication
        [

          let m count tumors
          let aux list m No-of-activating-tumor-cells-by-tan2
          let n min aux
          ask n-of n tumors [ set age 1 ]
        ]
      ]
    ]

    set age age + 1

    if (tan1?) and (not tan2?) and (not neut?) [ death max-age-tan1 + 3 ]
    if (tan2?) and (not tan1?) and (not neut?) [ death max-age-tan2 + 2 ]
  ]
end

;------------------------------------- macrophages-tumor interaction
to macro-tumor-interc
  ask macros [
    let tumh one-of tumors-here

    if tumh != nobody [
      if random 100 < ProbOfSuccesOf-tam1 [
        if (tam1?) and (not tam2?) and (not macr?) ; phagocitation of desactive tumor cells
        [ attack tumh 4 ] ]
      if random 100 < ProbOfSuccesOf-tam2
      [
        if (tam2?) and (not tam1?) and (not macr?) ; activation of tumor replication
        [
               let m count tumors
          let aux list m No-of-activating-tumor-cells-by-tam2
          let n min aux
          ask n-of  n tumors [ set age 3 ]
        ]
      ]
    ]

   set age age + 1
   if (tam1?) and (not tam2?) and (not macr?) [ death max-age-tam1 + 3 ]
   if (tam2?) and (not tam1?) and (not macr?) [ death max-age-tam2 + 2 ]
  ]
end

;------------------------------------- neutrophils movement
to move-neutr
  ask neutrs
  [
   if (neut?) and (not tan1?) and (not tan2?)
    [
      ;facexy -16 0 ;one-of tumors
      ;facexy -16 16 ;one-of tumors
      ;fd 0.5
      let tumh one-of tumors
      if tumh != nobody [
        move-to one-of tumors
      ]
      set age age + 1
    ]

    let tumh one-of tumors-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-NeutTum [

;        ask neutrs-here [
          ;show ( word "neutrs="count neutrs-here)

          if (neut?) and (not tan2?) and (not tan1?) [
           ifelse random 100 < ProbOfChange-to-tan1-or-tan2 [  ; probability of change a tan1 or tan2
             set tan1? true
             set tan2? false
             set neut? false
             set color brown - 2
             set tan1 tan1 + 1
           ]
           [

             set tan1? false
             set tan2? true
             set neut? false
             set color brown + 2
             set tan2 tan2 + 1
           ]
          ]
         rt random 360
         fd 0.3
;        ]
    ]
    ]
  ]
end

;------------------------------------- macrophages movement
to move-macro
  ask macros [
    if (macr?) and (not tam1?) and (not tam2?) [
      ;facexy -16 0 ;one-of tumors
      ;facexy -16 16 ;one-of tumors
      ;fd 0.5
      let tumh one-of tumors
      if tumh != nobody [
        move-to one-of tumors
      ]
      set age age + 1
    ]

    let tumh one-of tumors-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-MacrTum [
      ask macros-here [
        if (macr?) and (not tam2?) and (not tam1?) [
          ifelse random 100 < ProbOfChange-to-tam1-or-tam2 [  ; probability of change a tan1 or tan2
            set tam1? true
            set tam2? false
            set macr? false
            set color green - 2
            set tam1 tam1 + 1
          ]
          [
            set tam1? false
            set tam2? true
            set macr? false
            set color brown + 2
            set tam2 tam2 + 1
          ]
         ]
         rt random 360
         fd 0.3
        ]
      ]
    ]
  ]
end

;------------------------------------- natural killers movement
to move-natuk[natukstype x y]
  ask natukstype [
    ; Move
    ;facexy x y ;one-of tumors
    ;fd 15
    let tumh one-of tumors
    if tumh != nobody [
      move-to one-of tumors
    ]
;    set age age + 0.5

    ; Attack
    ;let tumh one-of tumors-here
    if random 100 < ProbOfSAttackSuccesByNk [
      attack tumh random (No.Ticks - 6) + 3
    ]

    set age age + 1
    death max-age-nk
  ]
end

;-------------------------------------helpers movement
to move-help[helpstype x y]
  ask helpstype [
    ;facexy x y ;one-of tumors
    ;fd 0.5
    let tumh one-of tumors
    if tumh != nobody [
      move-to one-of tumors
    ]

    set age age + 1
    ;let tumh one-of tumors-here
    if random 100 < ProbOfSuccesOfInterac-Th-Tum [
      ;aqui ocurre la interaciion de las celulas Th con el tumor
    ]
  ]
end

;------------------------------------- Th-tumor interaction
to th-tumor-interc
  ask Th-cells [
    let tumh one-of tumors-here

    if tumh != nobody [
      if random 100 < ProbOfChange-thcells-to-thcells-
      [

      ]

      if random 100 < ProbOfChange-thcells-to-Cd8
      [

      ]
    ]
 ]
end

to attack [ prey aged]
  if (prey != nobody) and (age >= aged)
  [ ask prey [ die ] ]
end

to death [ maxage ]
  if (age > maxage) [
    die
  ]
end


;Isig hamilton
to hamilton-1
 set hamilton 0
 let x vector-x
 let W matrix-W
  let aux 0
  let aux1 0
  let aux2 0
  let aux3 0

  set i  0
  repeat l
  [
    set aux3 item i x
    set j 0
    repeat l
    [
      set aux1 matrix:get W i j
      ;"wij=" aux1
      set aux2 item j x
      ;show (word "xj=" aux2)
      set aux aux1 * aux2 * aux3
      ;show(word "wij xj xi="aux)

      ifelse IS i and IS j
      [

        set HamiltonIS HamiltonIS - 0.5 * aux
      ]
      [
        set HamiltonTu HamiltonTu - 0.5 * aux
      ]

      set j j + 1
    ]
    set i i + 1
  ]
  ;show (word "hamilton=" hamilton)
set hamilton HamiltonTu + HamiltonIS
      ;show (word "hamilton" hamilton)
  print_data_hamilton counter
end


to-report IS [num]

  ifelse num = 2 or num = 3  or num = 5 or num = 6 or num = 8
  [
    report true
  ]
  [
  report false
  ]
end


to-report vector-x
  let x-vector []

  let x1 -1 * count tumors
  set x-vector lput x1 x-vector
  let x2 1 * count neutrs - tan1 - tan2
  set x-vector lput x2 x-vector
  let x3 1 * tan1
  set x-vector lput x3 x-vector
  let x4 -1 * tan2
  set x-vector lput x4 x-vector
  let x5 1 * count macros - tam1 - tam2
  set x-vector lput x5 x-vector
  let x6 1 * tam1
  set x-vector lput x6 x-vector
  let x7 -1 * tam2
  set x-vector lput x7 x-vector
  let x8 1 * count natuks
  set x-vector lput x8 x-vector

  report x-vector
end

;-------------------------------------------------Matrix W
to-report matrix-W
  ; Read matrix Q from file
  let Q-list csv:from-file "matriz_q.csv"
  set Q matrix:from-row-list Q-list

  set i 1
  set l 8

set P probabilities-p
  ;create an empty list
  let Waux []
  set i 0
  repeat l
  [
    ; aqui se forman los renglones de la matriz W
    let Aj []
    set j 0
    repeat l
    [
      ;get aij element of matrix W
      set aij elemento-aij i j
      ; add aij to Aj
      set Aj lput aij Aj
      set j j + 1
    ]
  ;create row list of matrix W
    set Waux lput Aj Waux
    set i i + 1
  ]
  ;create the matrix W
  let MatrixW matrix:from-row-list Waux
;show (word "HamiltonTu= ")
 ; print matrix:pretty-print-text MatrixW

 report MatrixW
end


; calculate the  ij element of  W matrix
to-report elemento-aij[ i1 j1]
  let auxij 0

let aux1 matrix:get Q i1 j1
let aux2 matrix:get P i1 j1

set auxij aux1 * aux2

  report auxij
end


; probabilities matrix
to-report probabilities-p
   let lista-p (list 0)

  let p12 ProbOfSuccesOfInterac-NeutTum * 0.01
  set lista-p  lput  p12 lista-p
  let p13 ProbOfSuccesOfInterac-MacrTum * 0.01
  set lista-p lput p13 lista-p
  let p14 ProbOfSuccesOf-tan1 * 0.01
  set lista-p lput p14 lista-p
  let p15 1 - ProbOfSuccesOf-tan1 * 0.01
  set lista-p lput p15 lista-p
  let p16 ProbOfSuccesOf-tam1 * 0.01
  set lista-p lput p16 lista-p
  let p17 1 - ProbOfSuccesOf-tam2 * 0.01
  set lista-p lput p17 lista-p
  let p18 ProbOfSAttackSuccesByNk * 0.01
  set lista-p lput p18 lista-p
  ;let p19 75 * 0.01
  ;set lista-p lput p19 lista-p
  ;let p110 80 * 0.01
  ;set lista-p lput p110 lista-p
  ;let p111 65 * 0.01
  ;set lista-p lput p111 lista-p

;show lista-p


let proba []
  set proba lput lista-p proba
  ;show item 2 lista-p
let cont 1
 repeat  7
  [
    let iaux 0
    let aux []
    set aux lput item cont lista-p aux
    repeat 7
    [

      ifelse iaux = cont
      [
        set aux lput 0 aux
      ]
      [
        set aux lput 1 aux
      ]
      set iaux iaux + 1
    ]
    set proba lput aux proba
    set cont cont + 1
  ]

  let probabilidades matrix:from-column-list proba
    ;print matrix:pretty-print-text probabilidades
report probabilidades
end


;-------------------------------print output files
to print_file [string number]
file-open (word string number ".csv")
  file-type " "
  file-type ","
  file-type "Num of tumor cells"
  file-type ","
  file-type "Num of neutrophils"
  file-type ","
  file-type "Num of macrophages cells "
  file-type ","
  file-type "Num of natural killers cells "
  file-type ","
  file-type "Num of th cells "
  file-type ","
  file-type "Num of treg cells "
  file-type"\r\n"

end

to print_file_hamilton
  file-open (word "log/primary_tumor/Hamilton" file_number ".csv")
  file-type " "
  file-type ","
  file-type "HamiltonTu"
  file-type ","
  file-type "HamiltonIS"
  file-type ","
  file-type "hamilton"
  file-type"\r\n"
end

to print_data_primary [cont number ]
  file-open (word "log/primary_tumor/primary tumor" number ".csv")
  file-type "time"
  file-type cont
  file-type ","
  file-type count tumors
  file-type ","
  file-type count neutrs
  file-type ","
  file-type count macros
  file-type ","
  file-type count natuks
  file-type ","
  file-type count Th-cells
  file-type ","
  file-type count Tr-cells
  file-type "\r\n"
end

to print_data_hamilton [cont]
  file-open (word "log/primary_tumor/Hamilton" file_number ".csv")
  file-type "time"
  file-type cont
  file-type ","
  file-type HamiltonTu
  file-type ","
  file-type  HamiltonIS
  file-type ","
  file-type  hamilton
  file-type"\r\n"
end


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;here decide if metastasis occurs
to-report can_there_be_general_metastasis
  let higher_threshold 3.0  ; Cancer 3 times bigger/smaller than IS  (Modify if necessary)
  let lower_threshold 1.0 / higher_threshold
  let proportion 0.0
  let probability 0.0
  let a random 100
  let result false

  ifelse count natuks > 0 [
    set proportion count tumors / count natuks
  ][
    set proportion higher_threshold
  ]

  (ifelse
    proportion >= higher_threshold[  ; Cancer 3 times bigger than IS
      set probability 1.0
    ]
    proportion <= lower_threshold [  ; Cancer 3 times smaller than IS
      set probability 0.0
    ]
    [
      set probability (proportion - lower_threshold) / (higher_threshold - lower_threshold)
    ]
  )

  if a <= probability * 100 [
    set result true
  ]

  report result
end

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;here decide which metastasis occurs
to-report are_there_metastasis_site [metastasis_site]
  let result false
  let a random 10000

  (ifelse
    metastasis_site = "bone" [
      if a <= 953 [  ; 9.53 %  (213/2235)
        set result true
      ]
    ]
    metastasis_site = "lung" [
      if a <= 1105 [  ; 11.05 %  (247/2235)
        set result true
      ]
    ]
    metastasis_site = "liver" [
      if a <= 975 [  ; 9.75 %  (218/2235)
        set result true
      ]
    ]
  )

  report result
end


;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;Bone
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
to metastasisBone
  ; Cell actions
  mitosis-tumors tumorsb

  ask neutrsb [
    move-neutrb
    neutrb-tumor-interc
    set age age + 1
    if (tan1?) and (not tan2?) and (not neut?) [ death max-age-tan1 + 3 ]
    if (tan2?) and (not tan1?) and (not neut?) [ death max-age-tan2 + 2 ]
  ]

  ask macrosb [
   move-macrob
   macrob-tumor-interc
   set age age + 1
   if (tam1?) and (not tam2?) and (not macr?) [ death max-age-tam1 + 3 ]
   if (tam2?) and (not tam1?) and (not macr?) [ death max-age-tam2 + 2 ]
  ]

  ask natuksb [
   ;move-natuk natuksb 16 0
   move-natuk natuksb 16 16
   set age age + 1
   death max-age-nk
  ]

; recruit of innate immune system cells
  let x cordinates 1 1
  create-neutrsb neutrophils-to-recruit (ticks - tick-init-metastasis-bone) [ neutrs-cells setxy x 32 set age 0 ]

  ;let y random-ycor
  let y cordinates 1 -1
  create-natuks natural-killers-to-recruit (ticks - tick-init-metastasis-bone) [ natuks-cells setxy 0 y set age 0 ]

  set x cordinates 1 1
  create-macros macrophages-to-recruit (ticks - tick-init-metastasis-bone) [ macros-cells setxy x 0 set age 0 ]

end

to setupbone[a b]
  let cordx  16 * a
  let cordy  16 * b
  create-tumorsb No.-of-initial-tumor-cells [
    setxy cordx cordy
    tumors-cells
    set age 0
  ]
  ask tumorsb [ fd 0.5 ]

  create-neutrsb No.-of-initial-neutrophils-cell [

    let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1
    setxy x y
   neutrs-cells
   set age 0
  ]

  create-macrosb No.-of-initial-macrophages-cells
  [
   let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1
    setxy x y
    ;setxy random-xcor random-ycor
   macros-cells
   set age 0
  ]

  create-natuksb No.-of-initial-natural-killers-cells [
  let x cordinates a 1
    ;let y random-ycor
    let y cordinates b -1
    setxy x y
    ;setxy random-xcor random-ycor
   natuks-cells
   set age 0
  ]

end

;------------------------------------- neutrophils-tumor interaction corresponding to bone
to neutrb-tumor-interc
  let tumh one-of tumorsb-here
  if tumh != nobody
  [
    ask neutrsb-here
    [
      if random 100 < ProbOfSuccesOf-tan1
      [
        if (tan1?) and (not tan2?) and (not neut?)  ; desactivation of tumor replication
        [

          let m count tumorsb
          let aux list m No-of-desactivating-tumor-cells-by-tan1
          let n min aux
          ask n-of n tumorsb [ set age 7 ]
        ]
      ]

      if random 100 < ProbOfSuccesOf-tan2
      [
        if (tan2?) and (not tan1?) and (not neut?)  ; activation of tumor replication
        [

          let m count tumorsb
          let aux list m No-of-activating-tumor-cells-by-tan2
          let n min aux
          ask n-of n tumorsb [ set age 1 ]
        ]
      ]

    ]
 ]

end

;------------------------------------- macrophages-tumor interaction corresponding to bone
to macrob-tumor-interc
  let tumh one-of tumorsb-here
  if tumh != nobody [
    ask macrosb-here [
      if random 100 < ProbOfSuccesOf-tam1 [
        if (tam1?) and (not tam2?) and (not macr?) ; phagocitation of desactive tumor cells
        [ attack tumh 4 ] ]
      if random 100 < ProbOfSuccesOf-tam2
      [
        if (tam2?) and (not tam1?) and (not macr?) ; activation of tumor replication
        [
               let m count tumorsb
          let aux list m No-of-activating-tumor-cells-by-tam2
          let n min aux
          ask n-of  n tumorsb [ set age 3 ]
        ]
      ]
    ]
  ]


end

;------------------------------------- neutrophils movement corresponding to bone
to move-neutrb
  ask neutrsb
  [
   if (neut?) and (not tan1?) and (not tan2?)
    [
      ;facexy 16 0 ;one-of tumors
      facexy 16 16 ;one-of tumors
      fd 0.5
      set age age + 1
    ]

    let tumh one-of tumorsb-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-NeutTum [

        ask neutrsb-here [
          ;show ( word "neutrs="count neutrs-here)

          if (neut?) and (not tan2?) and (not tan1?) [
           ifelse random 100 < ProbOfChange-to-tan1-or-tan2 [  ; probability of change a tan1 or tan2
             set tan1? true
             set tan2? false
             set neut? false
             set color brown - 2
             set tan1 tan1 + 1
           ]
           [
             set tan1? false
             set tan2? true
             set neut? false
             set color brown + 2
             set tan2 tan2 + 1
           ]
          ]
         rt random 360
         fd 0.3
        ]
    ]
    ]
  ]
end

;------------------------------------- macrophages movement corresponding to bone
to move-macrob
  ask macrosb [
   if (macr?) and (not tam1?) and (not tam2?) [
      ;facexy 16 0 ;one-of tumors
      facexy 16 16 ;one-of tumors
      fd 0.5
      set age age + 1
    ]
    let tumh one-of tumorsb-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-MacrTum [
      ask macrosb-here [
        if (macr?) and (not tam2?) and (not tam1?) [
          ifelse random 100 < ProbOfChange-to-tam1-or-tam2 [  ; probability of change a tan1 or tan2
            set tam1? true
            set tam2? false
            set macr? false
            set color green - 2
            set tam1 tam1 + 1
          ]
          [
            set tam1? false
            set tam2? true
            set macr? false
            set color brown + 2
            set tam2 tam2 + 1
          ]
         ]
         rt random 360
         fd 0.3
        ]
      ]
    ]
  ]
end
;______________________________________________________ print files

to print_data_bone [cont number]
  file-open (word "log/bone/bone tumor" number ".csv")
  file-type "time"
  file-type cont
  file-type ","
  file-type count tumorsb
  file-type ","
  file-type count neutrsb
  file-type ","
  file-type count macrosb
  file-type ","
  file-type count natuksb
  file-type "\r\n"
end


;;;;;;;;;;;;;;;;;;

;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;Lung
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
to metastasisLung
  ; Cell actions
  mitosis-tumors tumorsLg

  ask neutrsLg [
    move-neutrLg
    neutrLg-tumor-interc
    set age age + 1
    if (tan1?) and (not tan2?) and (not neut?) [ death max-age-tan1 + 3 ]
    if (tan2?) and (not tan1?) and (not neut?) [ death max-age-tan2 + 2 ]
  ]

  ask macrosLg [
   move-macroLg
   macroLg-tumor-interc
   set age age + 1
   if (tam1?) and (not tam2?) and (not macr?) [ death max-age-tam1 + 3 ]
   if (tam2?) and (not tam1?) and (not macr?) [ death max-age-tam2 + 2 ]
  ]

  ask natuksLg [
   move-natuk natuksLg -16 -16
   set age age + 1
   death max-age-nk
  ]

; recruit of innate immune system cells
  let x cordinates -1 1
  create-neutrsLg neutrophils-to-recruit (ticks - tick-init-metastasis-lung) [ neutrs-cells setxy x -32 set age 0 ]

  let y cordinates -1 -1
  create-natuksLg natural-killers-to-recruit (ticks - tick-init-metastasis-lung) [ natuks-cells setxy 0 y set age 0 ]

  set x cordinates -1 1
  create-macrosLg macrophages-to-recruit (ticks - tick-init-metastasis-lung) [ macros-cells setxy x 0 set age 0 ]

end

to setuplung[a b]
  let cordx  16 * a
  let cordy  16 * b
  create-tumorsLg No.-of-initial-tumor-cells [
    setxy cordx cordy
    tumors-cells
    set age 0
  ]
  ask tumorsLg [ fd 0.5 ]

  create-neutrsLg No.-of-initial-neutrophils-cell [

    let x cordinates a 1
    let y cordinates b -1

    setxy x y
   neutrs-cells
   set age 0
  ]

  create-macrosLg No.-of-initial-macrophages-cells
  [
   let x cordinates a 1
    let y cordinates b -1
    setxy x y
    ;setxy random-xcor random-ycor
   macros-cells
   set age 0
  ]

  create-natuksLg No.-of-initial-natural-killers-cells [
  let x cordinates a 1
    let y cordinates b -1
    setxy x y
    ;setxy random-xcor random-ycor
   natuks-cells
   set age 0
  ]

end

;------------------------------------- neutrophils-tumor interaction corresponding to bone
to neutrLg-tumor-interc
  let tumh one-of tumorsLg-here
  if tumh != nobody
  [
    ask neutrsLg-here
    [
      if random 100 < ProbOfSuccesOf-tan1
      [
        if (tan1?) and (not tan2?) and (not neut?)  ; desactivation of tumor replication
        [

          let m count tumorsLg
          let aux list m No-of-desactivating-tumor-cells-by-tan1
          let n min aux
          ask n-of n tumorsLg [ set age 7 ]
        ]
      ]

      if random 100 < ProbOfSuccesOf-tan2
      [
        if (tan2?) and (not tan1?) and (not neut?)  ; activation of tumor replication
        [

          let m count tumorsLg
          let aux list m No-of-activating-tumor-cells-by-tan2
          let n min aux
          ask n-of n tumorsLg [ set age 1 ]
        ]
      ]

    ]
 ]

end

;------------------------------------- macrophages-tumor interaction corresponding to bone
to macroLg-tumor-interc
  let tumh one-of tumorsLg-here
  if tumh != nobody [
    ask macrosLg-here [
      if random 100 < ProbOfSuccesOf-tam1 [
        if (tam1?) and (not tam2?) and (not macr?) ; phagocitation of desactive tumor cells
        [ attack tumh 4 ] ]
      if random 100 < ProbOfSuccesOf-tam2
      [
        if (tam2?) and (not tam1?) and (not macr?) ; activation of tumor replication
        [
               let m count tumorsLg
          let aux list m No-of-activating-tumor-cells-by-tam2
          let n min aux
          ask n-of  n tumorsLg [ set age 3 ]
        ]
      ]
    ]
  ]


end

;------------------------------------- neutrophils movement corresponding to bone
to move-neutrLg
  ask neutrsLg
  [
   if (neut?) and (not tan1?) and (not tan2?)
    [
      facexy -16 -16 ;one-of tumors
      fd 0.5
      set age age + 1
    ]

    let tumh one-of tumorsLg-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-NeutTum [

        ask neutrsLg-here [
          ;show ( word "neutrs="count neutrs-here)

          if (neut?) and (not tan2?) and (not tan1?) [
           ifelse random 100 < ProbOfChange-to-tan1-or-tan2 [  ; probability of change a tan1 or tan2
             set tan1? true
             set tan2? false
             set neut? false
             set color brown - 2
             set tan1 tan1 + 1
           ]
           [
             set tan1? false
             set tan2? true
             set neut? false
             set color brown + 2
             set tan2 tan2 + 1
           ]
          ]
         rt random 360
         fd 0.3
        ]
    ]
    ]
  ]
end

;------------------------------------- macrophages movement corresponding to bone
to move-macroLg
  ask macrosLg [
   if (macr?) and (not tam1?) and (not tam2?) [
      facexy -16 -16 ;one-of tumors
      fd 0.5
      set age age + 1
    ]
    let tumh one-of tumorsLg-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-MacrTum [
      ask macrosLg-here [
        if (macr?) and (not tam2?) and (not tam1?) [
          ifelse random 100 < ProbOfChange-to-tam1-or-tam2 [  ; probability of change a tan1 or tan2
            set tam1? true
            set tam2? false
            set macr? false
            set color green - 2
            set tam1 tam1 + 1
          ]
          [
            set tam1? false
            set tam2? true
            set macr? false
            set color brown + 2
            set tam2 tam2 + 1
          ]
         ]
         rt random 360
         fd 0.3
        ]
      ]
    ]
  ]
end




;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;Liver
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
to metastasisLiver
  ; Cell actions
  mitosis-tumors tumorsLv

  ask neutrsLv [
    move-neutrLv
    neutrLv-tumor-interc
    set age age + 1
    if (tan1?) and (not tan2?) and (not neut?) [ death max-age-tan1 + 3 ]
    if (tan2?) and (not tan1?) and (not neut?) [ death max-age-tan2 + 2 ]
  ]

  ask macrosLv [
   move-macroLv
   macroLv-tumor-interc
   set age age + 1
   if (tam1?) and (not tam2?) and (not macr?) [ death max-age-tam1 + 3 ]
   if (tam2?) and (not tam1?) and (not macr?) [ death max-age-tam2 + 2 ]
  ]

  ask natuksLv [
   move-natuk natuksLv 16 -16
   set age age + 1
   death max-age-nk
  ]

; recruit of innate immune system cells
   let x cordinates 1 1
  create-neutrsLv neutrophils-to-recruit (ticks - tick-init-metastasis-liver) [ neutrs-cells setxy x -32 set age 0 ]


    let y cordinates -1 -1
  create-natuksLv natural-killers-to-recruit (ticks - tick-init-metastasis-liver) [ natuks-cells setxy 0 y set age 0 ]

  set x cordinates 1 1
  create-macrosLv macrophages-to-recruit (ticks - tick-init-metastasis-liver) [ macros-cells setxy x 0 set age 0 ]

end

to setupliver[a b]
  let cordx  16 * a
  let cordy  16 * b
  create-tumorsLv No.-of-initial-tumor-cells [
    setxy cordx cordy
    tumors-cells
    set age 0
  ]
  ask tumorsLv [ fd 0.5 ]

  create-neutrsLv No.-of-initial-neutrophils-cell [

    let x cordinates a 1
    let y cordinates b -1

    setxy x y
   neutrs-cells
   set age 0
  ]

  create-macrosLv No.-of-initial-macrophages-cells
  [
   let x cordinates a 1
    let y cordinates b -1
    setxy x y
    ;setxy random-xcor random-ycor
   macros-cells
   set age 0
  ]

  create-natuksLv No.-of-initial-natural-killers-cells [
  let x cordinates a 1
    let y cordinates b -1
    setxy x y
    ;setxy random-xcor random-ycor
   natuks-cells
   set age 0
  ]

end

;------------------------------------- neutrophils-tumor interaction corresponding to bone
to neutrLv-tumor-interc
  let tumh one-of tumorsLv-here
  if tumh != nobody
  [
    ask neutrsLv-here
    [
      if random 100 < ProbOfSuccesOf-tan1
      [
        if (tan1?) and (not tan2?) and (not neut?)  ; desactivation of tumor replication
        [

          let m count tumorsLv
          let aux list m No-of-desactivating-tumor-cells-by-tan1
          let n min aux
          ask n-of n tumorsLv [ set age 7 ]
        ]
      ]

      if random 100 < ProbOfSuccesOf-tan2
      [
        if (tan2?) and (not tan1?) and (not neut?)  ; activation of tumor replication
        [

          let m count tumorsLv
          let aux list m No-of-activating-tumor-cells-by-tan2
          let n min aux
          ask n-of n tumorsLv [ set age 1 ]
        ]
      ]

    ]
 ]

end

;------------------------------------- macrophages-tumor interaction corresponding to bone
to macroLv-tumor-interc
  let tumh one-of tumorsLv-here
  if tumh != nobody [
    ask macrosLv-here [
      if random 100 < ProbOfSuccesOf-tam1 [
        if (tam1?) and (not tam2?) and (not macr?) ; phagocitation of desactive tumor cells
        [ attack tumh 4 ] ]
      if random 100 < ProbOfSuccesOf-tam2
      [
        if (tam2?) and (not tam1?) and (not macr?) ; activation of tumor replication
        [
               let m count tumorsLv
          let aux list m No-of-activating-tumor-cells-by-tam2
          let n min aux
          ask n-of  n tumorsLv [ set age 3 ]
        ]
      ]
    ]
  ]


end

;------------------------------------- neutrophils movement corresponding to bone
to move-neutrLv
  ask neutrsLv
  [
   if (neut?) and (not tan1?) and (not tan2?)
    [
      facexy 16 -16 ;one-of tumors
      fd 0.5
      set age age + 1
    ]

    let tumh one-of tumorsLv-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-NeutTum [

        ask neutrsLv-here [
          ;show ( word "neutrs="count neutrs-here)

          if (neut?) and (not tan2?) and (not tan1?) [
           ifelse random 100 < ProbOfChange-to-tan1-or-tan2 [  ; probability of change a tan1 or tan2
             set tan1? true
             set tan2? false
             set neut? false
             set color brown - 2
             set tan1 tan1 + 1
           ]
           [
             set tan1? false
             set tan2? true
             set neut? false
             set color brown + 2
             set tan2 tan2 + 1
           ]
          ]
         rt random 360
         fd 0.3
        ]
    ]
    ]
  ]
end

;------------------------------------- macrophages movement corresponding to bone
to move-macroLv
  ask macrosLv [
   if (macr?) and (not tam1?) and (not tam2?) [
      facexy 16 -16 ;one-of tumors
      fd 0.5
      set age age + 1
    ]
    let tumh one-of tumorsLv-here
    if tumh != nobody [
      if random 100 < ProbOfSuccesOfInterac-MacrTum [
      ask macrosLv-here [
        if (macr?) and (not tam2?) and (not tam1?) [
          ifelse random 100 < ProbOfChange-to-tam1-or-tam2 [  ; probability of change a tan1 or tan2
            set tam1? true
            set tam2? false
            set macr? false
            set color green - 2
            set tam1 tam1 + 1
          ]
          [
            set tam1? false
            set tam2? true
            set macr? false
            set color brown + 2
            set tam2 tam2 + 1
          ]
         ]
         rt random 360
         fd 0.3
        ]
      ]
    ]
  ]
end
@#$#@#$#@
GRAPHICS-WINDOW
386
10
883
508
-1
-1
7.5231
1
10
1
1
1
0
0
0
1
-32
32
-32
32
1
1
1
ticks
30.0

BUTTON
6
10
79
43
setup
setup
NIL
1
T
OBSERVER
NIL
NIL
NIL
NIL
1

BUTTON
180
10
243
43
go
go
T
1
T
OBSERVER
NIL
NIL
NIL
NIL
1

BUTTON
84
10
174
43
go-once
go
NIL
1
T
OBSERVER
NIL
NIL
NIL
NIL
1

MONITOR
13
56
126
101
No. tumor cells
count tumors
17
1
11

MONITOR
181
323
319
368
No. files processed
(word file-num \"/\" total-files)
17
1
11

MONITOR
12
117
125
162
No. neutrophils
count neutrs
17
1
11

PLOT
913
12
1386
360
Primary tumor cells
ticks
number-cells
0.0
10.0
0.0
10.0
true
true
"" ""
PENS
"tumor-cells" 1.0 0 -14454117 true "" "plot count tumors"
"tan1-cells" 1.0 0 -10402772 true "" "plot tan1"
"tan2-cells" 1.0 0 -3889007 true "" "plot tan2"
"tam1-cells" 1.0 0 -13210332 true "" "plot tam1"
"tam2-cells" 1.0 0 -6565750 true "" "plot tam2"
"natural-killers" 1.0 0 -2674135 true "" "plot count natuks"

MONITOR
10
178
67
223
NIL
tan1
17
1
11

MONITOR
71
177
128
222
tan2
tan2
17
1
11

MONITOR
180
142
318
187
No. macrophages
count macros
17
1
11

MONITOR
182
202
239
247
tam1
tam1
17
1
11

MONITOR
261
201
318
246
tam2
tam2
17
1
11

MONITOR
181
263
319
308
No. natural killers
count natuks
17
1
11

BUTTON
252
11
316
44
stop
stop
T
1
T
OBSERVER
NIL
NIL
NIL
NIL
0

SWITCH
180
55
318
88
stop-replication?
stop-replication?
1
1
-1000

MONITOR
10
237
105
282
Hamiltonean
Hamilton
7
1
11

PLOT
386
525
883
784
Ising-like hamiltonian function
Time (Netlogo ticks)
Energy
0.0
10.0
0.0
10.0
true
true
"" ""
PENS
"Tumor" 1.0 0 -2674135 true "" "plot HamiltonTu"
"Immune Sys" 1.0 0 -14454117 true "" "plot HamiltonIS"

TEXTBOX
471
25
621
43
Primary tumor
11
0.0
1

TEXTBOX
715
27
898
45
Metastasis Bone
11
0.0
1

TEXTBOX
464
268
614
286
Metastasis Lung
11
0.0
1

TEXTBOX
716
273
866
291
Metastasis Liver
11
0.0
1

SWITCH
180
97
318
130
graficos
graficos
0
1
-1000

PLOT
1409
10
1880
358
Bone tumor cells
ticks
number-cells
0.0
10.0
0.0
10.0
true
true
"" ""
PENS
"tumor-cells" 1.0 0 -14985354 true "" "plot count tumorsb"
"tan1-cells" 1.0 0 -10146808 true "" "plot tan1"
"tan2-cells" 1.0 0 -3889007 true "" "plot tan2"
"tam1-cells" 1.0 0 -15040220 true "" "plot tam1"
"tam2-cells" 1.0 0 -8330359 true "" "plot tam2"
"natural- killers" 1.0 0 -5298144 true "" "plot  count natuksb"

PLOT
914
387
1385
735
Lung tumor cells
ticks
number-cells
0.0
10.0
0.0
10.0
true
true
"" ""
PENS
"tumor-cells" 1.0 0 -14985354 true "" "plot count tumorsLg"
"tan1-cells" 1.0 0 -10146808 true "" "plot tan1"
"tan2-cells" 1.0 0 -3889007 true "" "plot tan2"
"tam1-cells" 1.0 0 -15040220 true "" "plot tam1"
"tam2-cells" 1.0 0 -8330359 true "" "plot tam2"
"natural- killers" 1.0 0 -5298144 true "" "plot  count natuksLg"

PLOT
1410
388
1881
736
Liver tumor cells
ticks
number-cells
0.0
10.0
0.0
10.0
true
true
"" ""
PENS
"tumor-cells" 1.0 0 -14985354 true "" "plot count tumorsLv"
"tan1-cells" 1.0 0 -10146808 true "" "plot tan1"
"tan2-cells" 1.0 0 -3889007 true "" "plot tan2"
"tam1-cells" 1.0 0 -15040220 true "" "plot tam1"
"tam2-cells" 1.0 0 -8330359 true "" "plot tam2"
"natural- killers" 1.0 0 -5298144 true "" "plot  count natuksLv"

MONITOR
12
301
97
346
No. Th cells
count Th-cells
17
1
11

MONITOR
14
366
96
411
No. Tr cells
count Tr-cells
17
1
11

MONITOR
10
472
190
517
Tick metastasis bone started
ifelse-value tick-init-metastasis-bone >= 0 [\n  tick-init-metastasis-bone\n][\n  \"N/A\"\n]
17
1
11

MONITOR
10
527
191
572
Tick metastasis lung started
ifelse-value tick-init-metastasis-lung >= 0 [\n  tick-init-metastasis-lung\n][\n  \"N/A\"\n]
17
1
11

MONITOR
10
584
191
629
Tick metastasis liver started
ifelse-value tick-init-metastasis-liver >= 0 [\n  tick-init-metastasis-liver\n][\n  \"N/A\"\n]
17
1
11

@#$#@#$#@
## WHAT IS IT?

(a general understanding of what the model is trying to show or explain)

## HOW IT WORKS

(what rules the agents use to create the overall behavior of the model)

## HOW TO USE IT

(how to use the model, including a description of each of the items in the Interface tab)

## THINGS TO NOTICE

(suggested things for the user to notice while running the model)

## THINGS TO TRY

(suggested things for the user to try to do (move sliders, switches, etc.) with the model)

## EXTENDING THE MODEL

(suggested things to add or change in the Code tab to make the model more complicated, detailed, accurate, etc.)

## NETLOGO FEATURES

(interesting or unusual features of NetLogo that the model uses, particularly in the Code tab; or where workarounds were needed for missing features)

## RELATED MODELS

(models in the NetLogo Models Library and elsewhere which are of related interest)

## CREDITS AND REFERENCES

(a reference to the model's URL on the web if it has one, as well as any other necessary credits, citations, and links)
@#$#@#$#@
default
true
0
Polygon -7500403 true true 150 5 40 250 150 205 260 250

airplane
true
0
Polygon -7500403 true true 150 0 135 15 120 60 120 105 15 165 15 195 120 180 135 240 105 270 120 285 150 270 180 285 210 270 165 240 180 180 285 195 285 165 180 105 180 60 165 15

arrow
true
0
Polygon -7500403 true true 150 0 0 150 105 150 105 293 195 293 195 150 300 150

box
false
0
Polygon -7500403 true true 150 285 285 225 285 75 150 135
Polygon -7500403 true true 150 135 15 75 150 15 285 75
Polygon -7500403 true true 15 75 15 225 150 285 150 135
Line -16777216 false 150 285 150 135
Line -16777216 false 150 135 15 75
Line -16777216 false 150 135 285 75

bug
true
0
Circle -7500403 true true 96 182 108
Circle -7500403 true true 110 127 80
Circle -7500403 true true 110 75 80
Line -7500403 true 150 100 80 30
Line -7500403 true 150 100 220 30

butterfly
true
0
Polygon -7500403 true true 150 165 209 199 225 225 225 255 195 270 165 255 150 240
Polygon -7500403 true true 150 165 89 198 75 225 75 255 105 270 135 255 150 240
Polygon -7500403 true true 139 148 100 105 55 90 25 90 10 105 10 135 25 180 40 195 85 194 139 163
Polygon -7500403 true true 162 150 200 105 245 90 275 90 290 105 290 135 275 180 260 195 215 195 162 165
Polygon -16777216 true false 150 255 135 225 120 150 135 120 150 105 165 120 180 150 165 225
Circle -16777216 true false 135 90 30
Line -16777216 false 150 105 195 60
Line -16777216 false 150 105 105 60

car
false
0
Polygon -7500403 true true 300 180 279 164 261 144 240 135 226 132 213 106 203 84 185 63 159 50 135 50 75 60 0 150 0 165 0 225 300 225 300 180
Circle -16777216 true false 180 180 90
Circle -16777216 true false 30 180 90
Polygon -16777216 true false 162 80 132 78 134 135 209 135 194 105 189 96 180 89
Circle -7500403 true true 47 195 58
Circle -7500403 true true 195 195 58

circle
false
0
Circle -7500403 true true 0 0 300

circle 1
false
0
Circle -7500403 true true 0 0 300
Circle -16777216 false false 0 0 300

circle 2
false
0
Circle -7500403 true true 0 0 300
Circle -16777216 true false 30 30 240

cow
false
0
Polygon -7500403 true true 200 193 197 249 179 249 177 196 166 187 140 189 93 191 78 179 72 211 49 209 48 181 37 149 25 120 25 89 45 72 103 84 179 75 198 76 252 64 272 81 293 103 285 121 255 121 242 118 224 167
Polygon -7500403 true true 73 210 86 251 62 249 48 208
Polygon -7500403 true true 25 114 16 195 9 204 23 213 25 200 39 123

cylinder
false
0
Circle -7500403 true true 0 0 300

dot
false
0
Circle -7500403 true true 90 90 120

face happy
false
0
Circle -7500403 true true 8 8 285
Circle -16777216 true false 60 75 60
Circle -16777216 true false 180 75 60
Polygon -16777216 true false 150 255 90 239 62 213 47 191 67 179 90 203 109 218 150 225 192 218 210 203 227 181 251 194 236 217 212 240

face neutral
false
0
Circle -7500403 true true 8 7 285
Circle -16777216 true false 60 75 60
Circle -16777216 true false 180 75 60
Rectangle -16777216 true false 60 195 240 225

face sad
false
0
Circle -7500403 true true 8 8 285
Circle -16777216 true false 60 75 60
Circle -16777216 true false 180 75 60
Polygon -16777216 true false 150 168 90 184 62 210 47 232 67 244 90 220 109 205 150 198 192 205 210 220 227 242 251 229 236 206 212 183

fish
false
0
Polygon -1 true false 44 131 21 87 15 86 0 120 15 150 0 180 13 214 20 212 45 166
Polygon -1 true false 135 195 119 235 95 218 76 210 46 204 60 165
Polygon -1 true false 75 45 83 77 71 103 86 114 166 78 135 60
Polygon -7500403 true true 30 136 151 77 226 81 280 119 292 146 292 160 287 170 270 195 195 210 151 212 30 166
Circle -16777216 true false 215 106 30

flag
false
0
Rectangle -7500403 true true 60 15 75 300
Polygon -7500403 true true 90 150 270 90 90 30
Line -7500403 true 75 135 90 135
Line -7500403 true 75 45 90 45

flower
false
0
Polygon -10899396 true false 135 120 165 165 180 210 180 240 150 300 165 300 195 240 195 195 165 135
Circle -7500403 true true 85 132 38
Circle -7500403 true true 130 147 38
Circle -7500403 true true 192 85 38
Circle -7500403 true true 85 40 38
Circle -7500403 true true 177 40 38
Circle -7500403 true true 177 132 38
Circle -7500403 true true 70 85 38
Circle -7500403 true true 130 25 38
Circle -7500403 true true 96 51 108
Circle -16777216 true false 113 68 74
Polygon -10899396 true false 189 233 219 188 249 173 279 188 234 218
Polygon -10899396 true false 180 255 150 210 105 210 75 240 135 240

house
false
0
Rectangle -7500403 true true 45 120 255 285
Rectangle -16777216 true false 120 210 180 285
Polygon -7500403 true true 15 120 150 15 285 120
Line -16777216 false 30 120 270 120

leaf
false
0
Polygon -7500403 true true 150 210 135 195 120 210 60 210 30 195 60 180 60 165 15 135 30 120 15 105 40 104 45 90 60 90 90 105 105 120 120 120 105 60 120 60 135 30 150 15 165 30 180 60 195 60 180 120 195 120 210 105 240 90 255 90 263 104 285 105 270 120 285 135 240 165 240 180 270 195 240 210 180 210 165 195
Polygon -7500403 true true 135 195 135 240 120 255 105 255 105 285 135 285 165 240 165 195

line
true
0
Line -7500403 true 150 0 150 300

line half
true
0
Line -7500403 true 150 0 150 150

pentagon
false
0
Polygon -7500403 true true 150 15 15 120 60 285 240 285 285 120

person
false
0
Circle -7500403 true true 110 5 80
Polygon -7500403 true true 105 90 120 195 90 285 105 300 135 300 150 225 165 300 195 300 210 285 180 195 195 90
Rectangle -7500403 true true 127 79 172 94
Polygon -7500403 true true 195 90 240 150 225 180 165 105
Polygon -7500403 true true 105 90 60 150 75 180 135 105

plant
false
0
Rectangle -7500403 true true 135 90 165 300
Polygon -7500403 true true 135 255 90 210 45 195 75 255 135 285
Polygon -7500403 true true 165 255 210 210 255 195 225 255 165 285
Polygon -7500403 true true 135 180 90 135 45 120 75 180 135 210
Polygon -7500403 true true 165 180 165 210 225 180 255 120 210 135
Polygon -7500403 true true 135 105 90 60 45 45 75 105 135 135
Polygon -7500403 true true 165 105 165 135 225 105 255 45 210 60
Polygon -7500403 true true 135 90 120 45 150 15 180 45 165 90

sheep
false
15
Circle -1 true true 203 65 88
Circle -1 true true 70 65 162
Circle -1 true true 150 105 120
Polygon -7500403 true false 218 120 240 165 255 165 278 120
Circle -7500403 true false 214 72 67
Rectangle -1 true true 164 223 179 298
Polygon -1 true true 45 285 30 285 30 240 15 195 45 210
Circle -1 true true 3 83 150
Rectangle -1 true true 65 221 80 296
Polygon -1 true true 195 285 210 285 210 240 240 210 195 210
Polygon -7500403 true false 276 85 285 105 302 99 294 83
Polygon -7500403 true false 219 85 210 105 193 99 201 83

square
false
0
Rectangle -7500403 true true 30 30 270 270

square 2
false
0
Rectangle -7500403 true true 30 30 270 270
Rectangle -16777216 true false 60 60 240 240

star
false
0
Polygon -7500403 true true 151 1 185 108 298 108 207 175 242 282 151 216 59 282 94 175 3 108 116 108

target
false
0
Circle -7500403 true true 0 0 300
Circle -16777216 true false 30 30 240
Circle -7500403 true true 60 60 180
Circle -16777216 true false 90 90 120
Circle -7500403 true true 120 120 60

tree
false
0
Circle -7500403 true true 118 3 94
Rectangle -6459832 true false 120 195 180 300
Circle -7500403 true true 65 21 108
Circle -7500403 true true 116 41 127
Circle -7500403 true true 45 90 120
Circle -7500403 true true 104 74 152

triangle
false
0
Polygon -7500403 true true 150 30 15 255 285 255

triangle 2
false
0
Polygon -7500403 true true 150 30 15 255 285 255
Polygon -16777216 true false 151 99 225 223 75 224

truck
false
0
Rectangle -7500403 true true 4 45 195 187
Polygon -7500403 true true 296 193 296 150 259 134 244 104 208 104 207 194
Rectangle -1 true false 195 60 195 105
Polygon -16777216 true false 238 112 252 141 219 141 218 112
Circle -16777216 true false 234 174 42
Rectangle -7500403 true true 181 185 214 194
Circle -16777216 true false 144 174 42
Circle -16777216 true false 24 174 42
Circle -7500403 false true 24 174 42
Circle -7500403 false true 144 174 42
Circle -7500403 false true 234 174 42

turtle
true
0
Polygon -10899396 true false 215 204 240 233 246 254 228 266 215 252 193 210
Polygon -10899396 true false 195 90 225 75 245 75 260 89 269 108 261 124 240 105 225 105 210 105
Polygon -10899396 true false 105 90 75 75 55 75 40 89 31 108 39 124 60 105 75 105 90 105
Polygon -10899396 true false 132 85 134 64 107 51 108 17 150 2 192 18 192 52 169 65 172 87
Polygon -10899396 true false 85 204 60 233 54 254 72 266 85 252 107 210
Polygon -7500403 true true 119 75 179 75 209 101 224 135 220 225 175 261 128 261 81 224 74 135 88 99

wheel
false
0
Circle -7500403 true true 3 3 294
Circle -16777216 true false 30 30 240
Line -7500403 true 150 285 150 15
Line -7500403 true 15 150 285 150
Circle -7500403 true true 120 120 60
Line -7500403 true 216 40 79 269
Line -7500403 true 40 84 269 221
Line -7500403 true 40 216 269 79
Line -7500403 true 84 40 221 269

wolf
false
0
Polygon -16777216 true false 253 133 245 131 245 133
Polygon -7500403 true true 2 194 13 197 30 191 38 193 38 205 20 226 20 257 27 265 38 266 40 260 31 253 31 230 60 206 68 198 75 209 66 228 65 243 82 261 84 268 100 267 103 261 77 239 79 231 100 207 98 196 119 201 143 202 160 195 166 210 172 213 173 238 167 251 160 248 154 265 169 264 178 247 186 240 198 260 200 271 217 271 219 262 207 258 195 230 192 198 210 184 227 164 242 144 259 145 284 151 277 141 293 140 299 134 297 127 273 119 270 105
Polygon -7500403 true true -1 195 14 180 36 166 40 153 53 140 82 131 134 133 159 126 188 115 227 108 236 102 238 98 268 86 269 92 281 87 269 103 269 113

x
false
0
Polygon -7500403 true true 270 75 225 30 30 225 75 270
Polygon -7500403 true true 30 75 75 30 270 225 225 270
@#$#@#$#@
NetLogo 6.1.1
@#$#@#$#@
@#$#@#$#@
@#$#@#$#@
@#$#@#$#@
@#$#@#$#@
default
0.0
-0.2 0 0.0 1.0
0.0 1 1.0 0.0
0.2 0 0.0 1.0
link direction
true
0
Line -7500403 true 150 150 90 180
Line -7500403 true 150 150 210 180
@#$#@#$#@
0
@#$#@#$#@
