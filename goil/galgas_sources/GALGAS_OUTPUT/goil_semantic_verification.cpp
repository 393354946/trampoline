//---------------------------------------------------------------------------*
//                                                                           *
//                  File 'goil_semantic_verification.cpp'                    *
//                    Generated by version version 2.1.0                     *
//                     november 18th, 2010, at 7h24'7"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "version_libpm.h"
#if CURRENT_LIBPM_VERSION != 909
  #error "This file has been compiled with a version of GALGAS that uses libpm version 909, different than the current version (CURRENT_LIBPM_VERSION) of libpm"
#endif

//---------------------------------------------------------------------------*

#include "goil_semantic_verification.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------*

#include "goil_options.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_semantic_verification.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                      Routine 'counters_well_formed'                       *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_counters_5F_well_5F_formed (const GALGAS_counter_5F_map constinArgument_counters,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @foreachInstructionForGeneration
  cEnumerator_counter_5F_map enumerator_752 (constinArgument_counters, true) ;
  //--- simple foreach instruction
  while (enumerator_752.hasCurrentObject ()) {
    //-------- @structuredCastInstructionForGeneration
    if (enumerator_752.current_counter (HERE).reader_max_5F_allowed_5F_value (SOURCE_FILE_AT_LINE (34)).isValid ()) {
      if (enumerator_752.current_counter (HERE).reader_max_5F_allowed_5F_value (SOURCE_FILE_AT_LINE (34)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (enumerator_752.current_lkey (HERE).reader_location (SOURCE_FILE_AT_LINE (36)), GALGAS_string ("MAXALLOWEDVALUE attribute not defined for COUNTER ").operator_concat (enumerator_752.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (36)) COMMA_SOURCE_FILE_AT_LINE (36)) COMMA_SOURCE_FILE_AT_LINE (36)) ;
      }
    }
    //-------- @structuredCastInstructionForGeneration
    if (enumerator_752.current_counter (HERE).reader_ticks_5F_per_5F_base (SOURCE_FILE_AT_LINE (40)).isValid ()) {
      if (enumerator_752.current_counter (HERE).reader_ticks_5F_per_5F_base (SOURCE_FILE_AT_LINE (40)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (enumerator_752.current_lkey (HERE).reader_location (SOURCE_FILE_AT_LINE (42)), GALGAS_string ("TICKSPERBASE attribute not defined for COUNTER ").operator_concat (enumerator_752.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (42)) COMMA_SOURCE_FILE_AT_LINE (42)) COMMA_SOURCE_FILE_AT_LINE (42)) ;
      }
    }
    //-------- @structuredCastInstructionForGeneration
    if (enumerator_752.current_counter (HERE).reader_min_5F_cycle (SOURCE_FILE_AT_LINE (46)).isValid ()) {
      if (enumerator_752.current_counter (HERE).reader_min_5F_cycle (SOURCE_FILE_AT_LINE (46)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void) {
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (enumerator_752.current_lkey (HERE).reader_location (SOURCE_FILE_AT_LINE (48)), GALGAS_string ("MINCYCLE attribute not defined for COUNTER ").operator_concat (enumerator_752.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (48)) COMMA_SOURCE_FILE_AT_LINE (48)) COMMA_SOURCE_FILE_AT_LINE (48)) ;
      }
    }
    enumerator_752.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------*
//                                                                           *
//                       Routine 'alarms_well_formed'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_alarms_5F_well_5F_formed (const GALGAS_alarm_5F_map constinArgument_alarms,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @foreachInstructionForGeneration
  cEnumerator_alarm_5F_map enumerator_1696 (constinArgument_alarms, true) ;
  //--- simple foreach instruction
  while (enumerator_1696.hasCurrentObject ()) {
    //-------- @ifInstructionForGeneration
    if (GALGAS_bool (kIsEqual, enumerator_1696.current_alarm (HERE).reader_counter_5F_name (SOURCE_FILE_AT_LINE (72)).reader_string (SOURCE_FILE_AT_LINE (72)).objectCompare (GALGAS_string (""))).isValidAndTrue ()) {
      //-------- @errorInstructionForGeneration
      GALGAS_location location_0 (enumerator_1696.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_0, GALGAS_string ("COUNTER attribute undefined for ALARM ").operator_concat (enumerator_1696.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (73)) COMMA_SOURCE_FILE_AT_LINE (73)) COMMA_SOURCE_FILE_AT_LINE (73)) ;
    }
    //-------- @structuredCastInstructionForGeneration
    if (enumerator_1696.current_alarm (HERE).reader_action_5F_params (SOURCE_FILE_AT_LINE (76)).isValid ()) {
      if (enumerator_1696.current_alarm (HERE).reader_action_5F_params (SOURCE_FILE_AT_LINE (76)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_void_5F_action) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_1 (enumerator_1696.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("ACTION attribute undefined for ALARM ").operator_concat (enumerator_1696.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (78)) COMMA_SOURCE_FILE_AT_LINE (78)) COMMA_SOURCE_FILE_AT_LINE (78)) ;
      }
    }
    //-------- @structuredCastInstructionForGeneration
    if (enumerator_1696.current_alarm (HERE).reader_autostart_5F_params (SOURCE_FILE_AT_LINE (82)).isValid ()) {
      if (enumerator_1696.current_alarm (HERE).reader_autostart_5F_params (SOURCE_FILE_AT_LINE (82)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_autostart_5F_void) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_2 (enumerator_1696.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("AUTOSTART attribute undefined for ALARM ").operator_concat (enumerator_1696.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (84)) COMMA_SOURCE_FILE_AT_LINE (84)) COMMA_SOURCE_FILE_AT_LINE (84)) ;
      }
    }
    enumerator_1696.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------*
//                                                                           *
//                       Routine 'events_well_formed'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_events_5F_well_5F_formed (const GALGAS_event_5F_map constinArgument_events,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @foreachInstructionForGeneration
  cEnumerator_event_5F_map enumerator_2511 (constinArgument_events, true) ;
  //--- simple foreach instruction
  while (enumerator_2511.hasCurrentObject ()) {
    //-------- @structuredCastInstructionForGeneration
    if (enumerator_2511.current_event (HERE).reader_mask (SOURCE_FILE_AT_LINE (105)).isValid ()) {
      if (enumerator_2511.current_event (HERE).reader_mask (SOURCE_FILE_AT_LINE (105)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_event_5F_mask_5F_void_5F_obj) {
        GALGAS_event_5F_mask_5F_void_5F_obj cast_2615_mask ((cPtr_event_5F_mask_5F_void_5F_obj *) enumerator_2511.current_event (HERE).reader_mask (SOURCE_FILE_AT_LINE (105)).ptr ()) ;
        //-------- @errorInstructionForGeneration
        GALGAS_location location_0 (enumerator_2511.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_0, GALGAS_string ("MASK attribute undefined for EVENT ").operator_concat (enumerator_2511.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (107)) COMMA_SOURCE_FILE_AT_LINE (107)) COMMA_SOURCE_FILE_AT_LINE (107)) ;
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (cast_2615_mask.reader_location (SOURCE_FILE_AT_LINE (108)), GALGAS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (108)) ;
      }
    }
    enumerator_2511.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------*
//                                                                           *
//     Routine 'all_events_and_resources_and_messages_defined_and_used'      *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_all_5F_events_5F_and_5F_resources_5F_and_5F_messages_5F_defined_5F_and_5F_used (const GALGAS_root_5F_obj constinArgument_cpu,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_task_5F_map var_tasks = constinArgument_cpu.reader_tasks (SOURCE_FILE_AT_LINE (118)) ;
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_isr_5F_map var_isrs = constinArgument_cpu.reader_isrs (SOURCE_FILE_AT_LINE (119)) ;
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_event_5F_map var_events = constinArgument_cpu.reader_events (SOURCE_FILE_AT_LINE (120)) ;
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_resource_5F_map var_resources = constinArgument_cpu.reader_resources (SOURCE_FILE_AT_LINE (121)) ;
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_message_5F_map var_messages = constinArgument_cpu.reader_messages (SOURCE_FILE_AT_LINE (122)) ;
  //-------- @localVariableOrConstantDeclarationWithConstructorCallForGeneration
  GALGAS_stringset var_used_5F_events = GALGAS_stringset::constructor_emptySet (SOURCE_FILE_AT_LINE (123)) ;
  //-------- @localVariableOrConstantDeclarationWithConstructorCallForGeneration
  GALGAS_stringset var_used_5F_resources = GALGAS_stringset::constructor_emptySet (SOURCE_FILE_AT_LINE (124)) ;
  //-------- @localVariableOrConstantDeclarationWithConstructorCallForGeneration
  GALGAS_stringset var_used_5F_messages = GALGAS_stringset::constructor_emptySet (SOURCE_FILE_AT_LINE (125)) ;
  //-------- @foreachInstructionForGeneration
  cEnumerator_task_5F_map enumerator_3306 (var_tasks, true) ;
  //--- simple foreach instruction
  while (enumerator_3306.hasCurrentObject ()) {
    //-------- @localVariableDeclarationForGeneration
    GALGAS_lstringlist var_task_5F_events ;
    //-------- @assignmentInstructionForGeneration
    var_task_5F_events = enumerator_3306.current_task (HERE).reader_events (SOURCE_FILE_AT_LINE (132)) ;
    //-------- @foreachInstructionForGeneration
    cEnumerator_lstringlist enumerator_3476 (var_task_5F_events, true) ;
    //--- simple foreach instruction
    while (enumerator_3476.hasCurrentObject ()) {
      //-------- @addAssignInstructionForGeneration
      var_used_5F_events.addAssign_operation (enumerator_3476.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (134)) COMMA_SOURCE_FILE_AT_LINE (134)) ;
      //-------- @ifInstructionForGeneration
      if (var_events.reader_hasKey (enumerator_3476.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (135)) COMMA_SOURCE_FILE_AT_LINE (135)).operator_not (SOURCE_FILE_AT_LINE (135)).isValidAndTrue ()) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_0 (enumerator_3476.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_0, GALGAS_string ("EVENT ").operator_concat (enumerator_3476.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (136)) COMMA_SOURCE_FILE_AT_LINE (136)).operator_concat (GALGAS_string (" is not defined") COMMA_SOURCE_FILE_AT_LINE (136)) COMMA_SOURCE_FILE_AT_LINE (136)) ;
      }
      enumerator_3476.gotoNextObject () ;
    }
    //-------- @localVariableDeclarationForGeneration
    GALGAS_lstringlist var_task_5F_resources ;
    //-------- @assignmentInstructionForGeneration
    var_task_5F_resources = enumerator_3306.current_task (HERE).reader_resources (SOURCE_FILE_AT_LINE (142)) ;
    //-------- @foreachInstructionForGeneration
    cEnumerator_lstringlist enumerator_3850 (var_task_5F_resources, true) ;
    //--- simple foreach instruction
    while (enumerator_3850.hasCurrentObject ()) {
      //-------- @addAssignInstructionForGeneration
      var_used_5F_resources.addAssign_operation (enumerator_3850.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (144)) COMMA_SOURCE_FILE_AT_LINE (144)) ;
      //-------- @ifInstructionForGeneration
      if (var_resources.reader_hasKey (enumerator_3850.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (145)) COMMA_SOURCE_FILE_AT_LINE (145)).operator_not (SOURCE_FILE_AT_LINE (145)).isValidAndTrue ()) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_1 (enumerator_3850.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("RESOURCE ").operator_concat (enumerator_3850.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (146)) COMMA_SOURCE_FILE_AT_LINE (146)).operator_concat (GALGAS_string (" is not defined") COMMA_SOURCE_FILE_AT_LINE (146)) COMMA_SOURCE_FILE_AT_LINE (146)) ;
      }
      enumerator_3850.gotoNextObject () ;
    }
    //-------- @localVariableDeclarationForGeneration
    GALGAS_lstringlist var_task_5F_messages ;
    //-------- @assignmentInstructionForGeneration
    var_task_5F_messages = enumerator_3306.current_task (HERE).reader_messages (SOURCE_FILE_AT_LINE (152)) ;
    //-------- @foreachInstructionForGeneration
    cEnumerator_lstringlist enumerator_4218 (var_task_5F_messages, true) ;
    //--- simple foreach instruction
    while (enumerator_4218.hasCurrentObject ()) {
      //-------- @addAssignInstructionForGeneration
      var_used_5F_messages.addAssign_operation (enumerator_4218.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (154)) COMMA_SOURCE_FILE_AT_LINE (154)) ;
      //-------- @ifInstructionForGeneration
      if (var_messages.reader_hasKey (enumerator_4218.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (155)) COMMA_SOURCE_FILE_AT_LINE (155)).operator_not (SOURCE_FILE_AT_LINE (155)).isValidAndTrue ()) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_2 (enumerator_4218.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("MESSAGE ").operator_concat (enumerator_4218.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (156)) COMMA_SOURCE_FILE_AT_LINE (156)).operator_concat (GALGAS_string (" is not defined") COMMA_SOURCE_FILE_AT_LINE (156)) COMMA_SOURCE_FILE_AT_LINE (156)) ;
      }
      enumerator_4218.gotoNextObject () ;
    }
    enumerator_3306.gotoNextObject () ;
  }
  //-------- @foreachInstructionForGeneration
  cEnumerator_isr_5F_map enumerator_4540 (var_isrs, true) ;
  //--- simple foreach instruction
  while (enumerator_4540.hasCurrentObject ()) {
    //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
    GALGAS_lstringlist var_isr_5F_resources = enumerator_4540.current_isr (HERE).reader_resources (SOURCE_FILE_AT_LINE (165)) ;
    //-------- @foreachInstructionForGeneration
    cEnumerator_lstringlist enumerator_4699 (var_isr_5F_resources, true) ;
    //--- simple foreach instruction
    while (enumerator_4699.hasCurrentObject ()) {
      //-------- @addAssignInstructionForGeneration
      var_used_5F_resources.addAssign_operation (enumerator_4699.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (167)) COMMA_SOURCE_FILE_AT_LINE (167)) ;
      //-------- @ifInstructionForGeneration
      if (var_resources.reader_hasKey (enumerator_4699.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (168)) COMMA_SOURCE_FILE_AT_LINE (168)).operator_not (SOURCE_FILE_AT_LINE (168)).isValidAndTrue ()) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_3 (enumerator_4540.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("RESOURCE ").operator_concat (enumerator_4699.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (169)) COMMA_SOURCE_FILE_AT_LINE (169)).operator_concat (GALGAS_string (" is not defined") COMMA_SOURCE_FILE_AT_LINE (169)) COMMA_SOURCE_FILE_AT_LINE (169)) ;
      }
      enumerator_4699.gotoNextObject () ;
    }
    //-------- @localVariableDeclarationForGeneration
    GALGAS_lstringlist var_isr_5F_messages ;
    //-------- @assignmentInstructionForGeneration
    var_isr_5F_messages = enumerator_4540.current_isr (HERE).reader_messages (SOURCE_FILE_AT_LINE (175)) ;
    //-------- @foreachInstructionForGeneration
    cEnumerator_lstringlist enumerator_5056 (var_isr_5F_messages, true) ;
    //--- simple foreach instruction
    while (enumerator_5056.hasCurrentObject ()) {
      //-------- @addAssignInstructionForGeneration
      var_used_5F_messages.addAssign_operation (enumerator_5056.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (177)) COMMA_SOURCE_FILE_AT_LINE (177)) ;
      //-------- @ifInstructionForGeneration
      if (var_messages.reader_hasKey (enumerator_5056.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (178)) COMMA_SOURCE_FILE_AT_LINE (178)).operator_not (SOURCE_FILE_AT_LINE (178)).isValidAndTrue ()) {
        //-------- @errorInstructionForGeneration
        GALGAS_location location_4 (enumerator_4540.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("MESSAGE ").operator_concat (enumerator_5056.current_mValue (HERE).reader_string (SOURCE_FILE_AT_LINE (179)) COMMA_SOURCE_FILE_AT_LINE (179)).operator_concat (GALGAS_string (" is not defined") COMMA_SOURCE_FILE_AT_LINE (179)) COMMA_SOURCE_FILE_AT_LINE (179)) ;
      }
      enumerator_5056.gotoNextObject () ;
    }
    enumerator_4540.gotoNextObject () ;
  }
  //-------- @foreachInstructionForGeneration
  cEnumerator_event_5F_map enumerator_5364 (var_events, true) ;
  //--- simple foreach instruction
  while (enumerator_5364.hasCurrentObject ()) {
    //-------- @ifInstructionForGeneration
    if (var_used_5F_events.reader_hasKey (enumerator_5364.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (187)) COMMA_SOURCE_FILE_AT_LINE (187)).operator_not (SOURCE_FILE_AT_LINE (187)).isValidAndTrue ()) {
      //-------- @warningInstructionForGeneration
      GALGAS_location location_5 (enumerator_5364.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_5, GALGAS_string ("EVENT ").operator_concat (enumerator_5364.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (188)) COMMA_SOURCE_FILE_AT_LINE (188)).operator_concat (GALGAS_string (" is defined but never used") COMMA_SOURCE_FILE_AT_LINE (188)) COMMA_SOURCE_FILE_AT_LINE (188)) ;
    }
    enumerator_5364.gotoNextObject () ;
  }
  //-------- @foreachInstructionForGeneration
  cEnumerator_resource_5F_map enumerator_5646 (var_resources, true) ;
  //--- simple foreach instruction
  while (enumerator_5646.hasCurrentObject ()) {
    //-------- @ifInstructionForGeneration
    if (var_used_5F_resources.reader_hasKey (enumerator_5646.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (194)) COMMA_SOURCE_FILE_AT_LINE (194)).operator_not (SOURCE_FILE_AT_LINE (194)).isValidAndTrue ()) {
      //-------- @warningInstructionForGeneration
      GALGAS_location location_6 (enumerator_5646.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_6, GALGAS_string ("RESOURCE ").operator_concat (enumerator_5646.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (195)) COMMA_SOURCE_FILE_AT_LINE (195)).operator_concat (GALGAS_string (" is defined but never used") COMMA_SOURCE_FILE_AT_LINE (195)) COMMA_SOURCE_FILE_AT_LINE (195)) ;
    }
    enumerator_5646.gotoNextObject () ;
  }
  //-------- @foreachInstructionForGeneration
  cEnumerator_message_5F_map enumerator_5924 (var_messages, true) ;
  //--- simple foreach instruction
  while (enumerator_5924.hasCurrentObject ()) {
    //-------- @ifInstructionForGeneration
    if (var_used_5F_messages.reader_hasKey (enumerator_5924.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (201)) COMMA_SOURCE_FILE_AT_LINE (201)).operator_not (SOURCE_FILE_AT_LINE (201)).isValidAndTrue ()) {
      //-------- @warningInstructionForGeneration
      GALGAS_location location_7 (enumerator_5924.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_7, GALGAS_string ("MESSAGE ").operator_concat (enumerator_5924.current_lkey (HERE).reader_string (SOURCE_FILE_AT_LINE (202)) COMMA_SOURCE_FILE_AT_LINE (202)).operator_concat (GALGAS_string (" is defined but never used") COMMA_SOURCE_FILE_AT_LINE (202)) COMMA_SOURCE_FILE_AT_LINE (202)) ;
    }
    enumerator_5924.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------*
//                                                                           *
//                    Routine 'all_event_masks_different'                    *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_all_5F_event_5F_masks_5F_different (GALGAS_event_5F_map inArgument_events,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @localVariableOrConstantDeclarationWithConstructorCallForGeneration
  GALGAS_stringset var_defined_5F_masks = GALGAS_stringset::constructor_emptySet (SOURCE_FILE_AT_LINE (211)) ;
  //-------- @foreachInstructionForGeneration
  cEnumerator_event_5F_map enumerator_6254 (inArgument_events, true) ;
  //--- simple foreach instruction
  while (enumerator_6254.hasCurrentObject ()) {
    //-------- @localVariableDeclarationForGeneration
    GALGAS_event_5F_mask_5F_obj var_mask ;
    //-------- @assignmentInstructionForGeneration
    var_mask = enumerator_6254.current_event (HERE).reader_mask (SOURCE_FILE_AT_LINE (214)) ;
    //-------- @structuredCastInstructionForGeneration
    if (var_mask.isValid ()) {
      if (var_mask.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_event_5F_mask_5F_user_5F_obj) {
        GALGAS_event_5F_mask_5F_user_5F_obj cast_6397_m ((cPtr_event_5F_mask_5F_user_5F_obj *) var_mask.ptr ()) ;
        //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
        GALGAS_string var_mask_5F_in_5F_string = cast_6397_m.reader_mask (SOURCE_FILE_AT_LINE (217)).reader_uint_36__34_ (SOURCE_FILE_AT_LINE (217)).reader_string (SOURCE_FILE_AT_LINE (217)) ;
        //-------- @ifInstructionForGeneration
        if (var_defined_5F_masks.reader_hasKey (var_mask_5F_in_5F_string COMMA_SOURCE_FILE_AT_LINE (218)).isValidAndTrue ()) {
          //-------- @warningInstructionForGeneration
          GALGAS_location location_0 (enumerator_6254.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticWarning (location_0, GALGAS_string ("Mask ").operator_concat (var_mask_5F_in_5F_string COMMA_SOURCE_FILE_AT_LINE (219)).operator_concat (GALGAS_string (" already used") COMMA_SOURCE_FILE_AT_LINE (219)) COMMA_SOURCE_FILE_AT_LINE (219)) ;
        }else{
          //-------- @addAssignInstructionForGeneration
          var_defined_5F_masks.addAssign_operation (var_mask_5F_in_5F_string COMMA_SOURCE_FILE_AT_LINE (221)) ;
        }
      }
    }
    enumerator_6254.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------*
//                                                                           *
//                    Routine 'all_alarm_actions_correct'                    *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_all_5F_alarm_5F_actions_5F_correct (GALGAS_alarm_5F_map inArgument_alarms,
                                                 GALGAS_task_5F_map inArgument_tasks,
                                                 GALGAS_counter_5F_map inArgument_counters,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @localVariableDeclarationForGeneration
  GALGAS_stringset var_defined_5F_task_5F_names ;
  //-------- @assignmentInstructionForGeneration
  var_defined_5F_task_5F_names = inArgument_tasks.reader_allKeys (SOURCE_FILE_AT_LINE (235)) ;
  //-------- @foreachInstructionForGeneration
  cEnumerator_alarm_5F_map enumerator_6917 (inArgument_alarms, true) ;
  //--- simple foreach instruction
  while (enumerator_6917.hasCurrentObject ()) {
    //-------- @localVariableDeclarationForGeneration
    GALGAS_action_5F_obj var_alarm_5F_action ;
    //-------- @assignmentInstructionForGeneration
    var_alarm_5F_action = enumerator_6917.current_alarm (HERE).reader_action_5F_params (SOURCE_FILE_AT_LINE (238)) ;
    //-------- @structuredCastInstructionForGeneration
    if (var_alarm_5F_action.isValid ()) {
      if (var_alarm_5F_action.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_setevent_5F_action) {
        GALGAS_setevent_5F_action cast_7097_act ((cPtr_setevent_5F_action *) var_alarm_5F_action.ptr ()) ;
        //-------- @ifInstructionForGeneration
        if (var_defined_5F_task_5F_names.reader_hasKey (cast_7097_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (241)).reader_string (SOURCE_FILE_AT_LINE (241)) COMMA_SOURCE_FILE_AT_LINE (241)).operator_not (SOURCE_FILE_AT_LINE (241)).isValidAndTrue ()) {
          //-------- @errorInstructionForGeneration
          GALGAS_location location_0 (cast_7097_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (242)).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_0, GALGAS_string ("TASK ").operator_concat (cast_7097_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (242)).reader_string (SOURCE_FILE_AT_LINE (242)) COMMA_SOURCE_FILE_AT_LINE (242)).operator_concat (GALGAS_string (" is never defined") COMMA_SOURCE_FILE_AT_LINE (242)) COMMA_SOURCE_FILE_AT_LINE (242)) ;
        }else{
          //-------- @localVariableDeclarationForGeneration
          GALGAS_task_5F_obj var_task_5F_data ;
          //-------- @localVariableDeclarationForGeneration
          GALGAS_lstringlist var_known_5F_events ;
          //-------- @methodCallInstructionForGeneration
          inArgument_tasks.method_get (cast_7097_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (246)), var_task_5F_data, inCompiler COMMA_SOURCE_FILE_AT_LINE (246)) ;
          //-------- END @methodCallInstructionForGeneration
          //-------- @assignmentInstructionForGeneration
          var_known_5F_events = var_task_5F_data.reader_events (SOURCE_FILE_AT_LINE (247)) ;
          //-------- @ifInstructionForGeneration
          if (GALGAS_bool (kIsEqual, var_known_5F_events.reader_length (SOURCE_FILE_AT_LINE (248)).objectCompare (GALGAS_uint ((PMUInt32) 0U))).isValidAndTrue ()) {
            //-------- @errorInstructionForGeneration
            GALGAS_location location_1 (cast_7097_act.reader_event_5F_name (SOURCE_FILE_AT_LINE (249)).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_1, GALGAS_string ("An alarm can't set an Event to a basic task (Task ").operator_concat (cast_7097_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (249)).reader_string (SOURCE_FILE_AT_LINE (249)) COMMA_SOURCE_FILE_AT_LINE (249)).operator_concat (GALGAS_string (" is a basic task).") COMMA_SOURCE_FILE_AT_LINE (249)) COMMA_SOURCE_FILE_AT_LINE (249)) ;
          }
        }
      }else if (var_alarm_5F_action.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_activatetask_5F_action) {
        GALGAS_activatetask_5F_action cast_7975_act ((cPtr_activatetask_5F_action *) var_alarm_5F_action.ptr ()) ;
        //-------- @ifInstructionForGeneration
        if (var_defined_5F_task_5F_names.reader_hasKey (cast_7975_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (258)).reader_string (SOURCE_FILE_AT_LINE (258)) COMMA_SOURCE_FILE_AT_LINE (258)).operator_not (SOURCE_FILE_AT_LINE (258)).isValidAndTrue ()) {
          //-------- @errorInstructionForGeneration
          GALGAS_location location_2 (cast_7975_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (259)).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("TASK ").operator_concat (cast_7975_act.reader_task_5F_name (SOURCE_FILE_AT_LINE (259)).reader_string (SOURCE_FILE_AT_LINE (259)) COMMA_SOURCE_FILE_AT_LINE (259)).operator_concat (GALGAS_string (" is not defined") COMMA_SOURCE_FILE_AT_LINE (259)) COMMA_SOURCE_FILE_AT_LINE (259)) ;
        }
      }else if (var_alarm_5F_action.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_incrementcounter_5F_action) {
        GALGAS_incrementcounter_5F_action cast_8196_act ((cPtr_incrementcounter_5F_action *) var_alarm_5F_action.ptr ()) ;
        //-------- @ifInstructionForGeneration
        if (inArgument_counters.reader_hasKey (cast_8196_act.reader_counter_5F_name (SOURCE_FILE_AT_LINE (262)).reader_string (SOURCE_FILE_AT_LINE (262)) COMMA_SOURCE_FILE_AT_LINE (262)).isValidAndTrue ()) {
          //-------- @localVariableDeclarationForGeneration
          GALGAS_counter_5F_obj var_cnt ;
          //-------- @methodCallInstructionForGeneration
          inArgument_counters.method_getCounter (cast_8196_act.reader_counter_5F_name (SOURCE_FILE_AT_LINE (264)), var_cnt, inCompiler COMMA_SOURCE_FILE_AT_LINE (264)) ;
          //-------- END @methodCallInstructionForGeneration
          //-------- @structuredCastInstructionForGeneration
          if (var_cnt.reader_type (SOURCE_FILE_AT_LINE (265)).isValid ()) {
            if (var_cnt.reader_type (SOURCE_FILE_AT_LINE (265)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_software_5F_counter) {
            }else{
              //-------- @errorInstructionForGeneration
              GALGAS_location location_3 (cast_8196_act.reader_counter_5F_name (SOURCE_FILE_AT_LINE (268)).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_3, GALGAS_string ("OS285 - It is impossible to increment a hardware counter (").operator_concat (cast_8196_act.reader_counter_5F_name (SOURCE_FILE_AT_LINE (268)).reader_string (SOURCE_FILE_AT_LINE (268)) COMMA_SOURCE_FILE_AT_LINE (268)).operator_concat (GALGAS_string (" is not a software counter).") COMMA_SOURCE_FILE_AT_LINE (268)) COMMA_SOURCE_FILE_AT_LINE (268)) ;
            }
          }
        }else{
          //-------- @errorInstructionForGeneration
          GALGAS_location location_4 (cast_8196_act.reader_counter_5F_name (SOURCE_FILE_AT_LINE (271)).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("COUNTER ").operator_concat (cast_8196_act.reader_counter_5F_name (SOURCE_FILE_AT_LINE (271)).reader_string (SOURCE_FILE_AT_LINE (271)) COMMA_SOURCE_FILE_AT_LINE (271)).operator_concat (GALGAS_string (" is never defined") COMMA_SOURCE_FILE_AT_LINE (271)) COMMA_SOURCE_FILE_AT_LINE (271)) ;
        }
      }
    }
    enumerator_6917.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------*
//                                                                           *
//                           Routine 'verify_all'                            *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_verify_5F_all (GALGAS_root_5F_obj & ioArgument_cpu,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  { //-------- @routineCallInstructionForGeneration
  routine_tasks_5F_well_5F_formed (ioArgument_cpu.reader_tasks (SOURCE_FILE_AT_LINE (288)), inCompiler COMMA_SOURCE_FILE_AT_LINE (288)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_counters_5F_well_5F_formed (ioArgument_cpu.reader_counters (SOURCE_FILE_AT_LINE (289)), inCompiler COMMA_SOURCE_FILE_AT_LINE (289)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_alarms_5F_well_5F_formed (ioArgument_cpu.reader_alarms (SOURCE_FILE_AT_LINE (290)), inCompiler COMMA_SOURCE_FILE_AT_LINE (290)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_resources_5F_well_5F_formed (ioArgument_cpu.reader_resources (SOURCE_FILE_AT_LINE (291)), inCompiler COMMA_SOURCE_FILE_AT_LINE (291)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_isrs_5F_well_5F_formed (ioArgument_cpu.reader_isrs (SOURCE_FILE_AT_LINE (292)), inCompiler COMMA_SOURCE_FILE_AT_LINE (292)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_events_5F_well_5F_formed (ioArgument_cpu.reader_events (SOURCE_FILE_AT_LINE (293)), inCompiler COMMA_SOURCE_FILE_AT_LINE (293)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_networkmessages_5F_well_5F_formed (ioArgument_cpu.reader_net_5F_messages (SOURCE_FILE_AT_LINE (294)), inCompiler COMMA_SOURCE_FILE_AT_LINE (294)) ;
  } //-------- @routineCallInstructionForGeneration
  //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
  GALGAS_resource_5F_map var_resources = ioArgument_cpu.reader_resources (SOURCE_FILE_AT_LINE (297)) ;
  { //-------- @routineCallInstructionForGeneration
  routine_resolve_5F_linked_5F_resources (var_resources, inCompiler COMMA_SOURCE_FILE_AT_LINE (298)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @modifierCallInstructionForGeneration
  ioArgument_cpu.modifier_setResources (var_resources COMMA_SOURCE_FILE_AT_LINE (299)) ;
  } //-------- END @typeMethodInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_all_5F_events_5F_and_5F_resources_5F_and_5F_messages_5F_defined_5F_and_5F_used (ioArgument_cpu, inCompiler COMMA_SOURCE_FILE_AT_LINE (301)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_all_5F_alarm_5F_actions_5F_correct (ioArgument_cpu.reader_alarms (SOURCE_FILE_AT_LINE (303)), ioArgument_cpu.reader_tasks (SOURCE_FILE_AT_LINE (303)), ioArgument_cpu.reader_counters (SOURCE_FILE_AT_LINE (303)), inCompiler COMMA_SOURCE_FILE_AT_LINE (303)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_counters_5F_of_5F_alarms_5F_defined (ioArgument_cpu.reader_alarms (SOURCE_FILE_AT_LINE (304)), ioArgument_cpu.reader_counters (SOURCE_FILE_AT_LINE (304)), inCompiler COMMA_SOURCE_FILE_AT_LINE (304)) ;
  } //-------- @routineCallInstructionForGeneration
  { //-------- @routineCallInstructionForGeneration
  routine_networkmessages_5F_exist_5F_and_5F_ok (ioArgument_cpu.reader_messages (SOURCE_FILE_AT_LINE (305)), ioArgument_cpu.reader_net_5F_messages (SOURCE_FILE_AT_LINE (305)), inCompiler COMMA_SOURCE_FILE_AT_LINE (305)) ;
  } //-------- @routineCallInstructionForGeneration
  //-------- @ifInstructionForGeneration
  if (GALGAS_bool (gOption_goil_5F_options_autosar_5F_on.reader_value ()).isValidAndTrue ()) {
    { //-------- @routineCallInstructionForGeneration
    routine_schedule_5F_tables_5F_well_5F_formed (ioArgument_cpu.reader_scheduletables (SOURCE_FILE_AT_LINE (309)), ioArgument_cpu, inCompiler COMMA_SOURCE_FILE_AT_LINE (309)) ;
    } //-------- @routineCallInstructionForGeneration
    { //-------- @routineCallInstructionForGeneration
    routine_schedule_5F_tables_5F_counters_5F_exist_5F_and_5F_compatible (ioArgument_cpu.reader_scheduletables (SOURCE_FILE_AT_LINE (310)), ioArgument_cpu.reader_counters (SOURCE_FILE_AT_LINE (310)), inCompiler COMMA_SOURCE_FILE_AT_LINE (310)) ;
    } //-------- @routineCallInstructionForGeneration
    { //-------- @routineCallInstructionForGeneration
    routine_schedule_5F_tables_5F_tasks_5F_and_5F_events_5F_exist (ioArgument_cpu, ioArgument_cpu.reader_tasks (SOURCE_FILE_AT_LINE (311)), inCompiler COMMA_SOURCE_FILE_AT_LINE (311)) ;
    } //-------- @routineCallInstructionForGeneration
    { //-------- @routineCallInstructionForGeneration
    routine_apps_5F_well_5F_formed (ioArgument_cpu, inCompiler COMMA_SOURCE_FILE_AT_LINE (312)) ;
    } //-------- @routineCallInstructionForGeneration
  }
}


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


