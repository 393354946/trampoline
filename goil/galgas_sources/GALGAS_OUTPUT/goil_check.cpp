//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'goil_check.cpp'                            *
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

#include "goil_check.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------*

#include "goil_options.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_check.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                       Routine 'check_uint32_range'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_check_5F_uint_33__32__5F_range (GALGAS_uint_33__32__5F_set inArgument_set,
                                             GALGAS_location inArgument_loc,
                                             GALGAS_uint inArgument_val,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  //-------- @structuredCastInstructionForGeneration
  if (inArgument_set.isValid ()) {
    if (inArgument_set.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_33__32__5F_range) {
      GALGAS_uint_33__32__5F_range cast_619_r ((cPtr_uint_33__32__5F_range *) inArgument_set.ptr ()) ;
      //-------- @ifInstructionForGeneration
      if (GALGAS_bool (kIsStrictInf, inArgument_val.objectCompare (cast_619_r.reader_min (SOURCE_FILE_AT_LINE (38)))).operator_or (GALGAS_bool (kIsStrictSup, inArgument_val.objectCompare (cast_619_r.reader_max (SOURCE_FILE_AT_LINE (38)))) COMMA_SOURCE_FILE_AT_LINE (38)).isValidAndTrue ()) {
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (inArgument_loc, GALGAS_string ("UINT32 not within specified range.") COMMA_SOURCE_FILE_AT_LINE (39)) ;
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (cast_619_r.reader_loc (SOURCE_FILE_AT_LINE (40)), GALGAS_string ("Range was defined here") COMMA_SOURCE_FILE_AT_LINE (40)) ;
      }
    }else if (inArgument_set.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_uint_33__32__5F_list) {
      GALGAS_uint_33__32__5F_list cast_830_l ((cPtr_uint_33__32__5F_list *) inArgument_set.ptr ()) ;
      //-------- @localVariableOrConstantDeclarationWithSourceExpressionForGeneration
      GALGAS_bool var_not_5F_matched = GALGAS_bool (true) ;
      //-------- @foreachInstructionForGeneration
      cEnumerator_list_5F_uint_33__32_ enumerator_894 (cast_830_l.reader_li (SOURCE_FILE_AT_LINE (44)), true) ;
      //--- simple foreach instruction
      while (enumerator_894.hasCurrentObject ()) {
        //-------- @ifInstructionForGeneration
        if (GALGAS_bool (kIsEqual, inArgument_val.objectCompare (enumerator_894.current_val (HERE))).isValidAndTrue ()) {
          //-------- @assignmentInstructionForGeneration
          var_not_5F_matched = GALGAS_bool (false) ;
        }
        enumerator_894.gotoNextObject () ;
      }
      //-------- @ifInstructionForGeneration
      if (var_not_5F_matched.isValidAndTrue ()) {
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (inArgument_loc, GALGAS_string ("UINT32 is not included in specified set.") COMMA_SOURCE_FILE_AT_LINE (50)) ;
        //-------- @errorInstructionForGeneration
        inCompiler->emitSemanticError (cast_830_l.reader_loc (SOURCE_FILE_AT_LINE (51)), GALGAS_string ("Set was defined here") COMMA_SOURCE_FILE_AT_LINE (51)) ;
      }
    }
  }
}


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


