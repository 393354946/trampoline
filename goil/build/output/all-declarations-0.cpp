#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"


//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype::GALGAS_Ttype (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_boolType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_boolType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_intType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_intType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_floatType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_floatType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_stringType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_stringType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_listType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_listType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_mapType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_mapType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_structType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_structType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_enumType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_enumType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_functionType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_functionType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::constructor_unconstructedType (UNUSED_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  result.mEnum = kEnum_unconstructedType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_Ttype [11] = {
  "(not built)",
  "boolType",
  "intType",
  "floatType",
  "stringType",
  "listType",
  "mapType",
  "structType",
  "enumType",
  "functionType",
  "unconstructedType"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isIntType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_intType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isFloatType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_floatType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isFunctionType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_functionType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_Ttype::getter_isUnconstructedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unconstructedType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_Ttype::description (C_String & ioString,
                                const int32_t /* inIndentation */) const {
  ioString << "<enum @Ttype: " << gEnumNameArrayFor_Ttype [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_Ttype::objectCompare (const GALGAS_Ttype & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                     @Ttype type                                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_Ttype ("Ttype",
                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_Ttype::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_Ttype ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_Ttype::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_Ttype (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_Ttype::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_Ttype result ;
  const GALGAS_Ttype * p = (const GALGAS_Ttype *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_Ttype *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("Ttype", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Class for element of '@TtypeList' list                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_TtypeList : public cCollectionElement {
  public : GALGAS_TtypeList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_TtypeList (const GALGAS_Ttype & in_mType
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_TtypeList::cCollectionElement_TtypeList (const GALGAS_Ttype & in_mType
                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_TtypeList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_TtypeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_TtypeList (mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_TtypeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_TtypeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_TtypeList * operand = (cCollectionElement_TtypeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_TtypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList::GALGAS_TtypeList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList::GALGAS_TtypeList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList GALGAS_TtypeList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_TtypeList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList GALGAS_TtypeList::constructor_listWithValue (const GALGAS_Ttype & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_TtypeList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_TtypeList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GALGAS_Ttype & in_mType
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_TtypeList * p = NULL ;
  macroMyNew (p, cCollectionElement_TtypeList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::addAssign_operation (const GALGAS_Ttype & inOperand0
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TtypeList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::setter_insertAtIndex (const GALGAS_Ttype inOperand0,
                                             const GALGAS_uint inInsertionIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TtypeList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::setter_removeAtIndex (GALGAS_Ttype & outOperand0,
                                             const GALGAS_uint inRemoveIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_TtypeList * p = (cCollectionElement_TtypeList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_TtypeList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::setter_popFirst (GALGAS_Ttype & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TtypeList * p = (cCollectionElement_TtypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TtypeList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::setter_popLast (GALGAS_Ttype & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TtypeList * p = (cCollectionElement_TtypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TtypeList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::method_first (GALGAS_Ttype & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TtypeList * p = (cCollectionElement_TtypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TtypeList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::method_last (GALGAS_Ttype & outOperand0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TtypeList * p = (cCollectionElement_TtypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TtypeList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList GALGAS_TtypeList::add_operation (const GALGAS_TtypeList & inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_TtypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList GALGAS_TtypeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_TtypeList result = GALGAS_TtypeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList GALGAS_TtypeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_TtypeList result = GALGAS_TtypeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList GALGAS_TtypeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_TtypeList result = GALGAS_TtypeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TtypeList::plusAssign_operation (const GALGAS_TtypeList inOperand,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_TtypeList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TtypeList * p = (cCollectionElement_TtypeList *) attributes.ptr () ;
  GALGAS_Ttype result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TtypeList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_TtypeList::cEnumerator_TtypeList (const GALGAS_TtypeList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList_2D_element cEnumerator_TtypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_TtypeList * p = (const cCollectionElement_TtypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TtypeList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype cEnumerator_TtypeList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_TtypeList * p = (const cCollectionElement_TtypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TtypeList) ;
  return p->mObject.mAttribute_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                   @TtypeList type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TtypeList ("TtypeList",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_TtypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TtypeList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_TtypeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TtypeList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TtypeList GALGAS_TtypeList::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_TtypeList result ;
  const GALGAS_TtypeList * p = (const GALGAS_TtypeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TtypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TtypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_TfieldMap::cMapElement_TfieldMap (const GALGAS_lstring & inKey,
                                              const GALGAS_Ttype & in_mType,
                                              const GALGAS_Tvalue & in_mValue
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mType (in_mType),
mAttribute_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_TfieldMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_TfieldMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_TfieldMap (mAttribute_lkey, mAttribute_mType, mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_TfieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mAttribute_mValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_TfieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_TfieldMap * operand = (cMapElement_TfieldMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mType.objectCompare (operand->mAttribute_mType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (operand->mAttribute_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap::GALGAS_TfieldMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap::GALGAS_TfieldMap (const GALGAS_TfieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap & GALGAS_TfieldMap::operator = (const GALGAS_TfieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap GALGAS_TfieldMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_TfieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap GALGAS_TfieldMap::constructor_mapWithMapToOverride (const GALGAS_TfieldMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap GALGAS_TfieldMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_TfieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_Ttype & inArgument0,
                                            const GALGAS_Tvalue & inArgument1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_TfieldMap * p = NULL ;
  macroMyNew (p, cMapElement_TfieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@TfieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMap::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_Ttype inArgument0,
                                         GALGAS_Tvalue inArgument1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_TfieldMap * p = NULL ;
  macroMyNew (p, cMapElement_TfieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a template field named '%K' is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_TfieldMap_searchKey = "there is no template field named '%K'" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_Ttype & outArgument0,
                                         GALGAS_Tvalue & outArgument1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_TfieldMap * p = (const cMapElement_TfieldMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_TfieldMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_TfieldMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMap::setter_removeKey (GALGAS_lstring inKey,
                                         GALGAS_Ttype & outArgument0,
                                         GALGAS_Tvalue & outArgument1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no template field named '%K' to delete" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_TfieldMap * p = (cMapElement_TfieldMap *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_TfieldMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_TfieldMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_TfieldMap * p = (const cMapElement_TfieldMap *) attributes ;
  GALGAS_Ttype result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_TfieldMap) ;
    result = p->mAttribute_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Tvalue GALGAS_TfieldMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_TfieldMap * p = (const cMapElement_TfieldMap *) attributes ;
  GALGAS_Tvalue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_TfieldMap) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMap::setter_setMTypeForKey (GALGAS_Ttype inAttributeValue,
                                              GALGAS_string inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_TfieldMap * p = (cMapElement_TfieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_TfieldMap) ;
    p->mAttribute_mType = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMap::setter_setMValueForKey (GALGAS_Tvalue inAttributeValue,
                                               GALGAS_string inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_TfieldMap * p = (cMapElement_TfieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_TfieldMap) ;
    p->mAttribute_mValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_TfieldMap * GALGAS_TfieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_TfieldMap * result = (cMapElement_TfieldMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_TfieldMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_TfieldMap::cEnumerator_TfieldMap (const GALGAS_TfieldMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap_2D_element cEnumerator_TfieldMap::current (LOCATION_ARGS) const {
  const cMapElement_TfieldMap * p = (const cMapElement_TfieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_TfieldMap) ;
  return GALGAS_TfieldMap_2D_element (p->mAttribute_lkey, p->mAttribute_mType, p->mAttribute_mValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_TfieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype cEnumerator_TfieldMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_TfieldMap * p = (const cMapElement_TfieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_TfieldMap) ;
  return p->mAttribute_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Tvalue cEnumerator_TfieldMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_TfieldMap * p = (const cMapElement_TfieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_TfieldMap) ;
  return p->mAttribute_mValue ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                   @TfieldMap type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TfieldMap ("TfieldMap",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_TfieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TfieldMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_TfieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TfieldMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap GALGAS_TfieldMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMap result ;
  const GALGAS_TfieldMap * p = (const GALGAS_TfieldMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TfieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TfieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@TfieldMapList' list                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_TfieldMapList : public cCollectionElement {
  public : GALGAS_TfieldMapList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_TfieldMapList (const GALGAS_TfieldMap & in_mMap
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_TfieldMapList::cCollectionElement_TfieldMapList (const GALGAS_TfieldMap & in_mMap
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_TfieldMapList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_TfieldMapList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_TfieldMapList (mObject.mAttribute_mMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_TfieldMapList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMap" ":" ;
  mObject.mAttribute_mMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_TfieldMapList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_TfieldMapList * operand = (cCollectionElement_TfieldMapList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_TfieldMapList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList::GALGAS_TfieldMapList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList::GALGAS_TfieldMapList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList GALGAS_TfieldMapList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_TfieldMapList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList GALGAS_TfieldMapList::constructor_listWithValue (const GALGAS_TfieldMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMapList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_TfieldMapList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_TfieldMap & in_mMap
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_TfieldMapList * p = NULL ;
  macroMyNew (p, cCollectionElement_TfieldMapList (in_mMap COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::addAssign_operation (const GALGAS_TfieldMap & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TfieldMapList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::setter_insertAtIndex (const GALGAS_TfieldMap inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TfieldMapList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::setter_removeAtIndex (GALGAS_TfieldMap & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_TfieldMapList * p = (cCollectionElement_TfieldMapList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
      outOperand0 = p->mObject.mAttribute_mMap ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::setter_popFirst (GALGAS_TfieldMap & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TfieldMapList * p = (cCollectionElement_TfieldMapList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
    outOperand0 = p->mObject.mAttribute_mMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::setter_popLast (GALGAS_TfieldMap & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TfieldMapList * p = (cCollectionElement_TfieldMapList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
    outOperand0 = p->mObject.mAttribute_mMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::method_first (GALGAS_TfieldMap & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TfieldMapList * p = (cCollectionElement_TfieldMapList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
    outOperand0 = p->mObject.mAttribute_mMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::method_last (GALGAS_TfieldMap & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TfieldMapList * p = (cCollectionElement_TfieldMapList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
    outOperand0 = p->mObject.mAttribute_mMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList GALGAS_TfieldMapList::add_operation (const GALGAS_TfieldMapList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_TfieldMapList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList GALGAS_TfieldMapList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_TfieldMapList result = GALGAS_TfieldMapList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList GALGAS_TfieldMapList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_TfieldMapList result = GALGAS_TfieldMapList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList GALGAS_TfieldMapList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_TfieldMapList result = GALGAS_TfieldMapList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::plusAssign_operation (const GALGAS_TfieldMapList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TfieldMapList::setter_setMMapAtIndex (GALGAS_TfieldMap inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_TfieldMapList * p = (cCollectionElement_TfieldMapList *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mMap = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap GALGAS_TfieldMapList::getter_mMapAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TfieldMapList * p = (cCollectionElement_TfieldMapList *) attributes.ptr () ;
  GALGAS_TfieldMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
    result = p->mObject.mAttribute_mMap ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_TfieldMapList::cEnumerator_TfieldMapList (const GALGAS_TfieldMapList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList_2D_element cEnumerator_TfieldMapList::current (LOCATION_ARGS) const {
  const cCollectionElement_TfieldMapList * p = (const cCollectionElement_TfieldMapList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMap cEnumerator_TfieldMapList::current_mMap (LOCATION_ARGS) const {
  const cCollectionElement_TfieldMapList * p = (const cCollectionElement_TfieldMapList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TfieldMapList) ;
  return p->mObject.mAttribute_mMap ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @TfieldMapList type                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TfieldMapList ("TfieldMapList",
                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_TfieldMapList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TfieldMapList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_TfieldMapList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TfieldMapList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TfieldMapList GALGAS_TfieldMapList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_TfieldMapList result ;
  const GALGAS_TfieldMapList * p = (const GALGAS_TfieldMapList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TfieldMapList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TfieldMapList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@TexpressionList' list                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_TexpressionList : public cCollectionElement {
  public : GALGAS_TexpressionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_TexpressionList (const GALGAS_Tvalue & in_mValue,
                                               const GALGAS_Ttype & in_mType
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_TexpressionList::cCollectionElement_TexpressionList (const GALGAS_Tvalue & in_mValue,
                                                                        const GALGAS_Ttype & in_mType
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue, in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_TexpressionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_TexpressionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_TexpressionList (mObject.mAttribute_mValue, mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_TexpressionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_TexpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_TexpressionList * operand = (cCollectionElement_TexpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_TexpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList::GALGAS_TexpressionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList::GALGAS_TexpressionList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList GALGAS_TexpressionList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_TexpressionList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList GALGAS_TexpressionList::constructor_listWithValue (const GALGAS_Tvalue & inOperand0,
                                                                          const GALGAS_Ttype & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_TexpressionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_TexpressionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_Tvalue & in_mValue,
                                                        const GALGAS_Ttype & in_mType
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_TexpressionList * p = NULL ;
  macroMyNew (p, cCollectionElement_TexpressionList (in_mValue,
                                                     in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::addAssign_operation (const GALGAS_Tvalue & inOperand0,
                                                  const GALGAS_Ttype & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TexpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::setter_insertAtIndex (const GALGAS_Tvalue inOperand0,
                                                   const GALGAS_Ttype inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TexpressionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::setter_removeAtIndex (GALGAS_Tvalue & outOperand0,
                                                   GALGAS_Ttype & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_TexpressionList * p = (cCollectionElement_TexpressionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
      outOperand1 = p->mObject.mAttribute_mType ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::setter_popFirst (GALGAS_Tvalue & outOperand0,
                                              GALGAS_Ttype & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TexpressionList * p = (cCollectionElement_TexpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::setter_popLast (GALGAS_Tvalue & outOperand0,
                                             GALGAS_Ttype & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TexpressionList * p = (cCollectionElement_TexpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::method_first (GALGAS_Tvalue & outOperand0,
                                           GALGAS_Ttype & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TexpressionList * p = (cCollectionElement_TexpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::method_last (GALGAS_Tvalue & outOperand0,
                                          GALGAS_Ttype & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TexpressionList * p = (cCollectionElement_TexpressionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList GALGAS_TexpressionList::add_operation (const GALGAS_TexpressionList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_TexpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList GALGAS_TexpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_TexpressionList result = GALGAS_TexpressionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList GALGAS_TexpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_TexpressionList result = GALGAS_TexpressionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList GALGAS_TexpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_TexpressionList result = GALGAS_TexpressionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TexpressionList::plusAssign_operation (const GALGAS_TexpressionList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Tvalue GALGAS_TexpressionList::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TexpressionList * p = (cCollectionElement_TexpressionList *) attributes.ptr () ;
  GALGAS_Tvalue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype GALGAS_TexpressionList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TexpressionList * p = (cCollectionElement_TexpressionList *) attributes.ptr () ;
  GALGAS_Ttype result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_TexpressionList::cEnumerator_TexpressionList (const GALGAS_TexpressionList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList_2D_element cEnumerator_TexpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_TexpressionList * p = (const cCollectionElement_TexpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_Tvalue cEnumerator_TexpressionList::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_TexpressionList * p = (const cCollectionElement_TexpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
  return p->mObject.mAttribute_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Ttype cEnumerator_TexpressionList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_TexpressionList * p = (const cCollectionElement_TexpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TexpressionList) ;
  return p->mObject.mAttribute_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @TexpressionList type                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TexpressionList ("TexpressionList",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_TexpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TexpressionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_TexpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TexpressionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TexpressionList GALGAS_TexpressionList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_TexpressionList result ;
  const GALGAS_TexpressionList * p = (const GALGAS_TexpressionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TexpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TexpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@TenumationList' list                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_TenumationList : public cCollectionElement {
  public : GALGAS_TenumationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_TenumationList (const GALGAS_Tvalue & in_mEnumeratedValue,
                                              const GALGAS_string & in_mPrefix
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_TenumationList::cCollectionElement_TenumationList (const GALGAS_Tvalue & in_mEnumeratedValue,
                                                                      const GALGAS_string & in_mPrefix
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumeratedValue, in_mPrefix) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_TenumationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_TenumationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_TenumationList (mObject.mAttribute_mEnumeratedValue, mObject.mAttribute_mPrefix COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_TenumationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumeratedValue" ":" ;
  mObject.mAttribute_mEnumeratedValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPrefix" ":" ;
  mObject.mAttribute_mPrefix.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_TenumationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_TenumationList * operand = (cCollectionElement_TenumationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_TenumationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList::GALGAS_TenumationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList::GALGAS_TenumationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList GALGAS_TenumationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_TenumationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList GALGAS_TenumationList::constructor_listWithValue (const GALGAS_Tvalue & inOperand0,
                                                                        const GALGAS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_TenumationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_TenumationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_Tvalue & in_mEnumeratedValue,
                                                       const GALGAS_string & in_mPrefix
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_TenumationList * p = NULL ;
  macroMyNew (p, cCollectionElement_TenumationList (in_mEnumeratedValue,
                                                    in_mPrefix COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::addAssign_operation (const GALGAS_Tvalue & inOperand0,
                                                 const GALGAS_string & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TenumationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::setter_insertAtIndex (const GALGAS_Tvalue inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TenumationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::setter_removeAtIndex (GALGAS_Tvalue & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_TenumationList * p = (cCollectionElement_TenumationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_TenumationList) ;
      outOperand0 = p->mObject.mAttribute_mEnumeratedValue ;
      outOperand1 = p->mObject.mAttribute_mPrefix ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::setter_popFirst (GALGAS_Tvalue & outOperand0,
                                             GALGAS_string & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TenumationList * p = (cCollectionElement_TenumationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TenumationList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedValue ;
    outOperand1 = p->mObject.mAttribute_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::setter_popLast (GALGAS_Tvalue & outOperand0,
                                            GALGAS_string & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TenumationList * p = (cCollectionElement_TenumationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TenumationList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedValue ;
    outOperand1 = p->mObject.mAttribute_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::method_first (GALGAS_Tvalue & outOperand0,
                                          GALGAS_string & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TenumationList * p = (cCollectionElement_TenumationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TenumationList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedValue ;
    outOperand1 = p->mObject.mAttribute_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::method_last (GALGAS_Tvalue & outOperand0,
                                         GALGAS_string & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TenumationList * p = (cCollectionElement_TenumationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TenumationList) ;
    outOperand0 = p->mObject.mAttribute_mEnumeratedValue ;
    outOperand1 = p->mObject.mAttribute_mPrefix ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList GALGAS_TenumationList::add_operation (const GALGAS_TenumationList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_TenumationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList GALGAS_TenumationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_TenumationList result = GALGAS_TenumationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList GALGAS_TenumationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_TenumationList result = GALGAS_TenumationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList GALGAS_TenumationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_TenumationList result = GALGAS_TenumationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TenumationList::plusAssign_operation (const GALGAS_TenumationList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_Tvalue GALGAS_TenumationList::getter_mEnumeratedValueAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TenumationList * p = (cCollectionElement_TenumationList *) attributes.ptr () ;
  GALGAS_Tvalue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TenumationList) ;
    result = p->mObject.mAttribute_mEnumeratedValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_TenumationList::getter_mPrefixAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TenumationList * p = (cCollectionElement_TenumationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TenumationList) ;
    result = p->mObject.mAttribute_mPrefix ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_TenumationList::cEnumerator_TenumationList (const GALGAS_TenumationList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList_2D_element cEnumerator_TenumationList::current (LOCATION_ARGS) const {
  const cCollectionElement_TenumationList * p = (const cCollectionElement_TenumationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TenumationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_Tvalue cEnumerator_TenumationList::current_mEnumeratedValue (LOCATION_ARGS) const {
  const cCollectionElement_TenumationList * p = (const cCollectionElement_TenumationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TenumationList) ;
  return p->mObject.mAttribute_mEnumeratedValue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_TenumationList::current_mPrefix (LOCATION_ARGS) const {
  const cCollectionElement_TenumationList * p = (const cCollectionElement_TenumationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TenumationList) ;
  return p->mObject.mAttribute_mPrefix ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @TenumationList type                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TenumationList ("TenumationList",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_TenumationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TenumationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_TenumationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TenumationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TenumationList GALGAS_TenumationList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_TenumationList result ;
  const GALGAS_TenumationList * p = (const GALGAS_TenumationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TenumationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TenumationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        Class for element of '@TvarPath' list                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_TvarPath : public cCollectionElement {
  public : GALGAS_TvarPath_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_TvarPath (const GALGAS_lstring & in_item,
                                        const GALGAS_lstring & in_key,
                                        const GALGAS_lsint & in_idx
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_TvarPath::cCollectionElement_TvarPath (const GALGAS_lstring & in_item,
                                                          const GALGAS_lstring & in_key,
                                                          const GALGAS_lsint & in_idx
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_item, in_key, in_idx) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_TvarPath::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_TvarPath::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_TvarPath (mObject.mAttribute_item, mObject.mAttribute_key, mObject.mAttribute_idx COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_TvarPath::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "item" ":" ;
  mObject.mAttribute_item.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "key" ":" ;
  mObject.mAttribute_key.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "idx" ":" ;
  mObject.mAttribute_idx.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_TvarPath::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_TvarPath * operand = (cCollectionElement_TvarPath *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_TvarPath) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath::GALGAS_TvarPath (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath::GALGAS_TvarPath (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath GALGAS_TvarPath::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_TvarPath result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath GALGAS_TvarPath::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_lstring & inOperand1,
                                                            const GALGAS_lsint & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_TvarPath result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_TvarPath::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_lstring & in_item,
                                                 const GALGAS_lstring & in_key,
                                                 const GALGAS_lsint & in_idx
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_TvarPath * p = NULL ;
  macroMyNew (p, cCollectionElement_TvarPath (in_item,
                                              in_key,
                                              in_idx COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::addAssign_operation (const GALGAS_lstring & inOperand0,
                                           const GALGAS_lstring & inOperand1,
                                           const GALGAS_lsint & inOperand2
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TvarPath (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                            const GALGAS_lstring inOperand1,
                                            const GALGAS_lsint inOperand2,
                                            const GALGAS_uint inInsertionIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_TvarPath (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_lsint & outOperand2,
                                            const GALGAS_uint inRemoveIndex,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_TvarPath) ;
      outOperand0 = p->mObject.mAttribute_item ;
      outOperand1 = p->mObject.mAttribute_key ;
      outOperand2 = p->mObject.mAttribute_idx ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::setter_popFirst (GALGAS_lstring & outOperand0,
                                       GALGAS_lstring & outOperand1,
                                       GALGAS_lsint & outOperand2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TvarPath) ;
    outOperand0 = p->mObject.mAttribute_item ;
    outOperand1 = p->mObject.mAttribute_key ;
    outOperand2 = p->mObject.mAttribute_idx ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::setter_popLast (GALGAS_lstring & outOperand0,
                                      GALGAS_lstring & outOperand1,
                                      GALGAS_lsint & outOperand2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TvarPath) ;
    outOperand0 = p->mObject.mAttribute_item ;
    outOperand1 = p->mObject.mAttribute_key ;
    outOperand2 = p->mObject.mAttribute_idx ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::method_first (GALGAS_lstring & outOperand0,
                                    GALGAS_lstring & outOperand1,
                                    GALGAS_lsint & outOperand2,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TvarPath) ;
    outOperand0 = p->mObject.mAttribute_item ;
    outOperand1 = p->mObject.mAttribute_key ;
    outOperand2 = p->mObject.mAttribute_idx ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::method_last (GALGAS_lstring & outOperand0,
                                   GALGAS_lstring & outOperand1,
                                   GALGAS_lsint & outOperand2,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_TvarPath) ;
    outOperand0 = p->mObject.mAttribute_item ;
    outOperand1 = p->mObject.mAttribute_key ;
    outOperand2 = p->mObject.mAttribute_idx ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath GALGAS_TvarPath::add_operation (const GALGAS_TvarPath & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_TvarPath result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath GALGAS_TvarPath::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_TvarPath result = GALGAS_TvarPath::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath GALGAS_TvarPath::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_TvarPath result = GALGAS_TvarPath::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath GALGAS_TvarPath::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_TvarPath result = GALGAS_TvarPath::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_TvarPath::plusAssign_operation (const GALGAS_TvarPath inOperand,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_TvarPath::getter_itemAtIndex (const GALGAS_uint & inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TvarPath) ;
    result = p->mObject.mAttribute_item ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_TvarPath::getter_keyAtIndex (const GALGAS_uint & inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TvarPath) ;
    result = p->mObject.mAttribute_key ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint GALGAS_TvarPath::getter_idxAtIndex (const GALGAS_uint & inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_TvarPath * p = (cCollectionElement_TvarPath *) attributes.ptr () ;
  GALGAS_lsint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_TvarPath) ;
    result = p->mObject.mAttribute_idx ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_TvarPath::cEnumerator_TvarPath (const GALGAS_TvarPath & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath_2D_element cEnumerator_TvarPath::current (LOCATION_ARGS) const {
  const cCollectionElement_TvarPath * p = (const cCollectionElement_TvarPath *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TvarPath) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_TvarPath::current_item (LOCATION_ARGS) const {
  const cCollectionElement_TvarPath * p = (const cCollectionElement_TvarPath *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TvarPath) ;
  return p->mObject.mAttribute_item ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_TvarPath::current_key (LOCATION_ARGS) const {
  const cCollectionElement_TvarPath * p = (const cCollectionElement_TvarPath *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TvarPath) ;
  return p->mObject.mAttribute_key ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint cEnumerator_TvarPath::current_idx (LOCATION_ARGS) const {
  const cCollectionElement_TvarPath * p = (const cCollectionElement_TvarPath *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_TvarPath) ;
  return p->mObject.mAttribute_idx ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                   @TvarPath type                                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_TvarPath ("TvarPath",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_TvarPath::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TvarPath ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_TvarPath::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_TvarPath (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_TvarPath GALGAS_TvarPath::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_TvarPath result ;
  const GALGAS_TvarPath * p = (const GALGAS_TvarPath *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_TvarPath *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TvarPath", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_template_5F_scanner::cTokenFor_template_5F_scanner (void) :
mLexicalAttribute_a_5F_string (),
mLexicalAttribute_floatValue (),
mLexicalAttribute_functionContent (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_intValue (),
mLexicalAttribute_tokenString () {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_template_5F_scanner::C_Lexique_template_5F_scanner (C_Compiler * inCallerCompiler,
                                                              const C_String & inDependencyFileExtension,
                                                              const C_String & inDependencyFilePath,
                                                              const C_String & inSourceFileName
                                                              COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_template_5F_scanner::C_Lexique_template_5F_scanner (C_Compiler * inCallerCompiler,
                                                              const C_String & inSourceString,
                                                              const C_String & inStringForError
                                                              COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::indexingDirectory (void) const {
  return "" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                                                   *
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_template_5F_scanner_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_template_5F_scanner_internalError = "internal error" ;

static const char * gLexicalMessage_template_5F_scanner_unterminatedFunction = "unterminated function definition" ;

static const char * gLexicalMessage_template_5F_scanner_unterminatedLitteralString = "Unterminated literal string" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                                           *
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$functionContent$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_functionContent = "a function definition" ;

//--- Syntax error message for terminal '$literal_double$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_literal_5F_double = "a float number" ;

//--- Syntax error message for terminal '$signed_literal_integer_bigint$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_signed_5F_literal_5F_integer_5F_bigint = "a bigint decimal number" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$.=$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2E__3D_ = "the '.=' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$string$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_string = "literal string" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_comment = "a comment" ;

//--- Syntax error message for terminal '$after$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_after = "the 'after' keyword" ;

//--- Syntax error message for terminal '$before$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_before = "the 'before' keyword" ;

//--- Syntax error message for terminal '$between$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_between = "the 'between' keyword" ;

//--- Syntax error message for terminal '$block$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_block = "the 'block' keyword" ;

//--- Syntax error message for terminal '$by$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_by = "the 'by' keyword" ;

//--- Syntax error message for terminal '$call$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_call = "the 'call' keyword" ;

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$display$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_display = "the 'display' keyword" ;

//--- Syntax error message for terminal '$do$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_do = "the 'do' keyword" ;

//--- Syntax error message for terminal '$else$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_else = "the 'else' keyword" ;

//--- Syntax error message for terminal '$elsif$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_elsif = "the 'elsif' keyword" ;

//--- Syntax error message for terminal '$emptylist$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_emptylist = "the 'emptylist' keyword" ;

//--- Syntax error message for terminal '$emptymap$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_emptymap = "the 'emptymap' keyword" ;

//--- Syntax error message for terminal '$end$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_end = "the 'end' keyword" ;

//--- Syntax error message for terminal '$error$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_error = "the 'error' keyword" ;

//--- Syntax error message for terminal '$exists$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_exists = "the 'exists' keyword" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_false = "the 'false' keyword" ;

//--- Syntax error message for terminal '$for$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_for = "the 'for' keyword" ;

//--- Syntax error message for terminal '$foreach$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_foreach = "the 'foreach' keyword" ;

//--- Syntax error message for terminal '$from$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_from = "the 'from' keyword" ;

//--- Syntax error message for terminal '$function$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_function = "the 'function' keyword" ;

//--- Syntax error message for terminal '$here$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_here = "the 'here' keyword" ;

//--- Syntax error message for terminal '$if$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_if = "the 'if' keyword" ;

//--- Syntax error message for terminal '$in$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_in = "the 'in' keyword" ;

//--- Syntax error message for terminal '$list$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_list = "the 'list' keyword" ;

//--- Syntax error message for terminal '$listof$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_listof = "the 'listof' keyword" ;

//--- Syntax error message for terminal '$let$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_let = "the 'let' keyword" ;

//--- Syntax error message for terminal '$loop$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_loop = "the 'loop' keyword" ;

//--- Syntax error message for terminal '$mapof$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_mapof = "the 'mapof' keyword" ;

//--- Syntax error message for terminal '$mod$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_mod = "the 'mod' keyword" ;

//--- Syntax error message for terminal '$no$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_no = "the 'no' keyword" ;

//--- Syntax error message for terminal '$not$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_not = "the 'not' keyword" ;

//--- Syntax error message for terminal '$or$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_or = "the 'or' keyword" ;

//--- Syntax error message for terminal '$prefixedby$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_prefixedby = "the 'prefixedby' keyword" ;

//--- Syntax error message for terminal '$print$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_print = "the 'print' keyword" ;

//--- Syntax error message for terminal '$println$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_println = "the 'println' keyword" ;

//--- Syntax error message for terminal '$repeat$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_repeat = "the 'repeat' keyword" ;

//--- Syntax error message for terminal '$return$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_return = "the 'return' keyword" ;

//--- Syntax error message for terminal '$sort$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_sort = "the 'sort' keyword" ;

//--- Syntax error message for terminal '$tab$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_tab = "the 'tab' keyword" ;

//--- Syntax error message for terminal '$template$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_template = "the 'template' keyword" ;

//--- Syntax error message for terminal '$then$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_then = "the 'then' keyword" ;

//--- Syntax error message for terminal '$to$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_to = "the 'to' keyword" ;

//--- Syntax error message for terminal '$true$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_true = "the 'true' keyword" ;

//--- Syntax error message for terminal '$typeof$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_typeof = "the 'typeof' keyword" ;

//--- Syntax error message for terminal '$yes$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_yes = "the 'yes' keyword" ;

//--- Syntax error message for terminal '$warning$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_warning = "the 'warning' keyword" ;

//--- Syntax error message for terminal '$while$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_while = "the 'while' keyword" ;

//--- Syntax error message for terminal '$write$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_write = "the 'write' keyword" ;

//--- Syntax error message for terminal '$executable$' :
static const char * gSyntaxErrorMessage_template_5F_scanner_executable = "the 'executable' keyword" ;

//--- Syntax error message for terminal '$*$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2A_ = "the '*' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2B_ = "the '+' delimitor" ;

//--- Syntax error message for terminal '$--$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2D__2D_ = "the '--' delimitor" ;

//--- Syntax error message for terminal '$::$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3A__3A_ = "the '::' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2D_ = "the '-' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_template_5F_scanner__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3F_ = "the '\?' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$??$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3F__3F_ = "the '\?\?' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__21_ = "the '!' delimitor" ;

//--- Syntax error message for terminal '$:=$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3A__3D_ = "the ':=' delimitor" ;

//--- Syntax error message for terminal '$++$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2B__2B_ = "the '++' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$?!$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3F__21_ = "the '\?!' delimitor" ;

//--- Syntax error message for terminal '$!?$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__21__3F_ = "the '!\?' delimitor" ;

//--- Syntax error message for terminal '$/$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2F_ = "the '/' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$+>$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2B__3E_ = "the '+>' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$>>$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3E__3E_ = "the '>>' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$<-$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3C__2D_ = "the '<-' delimitor" ;

//--- Syntax error message for terminal '$<<$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__3C__3C_ = "the '<<' delimitor" ;

//--- Syntax error message for terminal '$@$' :
static const char * gSyntaxErrorMessage_template_5F_scanner__40_ = "the '@' delimitor" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                                                *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [100] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_template_5F_scanner_identifier,
    gSyntaxErrorMessage_template_5F_scanner_functionContent,
    gSyntaxErrorMessage_template_5F_scanner_literal_5F_double,
    gSyntaxErrorMessage_template_5F_scanner_signed_5F_literal_5F_integer_5F_bigint,
    gSyntaxErrorMessage_template_5F_scanner__2E_,
    gSyntaxErrorMessage_template_5F_scanner__2E__3D_,
    gSyntaxErrorMessage_template_5F_scanner__2E__2E__2E_,
    gSyntaxErrorMessage_template_5F_scanner_string,
    gSyntaxErrorMessage_template_5F_scanner_comment,
    gSyntaxErrorMessage_template_5F_scanner_after,
    gSyntaxErrorMessage_template_5F_scanner_before,
    gSyntaxErrorMessage_template_5F_scanner_between,
    gSyntaxErrorMessage_template_5F_scanner_block,
    gSyntaxErrorMessage_template_5F_scanner_by,
    gSyntaxErrorMessage_template_5F_scanner_call,
    gSyntaxErrorMessage_template_5F_scanner_default,
    gSyntaxErrorMessage_template_5F_scanner_display,
    gSyntaxErrorMessage_template_5F_scanner_do,
    gSyntaxErrorMessage_template_5F_scanner_else,
    gSyntaxErrorMessage_template_5F_scanner_elsif,
    gSyntaxErrorMessage_template_5F_scanner_emptylist,
    gSyntaxErrorMessage_template_5F_scanner_emptymap,
    gSyntaxErrorMessage_template_5F_scanner_end,
    gSyntaxErrorMessage_template_5F_scanner_error,
    gSyntaxErrorMessage_template_5F_scanner_exists,
    gSyntaxErrorMessage_template_5F_scanner_false,
    gSyntaxErrorMessage_template_5F_scanner_for,
    gSyntaxErrorMessage_template_5F_scanner_foreach,
    gSyntaxErrorMessage_template_5F_scanner_from,
    gSyntaxErrorMessage_template_5F_scanner_function,
    gSyntaxErrorMessage_template_5F_scanner_here,
    gSyntaxErrorMessage_template_5F_scanner_if,
    gSyntaxErrorMessage_template_5F_scanner_in,
    gSyntaxErrorMessage_template_5F_scanner_list,
    gSyntaxErrorMessage_template_5F_scanner_listof,
    gSyntaxErrorMessage_template_5F_scanner_let,
    gSyntaxErrorMessage_template_5F_scanner_loop,
    gSyntaxErrorMessage_template_5F_scanner_mapof,
    gSyntaxErrorMessage_template_5F_scanner_mod,
    gSyntaxErrorMessage_template_5F_scanner_no,
    gSyntaxErrorMessage_template_5F_scanner_not,
    gSyntaxErrorMessage_template_5F_scanner_or,
    gSyntaxErrorMessage_template_5F_scanner_prefixedby,
    gSyntaxErrorMessage_template_5F_scanner_print,
    gSyntaxErrorMessage_template_5F_scanner_println,
    gSyntaxErrorMessage_template_5F_scanner_repeat,
    gSyntaxErrorMessage_template_5F_scanner_return,
    gSyntaxErrorMessage_template_5F_scanner_sort,
    gSyntaxErrorMessage_template_5F_scanner_tab,
    gSyntaxErrorMessage_template_5F_scanner_template,
    gSyntaxErrorMessage_template_5F_scanner_then,
    gSyntaxErrorMessage_template_5F_scanner_to,
    gSyntaxErrorMessage_template_5F_scanner_true,
    gSyntaxErrorMessage_template_5F_scanner_typeof,
    gSyntaxErrorMessage_template_5F_scanner_yes,
    gSyntaxErrorMessage_template_5F_scanner_warning,
    gSyntaxErrorMessage_template_5F_scanner_while,
    gSyntaxErrorMessage_template_5F_scanner_write,
    gSyntaxErrorMessage_template_5F_scanner_executable,
    gSyntaxErrorMessage_template_5F_scanner__2A_,
    gSyntaxErrorMessage_template_5F_scanner__7C_,
    gSyntaxErrorMessage_template_5F_scanner__2C_,
    gSyntaxErrorMessage_template_5F_scanner__2B_,
    gSyntaxErrorMessage_template_5F_scanner__2D__2D_,
    gSyntaxErrorMessage_template_5F_scanner__3A__3A_,
    gSyntaxErrorMessage_template_5F_scanner__3E_,
    gSyntaxErrorMessage_template_5F_scanner__3B_,
    gSyntaxErrorMessage_template_5F_scanner__3A_,
    gSyntaxErrorMessage_template_5F_scanner__2D_,
    gSyntaxErrorMessage_template_5F_scanner__28_,
    gSyntaxErrorMessage_template_5F_scanner__29_,
    gSyntaxErrorMessage_template_5F_scanner__2D__3E_,
    gSyntaxErrorMessage_template_5F_scanner__3F_,
    gSyntaxErrorMessage_template_5F_scanner__3D__3D_,
    gSyntaxErrorMessage_template_5F_scanner__3F__3F_,
    gSyntaxErrorMessage_template_5F_scanner__21_,
    gSyntaxErrorMessage_template_5F_scanner__3A__3D_,
    gSyntaxErrorMessage_template_5F_scanner__2B__2B_,
    gSyntaxErrorMessage_template_5F_scanner__5B_,
    gSyntaxErrorMessage_template_5F_scanner__5D_,
    gSyntaxErrorMessage_template_5F_scanner__2B__3D_,
    gSyntaxErrorMessage_template_5F_scanner__3F__21_,
    gSyntaxErrorMessage_template_5F_scanner__21__3F_,
    gSyntaxErrorMessage_template_5F_scanner__2F_,
    gSyntaxErrorMessage_template_5F_scanner__21__3D_,
    gSyntaxErrorMessage_template_5F_scanner__3E__3D_,
    gSyntaxErrorMessage_template_5F_scanner__26_,
    gSyntaxErrorMessage_template_5F_scanner__3C__3D_,
    gSyntaxErrorMessage_template_5F_scanner__7B_,
    gSyntaxErrorMessage_template_5F_scanner__7D_,
    gSyntaxErrorMessage_template_5F_scanner__2B__3E_,
    gSyntaxErrorMessage_template_5F_scanner__2D__3D_,
    gSyntaxErrorMessage_template_5F_scanner__3C_,
    gSyntaxErrorMessage_template_5F_scanner__5E_,
    gSyntaxErrorMessage_template_5F_scanner__3E__3E_,
    gSyntaxErrorMessage_template_5F_scanner__7E_,
    gSyntaxErrorMessage_template_5F_scanner__3C__2D_,
    gSyntaxErrorMessage_template_5F_scanner__3C__3C_,
    gSyntaxErrorMessage_template_5F_scanner__40_} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                                                 *
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_A_$'
static const utf32 kUnicodeString_template_5F_scanner__A_ [] = {
  TO_UNICODE (10),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_template_5F_scanner__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_template_5F_scanner__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3F_$'
static const utf32 kUnicodeString_template_5F_scanner__21__3F_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25_$'
static const utf32 kUnicodeString_template_5F_scanner__25_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_template_5F_scanner__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_template_5F_scanner__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_template_5F_scanner__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_template_5F_scanner__2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_template_5F_scanner__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__2B_$'
static const utf32 kUnicodeString_template_5F_scanner__2B__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_template_5F_scanner__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3E_$'
static const utf32 kUnicodeString_template_5F_scanner__2B__3E_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_template_5F_scanner__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_template_5F_scanner__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__2D_$'
static const utf32 kUnicodeString_template_5F_scanner__2D__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_template_5F_scanner__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_template_5F_scanner__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_template_5F_scanner__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_template_5F_scanner__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_template_5F_scanner__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3A_$'
static const utf32 kUnicodeString_template_5F_scanner__3A__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3D_$'
static const utf32 kUnicodeString_template_5F_scanner__3A__3D_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_template_5F_scanner__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_template_5F_scanner__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__2D_$'
static const utf32 kUnicodeString_template_5F_scanner__3C__2D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3C_$'
static const utf32 kUnicodeString_template_5F_scanner__3C__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3D_$'
static const utf32 kUnicodeString_template_5F_scanner__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_template_5F_scanner__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_template_5F_scanner__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_template_5F_scanner__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_template_5F_scanner__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_template_5F_scanner__3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F_$'
static const utf32 kUnicodeString_template_5F_scanner__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F__21_$'
static const utf32 kUnicodeString_template_5F_scanner__3F__21_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F__3F_$'
static const utf32 kUnicodeString_template_5F_scanner__3F__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_40_$'
static const utf32 kUnicodeString_template_5F_scanner__40_ [] = {
  TO_UNICODE ('@'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_template_5F_scanner__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_$'
static const utf32 kUnicodeString_template_5F_scanner__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__25_$'
static const utf32 kUnicodeString_template_5F_scanner__5C__25_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__5C_$'
static const utf32 kUnicodeString_template_5F_scanner__5C__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_n$'
static const utf32 kUnicodeString_template_5F_scanner__5C_n [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_template_5F_scanner__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_template_5F_scanner__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$after$'
static const utf32 kUnicodeString_template_5F_scanner_after [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$before$'
static const utf32 kUnicodeString_template_5F_scanner_before [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$between$'
static const utf32 kUnicodeString_template_5F_scanner_between [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('w'),
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$block$'
static const utf32 kUnicodeString_template_5F_scanner_block [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$by$'
static const utf32 kUnicodeString_template_5F_scanner_by [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$call$'
static const utf32 kUnicodeString_template_5F_scanner_call [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$default$'
static const utf32 kUnicodeString_template_5F_scanner_default [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$display$'
static const utf32 kUnicodeString_template_5F_scanner_display [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_template_5F_scanner_do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_template_5F_scanner_else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$elsif$'
static const utf32 kUnicodeString_template_5F_scanner_elsif [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$emptylist$'
static const utf32 kUnicodeString_template_5F_scanner_emptylist [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$emptymap$'
static const utf32 kUnicodeString_template_5F_scanner_emptymap [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$end$'
static const utf32 kUnicodeString_template_5F_scanner_end [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$error$'
static const utf32 kUnicodeString_template_5F_scanner_error [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$executable$'
static const utf32 kUnicodeString_template_5F_scanner_executable [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$exists$'
static const utf32 kUnicodeString_template_5F_scanner_exists [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_template_5F_scanner_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_template_5F_scanner_for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$foreach$'
static const utf32 kUnicodeString_template_5F_scanner_foreach [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$from$'
static const utf32 kUnicodeString_template_5F_scanner_from [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$function$'
static const utf32 kUnicodeString_template_5F_scanner_function [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$here$'
static const utf32 kUnicodeString_template_5F_scanner_here [] = {
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_template_5F_scanner_if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_template_5F_scanner_in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$let$'
static const utf32 kUnicodeString_template_5F_scanner_let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$list$'
static const utf32 kUnicodeString_template_5F_scanner_list [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$listof$'
static const utf32 kUnicodeString_template_5F_scanner_listof [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$loop$'
static const utf32 kUnicodeString_template_5F_scanner_loop [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mapof$'
static const utf32 kUnicodeString_template_5F_scanner_mapof [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mod$'
static const utf32 kUnicodeString_template_5F_scanner_mod [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$no$'
static const utf32 kUnicodeString_template_5F_scanner_no [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$not$'
static const utf32 kUnicodeString_template_5F_scanner_not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$or$'
static const utf32 kUnicodeString_template_5F_scanner_or [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$prefixedby$'
static const utf32 kUnicodeString_template_5F_scanner_prefixedby [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('b'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$print$'
static const utf32 kUnicodeString_template_5F_scanner_print [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$println$'
static const utf32 kUnicodeString_template_5F_scanner_println [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$repeat$'
static const utf32 kUnicodeString_template_5F_scanner_repeat [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$return$'
static const utf32 kUnicodeString_template_5F_scanner_return [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sort$'
static const utf32 kUnicodeString_template_5F_scanner_sort [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tab$'
static const utf32 kUnicodeString_template_5F_scanner_tab [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$template$'
static const utf32 kUnicodeString_template_5F_scanner_template [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$then$'
static const utf32 kUnicodeString_template_5F_scanner_then [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$to$'
static const utf32 kUnicodeString_template_5F_scanner_to [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_template_5F_scanner_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$typeof$'
static const utf32 kUnicodeString_template_5F_scanner_typeof [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('o'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$warning$'
static const utf32 kUnicodeString_template_5F_scanner_warning [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_template_5F_scanner_while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$write$'
static const utf32 kUnicodeString_template_5F_scanner_write [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$yes$'
static const utf32 kUnicodeString_template_5F_scanner_yes [] = {
  TO_UNICODE ('y'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_template_5F_scanner__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_template_5F_scanner__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_template_5F_scanner__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_template_5F_scanner__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_template_5F_scanner_galgasDelimitorsList = 40 ;

static const C_unicode_lexique_table_entry ktable_for_template_5F_scanner_galgasDelimitorsList [ktable_size_template_5F_scanner_galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__21_, 1, C_Lexique_template_5F_scanner::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__26_, 1, C_Lexique_template_5F_scanner::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__28_, 1, C_Lexique_template_5F_scanner::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__29_, 1, C_Lexique_template_5F_scanner::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2A_, 1, C_Lexique_template_5F_scanner::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2B_, 1, C_Lexique_template_5F_scanner::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2C_, 1, C_Lexique_template_5F_scanner::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2D_, 1, C_Lexique_template_5F_scanner::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2F_, 1, C_Lexique_template_5F_scanner::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3A_, 1, C_Lexique_template_5F_scanner::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3B_, 1, C_Lexique_template_5F_scanner::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3C_, 1, C_Lexique_template_5F_scanner::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3E_, 1, C_Lexique_template_5F_scanner::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3F_, 1, C_Lexique_template_5F_scanner::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__40_, 1, C_Lexique_template_5F_scanner::kToken__40_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__5B_, 1, C_Lexique_template_5F_scanner::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__5D_, 1, C_Lexique_template_5F_scanner::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__5E_, 1, C_Lexique_template_5F_scanner::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__7B_, 1, C_Lexique_template_5F_scanner::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__7C_, 1, C_Lexique_template_5F_scanner::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__7D_, 1, C_Lexique_template_5F_scanner::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__7E_, 1, C_Lexique_template_5F_scanner::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__21__3D_, 2, C_Lexique_template_5F_scanner::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__21__3F_, 2, C_Lexique_template_5F_scanner::kToken__21__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2B__2B_, 2, C_Lexique_template_5F_scanner::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2B__3D_, 2, C_Lexique_template_5F_scanner::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2B__3E_, 2, C_Lexique_template_5F_scanner::kToken__2B__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2D__2D_, 2, C_Lexique_template_5F_scanner::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2D__3D_, 2, C_Lexique_template_5F_scanner::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__2D__3E_, 2, C_Lexique_template_5F_scanner::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3A__3A_, 2, C_Lexique_template_5F_scanner::kToken__3A__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3A__3D_, 2, C_Lexique_template_5F_scanner::kToken__3A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3C__2D_, 2, C_Lexique_template_5F_scanner::kToken__3C__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3C__3C_, 2, C_Lexique_template_5F_scanner::kToken__3C__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3C__3D_, 2, C_Lexique_template_5F_scanner::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3D__3D_, 2, C_Lexique_template_5F_scanner::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3E__3D_, 2, C_Lexique_template_5F_scanner::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3E__3E_, 2, C_Lexique_template_5F_scanner::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3F__21_, 2, C_Lexique_template_5F_scanner::kToken__3F__21_),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner__3F__3F_, 2, C_Lexique_template_5F_scanner::kToken__3F__3F_)
} ;

int16_t C_Lexique_template_5F_scanner::search_into_galgasDelimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_template_5F_scanner_galgasDelimitorsList, ktable_size_template_5F_scanner_galgasDelimitorsList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'goilTemplateKeyWordList'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_template_5F_scanner_goilTemplateKeyWordList = 50 ;

static const C_unicode_lexique_table_entry ktable_for_template_5F_scanner_goilTemplateKeyWordList [ktable_size_template_5F_scanner_goilTemplateKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_by, 2, C_Lexique_template_5F_scanner::kToken_by),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_do, 2, C_Lexique_template_5F_scanner::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_if, 2, C_Lexique_template_5F_scanner::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_in, 2, C_Lexique_template_5F_scanner::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_no, 2, C_Lexique_template_5F_scanner::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_or, 2, C_Lexique_template_5F_scanner::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_to, 2, C_Lexique_template_5F_scanner::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_end, 3, C_Lexique_template_5F_scanner::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_for, 3, C_Lexique_template_5F_scanner::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_let, 3, C_Lexique_template_5F_scanner::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_mod, 3, C_Lexique_template_5F_scanner::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_not, 3, C_Lexique_template_5F_scanner::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_tab, 3, C_Lexique_template_5F_scanner::kToken_tab),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_yes, 3, C_Lexique_template_5F_scanner::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_call, 4, C_Lexique_template_5F_scanner::kToken_call),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_else, 4, C_Lexique_template_5F_scanner::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_from, 4, C_Lexique_template_5F_scanner::kToken_from),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_here, 4, C_Lexique_template_5F_scanner::kToken_here),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_list, 4, C_Lexique_template_5F_scanner::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_loop, 4, C_Lexique_template_5F_scanner::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_sort, 4, C_Lexique_template_5F_scanner::kToken_sort),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_then, 4, C_Lexique_template_5F_scanner::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_true, 4, C_Lexique_template_5F_scanner::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_after, 5, C_Lexique_template_5F_scanner::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_block, 5, C_Lexique_template_5F_scanner::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_elsif, 5, C_Lexique_template_5F_scanner::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_error, 5, C_Lexique_template_5F_scanner::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_false, 5, C_Lexique_template_5F_scanner::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_mapof, 5, C_Lexique_template_5F_scanner::kToken_mapof),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_print, 5, C_Lexique_template_5F_scanner::kToken_print),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_while, 5, C_Lexique_template_5F_scanner::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_write, 5, C_Lexique_template_5F_scanner::kToken_write),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_before, 6, C_Lexique_template_5F_scanner::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_exists, 6, C_Lexique_template_5F_scanner::kToken_exists),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_listof, 6, C_Lexique_template_5F_scanner::kToken_listof),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_repeat, 6, C_Lexique_template_5F_scanner::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_return, 6, C_Lexique_template_5F_scanner::kToken_return),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_typeof, 6, C_Lexique_template_5F_scanner::kToken_typeof),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_between, 7, C_Lexique_template_5F_scanner::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_default, 7, C_Lexique_template_5F_scanner::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_display, 7, C_Lexique_template_5F_scanner::kToken_display),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_foreach, 7, C_Lexique_template_5F_scanner::kToken_foreach),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_println, 7, C_Lexique_template_5F_scanner::kToken_println),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_warning, 7, C_Lexique_template_5F_scanner::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_emptymap, 8, C_Lexique_template_5F_scanner::kToken_emptymap),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_function, 8, C_Lexique_template_5F_scanner::kToken_function),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_template, 8, C_Lexique_template_5F_scanner::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_emptylist, 9, C_Lexique_template_5F_scanner::kToken_emptylist),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_executable, 10, C_Lexique_template_5F_scanner::kToken_executable),
  C_unicode_lexique_table_entry (kUnicodeString_template_5F_scanner_prefixedby, 10, C_Lexique_template_5F_scanner::kToken_prefixedby)
} ;

int16_t C_Lexique_template_5F_scanner::search_into_goilTemplateKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_template_5F_scanner_goilTemplateKeyWordList, ktable_size_template_5F_scanner_goilTemplateKeyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                                      *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_template_5F_scanner * ptr = (const cTokenFor_template_5F_scanner *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_functionContent:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("functionContent") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_functionContent) ;
      break ;
    case kToken_literal_5F_double:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_double") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_signed_5F_literal_5F_integer_5F_bigint:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signed_literal_integer_bigint") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_intValue.decimalString ()) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("...") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_a_5F_string) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_after:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("after") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_before:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("before") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_between:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("between") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_block:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("block") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_by:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("by") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_call:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("call") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_default:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("default") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_display:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("display") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("do") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("else") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_elsif:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("elsif") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_emptylist:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("emptylist") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_emptymap:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("emptymap") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_end:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("end") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_error:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("error") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_exists:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("exists") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_false:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("false") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_for:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("for") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_foreach:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("foreach") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_from:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("from") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_function:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("function") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_here:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("here") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("if") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_in:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("in") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_list:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("list") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_listof:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("listof") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_let:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("let") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_loop:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("loop") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mapof:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mapof") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mod:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mod") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_no:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("no") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_not:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("not") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_or:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("or") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_prefixedby:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("prefixedby") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_print:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("print") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_println:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("println") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_repeat:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("repeat") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_return:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("return") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sort:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sort") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tab:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tab") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_template:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("template") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_then:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("then") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_to:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("to") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_true:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("true") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_typeof:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("typeof") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_yes:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("yes") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_warning:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("warning") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_while:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("while") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_write:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("write") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_executable:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("executable") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("*") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("--") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("::") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("->") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("++") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("/") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("~") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__40_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                                       *
//----------------------------------------------------------------------------------------------------------------------

static const cTemplateDelimiter kTemplateDefinitionArray [1] = {
  cTemplateDelimiter (kUnicodeString_template_5F_scanner__25_, 1, kUnicodeString_template_5F_scanner__25_, 1, NULL, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static const cTemplateDelimiter kTemplateReplacementArray [3] = {
  cTemplateDelimiter (kUnicodeString_template_5F_scanner__5C__25_, 2, kUnicodeString_template_5F_scanner__25_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_template_5F_scanner__5C_n, 2, kUnicodeString_template_5F_scanner__A_, 1, NULL, true),
  cTemplateDelimiter (kUnicodeString_template_5F_scanner__5C__5C_, 2, kUnicodeString_template_5F_scanner__5C_, 1, NULL, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                                       *
//----------------------------------------------------------------------------------------------------------------------

static const bool kEndOfScriptInTemplateArray [99] = {
  false /* identifier */,
  false /* functionContent */,
  false /* literal_double */,
  false /* signed_literal_integer_bigint */,
  false /* . */,
  false /* .= */,
  false /* ... */,
  false /* string */,
  false /* comment */,
  false /* after */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* by */,
  false /* call */,
  false /* default */,
  false /* display */,
  false /* do */,
  false /* else */,
  false /* elsif */,
  false /* emptylist */,
  false /* emptymap */,
  false /* end */,
  false /* error */,
  false /* exists */,
  false /* false */,
  false /* for */,
  false /* foreach */,
  false /* from */,
  false /* function */,
  false /* here */,
  false /* if */,
  false /* in */,
  false /* list */,
  false /* listof */,
  false /* let */,
  false /* loop */,
  false /* mapof */,
  false /* mod */,
  false /* no */,
  false /* not */,
  false /* or */,
  false /* prefixedby */,
  false /* print */,
  false /* println */,
  false /* repeat */,
  false /* return */,
  false /* sort */,
  false /* tab */,
  false /* template */,
  false /* then */,
  false /* to */,
  false /* true */,
  false /* typeof */,
  false /* yes */,
  false /* warning */,
  false /* while */,
  false /* write */,
  false /* executable */,
  false /* * */,
  false /* | */,
  false /* , */,
  false /* + */,
  false /* -- */,
  false /* :: */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* ? */,
  false /* == */,
  false /* ?? */,
  false /* ! */,
  false /* := */,
  false /* ++ */,
  false /* [ */,
  false /* ] */,
  false /* += */,
  false /* ?! */,
  false /* !? */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* <= */,
  false /* { */,
  false /* } */,
  false /* +> */,
  false /* -= */,
  false /* < */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* <- */,
  false /* << */,
  false /* @ */
} ;


//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                                               *
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_template_5F_scanner::parseLexicalToken (void) {
  cTokenFor_template_5F_scanner token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
     && (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
     && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                              kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,
                                                              true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {
            token.mTemplateStringBeforeToken << kTemplateReplacementArray [replacementIndex].mEndString ;
          }else{
            C_String s ;
            while (notTestForInputUTF32String (kTemplateReplacementArray [replacementIndex].mEndString,
                                               kTemplateReplacementArray [replacementIndex].mEndStringLength,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;
            }
            kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_a_5F_string.setLengthToZero () ;
    token.mLexicalAttribute_floatValue = 0.0 ;
    token.mLexicalAttribute_functionContent.setLengthToZero () ;
    token.mLexicalAttribute_identifierString.setLengthToZero () ;
    token.mLexicalAttribute_intValue.setToZero () ;
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    mTokenStartLocation = mCurrentLocation ;
    try{
        if (testForInputUTF32Char (TO_UNICODE ('{'))) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('|')) || testForInputUTF32CharRange (TO_UNICODE ('~'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_functionContent, previousChar ()) ;
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('}'))) {
            token.mTokenCode = kToken_functionContent ;
            enterToken (token) ;
          }else{
            lexicalError (gLexicalMessage_template_5F_scanner_unterminatedFunction COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, previousChar ()) ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (token.mTokenCode == -1) {
            token.mTokenCode = search_into_goilTemplateKeyWordList (token.mLexicalAttribute_identifierString) ;
          }
          if (token.mTokenCode == -1) {
            token.mTokenCode = kToken_identifier ;
          }
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('-'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('-')) ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            do {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            if (testForInputUTF32Char (TO_UNICODE ('.'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
              do {
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                  ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
                }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
                }else{
                  mLoop = false ;
                }
              }while (mLoop) ;
              mLoop = true ;
              ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_template_5F_scanner_floatNumberConversionError) ;
              token.mTokenCode = kToken_literal_5F_double ;
              enterToken (token) ;
            }else{
              ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_intValue, gLexicalMessage_template_5F_scanner_internalError) ;
              token.mTokenCode = kToken_signed_5F_literal_5F_integer_5F_bigint ;
              enterToken (token) ;
            }
          }else{
            token.mTokenCode = kToken__2D_ ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('.'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
            do {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_template_5F_scanner_floatNumberConversionError) ;
            token.mTokenCode = kToken_literal_5F_double ;
            enterToken (token) ;
          }else{
            ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_intValue, gLexicalMessage_template_5F_scanner_internalError) ;
            token.mTokenCode = kToken_signed_5F_literal_5F_integer_5F_bigint ;
            enterToken (token) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('0')) ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            do {
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
                ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
              }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_template_5F_scanner_floatNumberConversionError) ;
            token.mTokenCode = kToken_literal_5F_double ;
            enterToken (token) ;
          }else{
            if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2E__2E_, 2, true)) {
              token.mTokenCode = kToken__2E__2E__2E_ ;
              enterToken (token) ;
            }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3D_, 1, true)) {
              token.mTokenCode = kToken__2E__3D_ ;
              enterToken (token) ;
            }else{
              token.mTokenCode = kToken__2E_ ;
              enterToken (token) ;
            }
          }
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3F__3F_, 2, true)) {
          token.mTokenCode = kToken__3F__3F_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3F__21_, 2, true)) {
          token.mTokenCode = kToken__3F__21_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3E__3E_, 2, true)) {
          token.mTokenCode = kToken__3E__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3E__3D_, 2, true)) {
          token.mTokenCode = kToken__3E__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3D__3D_, 2, true)) {
          token.mTokenCode = kToken__3D__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3C__3D_, 2, true)) {
          token.mTokenCode = kToken__3C__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3C__3C_, 2, true)) {
          token.mTokenCode = kToken__3C__3C_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3C__2D_, 2, true)) {
          token.mTokenCode = kToken__3C__2D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3A__3D_, 2, true)) {
          token.mTokenCode = kToken__3A__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3A__3A_, 2, true)) {
          token.mTokenCode = kToken__3A__3A_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2D__3E_, 2, true)) {
          token.mTokenCode = kToken__2D__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2D__3D_, 2, true)) {
          token.mTokenCode = kToken__2D__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2D__2D_, 2, true)) {
          token.mTokenCode = kToken__2D__2D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2B__3E_, 2, true)) {
          token.mTokenCode = kToken__2B__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2B__3D_, 2, true)) {
          token.mTokenCode = kToken__2B__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2B__2B_, 2, true)) {
          token.mTokenCode = kToken__2B__2B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__21__3F_, 2, true)) {
          token.mTokenCode = kToken__21__3F_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__21__3D_, 2, true)) {
          token.mTokenCode = kToken__21__3D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__7E_, 1, true)) {
          token.mTokenCode = kToken__7E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__7D_, 1, true)) {
          token.mTokenCode = kToken__7D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__7C_, 1, true)) {
          token.mTokenCode = kToken__7C_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__7B_, 1, true)) {
          token.mTokenCode = kToken__7B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__5E_, 1, true)) {
          token.mTokenCode = kToken__5E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__5D_, 1, true)) {
          token.mTokenCode = kToken__5D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__5B_, 1, true)) {
          token.mTokenCode = kToken__5B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__40_, 1, true)) {
          token.mTokenCode = kToken__40_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3F_, 1, true)) {
          token.mTokenCode = kToken__3F_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3E_, 1, true)) {
          token.mTokenCode = kToken__3E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3C_, 1, true)) {
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3B_, 1, true)) {
          token.mTokenCode = kToken__3B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__3A_, 1, true)) {
          token.mTokenCode = kToken__3A_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2F_, 1, true)) {
          token.mTokenCode = kToken__2F_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2D_, 1, true)) {
          token.mTokenCode = kToken__2D_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2C_, 1, true)) {
          token.mTokenCode = kToken__2C_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2B_, 1, true)) {
          token.mTokenCode = kToken__2B_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__2A_, 1, true)) {
          token.mTokenCode = kToken__2A_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__29_, 1, true)) {
          token.mTokenCode = kToken__29_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__28_, 1, true)) {
          token.mTokenCode = kToken__28_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__26_, 1, true)) {
          token.mTokenCode = kToken__26_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_template_5F_scanner__21_, 1, true)) {
          token.mTokenCode = kToken__21_ ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_a_5F_string, previousChar ()) ;
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            token.mTokenCode = kToken_string ;
            enterToken (token) ;
          }else{
            lexicalError (gLexicalMessage_template_5F_scanner_unterminatedLitteralString COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
          do {
            if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          enterDroppedTerminal (kToken_comment) ;
        }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
        }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
          token.mTokenCode = kToken_ ; // Empty string code
        }else{ // Unknown input character
          unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
        }
      }catch (const C_lexicalErrorException &) {
        token.mTokenCode = -1 ; // No token
        advance () ; // ... go throught unknown character
      }
    }
    if ((token.mTokenCode > 0) && kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  
  }
  if ((UNICODE_VALUE (mCurrentChar) == '\0') && (token.mTemplateStringBeforeToken.length () > 0)) {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                                      *
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_template_5F_scanner::enterToken (const cTokenFor_template_5F_scanner & inToken) {
  cTokenFor_template_5F_scanner * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_template_5F_scanner ()) ;
  ptr->mTokenCode = inToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;
  ptr->mLexicalAttribute_a_5F_string = inToken.mLexicalAttribute_a_5F_string ;
  ptr->mLexicalAttribute_floatValue = inToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_functionContent = inToken.mLexicalAttribute_functionContent ;
  ptr->mLexicalAttribute_identifierString = inToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_intValue = inToken.mLexicalAttribute_intValue ;
  ptr->mLexicalAttribute_tokenString = inToken.mLexicalAttribute_tokenString ;
  enterTokenFromPointer (ptr) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                                       *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::attributeValue_a_5F_string (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_a_5F_string ;
}

//----------------------------------------------------------------------------------------------------------------------

double C_Lexique_template_5F_scanner::attributeValue_floatValue (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_floatValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::attributeValue_functionContent (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_functionContent ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::attributeValue_identifierString (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_identifierString ;
}

//----------------------------------------------------------------------------------------------------------------------

C_BigInt C_Lexique_template_5F_scanner::attributeValue_intValue (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_intValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::attributeValue_tokenString (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_template_5F_scanner::synthetizedAttribute_a_5F_string (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_template_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_a_5F_string) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_template_5F_scanner::synthetizedAttribute_floatValue (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_template_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_template_5F_scanner::synthetizedAttribute_functionContent (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_template_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_functionContent) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_template_5F_scanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_template_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint C_Lexique_template_5F_scanner::synthetizedAttribute_intValue (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_template_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_intValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_template_5F_scanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_template_5F_scanner * ptr = (cTokenFor_template_5F_scanner *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_template_5F_scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                                                   *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_template_5F_scanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("functionContent") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_double") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signed_literal_integer_bigint") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("by") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("call") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("display") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("emptylist") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("emptymap") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("exists") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("foreach") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("from") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("function") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("here") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("list") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("listof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mapof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("prefixedby") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("print") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("println") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("return") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sort") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tab") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("to") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("typeof") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("yes") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("write") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("executable") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("::") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_template_5F_scanner (TC_UniqueArray <C_String> & ioList) {
  ioList.addObject ("template_scanner:galgasDelimitorsList") ;
  ioList.addObject ("template_scanner:goilTemplateKeyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_template_5F_scanner (const C_String & inIdentifier,
                                                          bool & ioFound,
                                                          TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "template_scanner:galgasDelimitorsList") {
    ioFound = true ;
    ioList.addObject ("!") ;
    ioList.addObject ("&") ;
    ioList.addObject ("(") ;
    ioList.addObject (")") ;
    ioList.addObject ("*") ;
    ioList.addObject ("+") ;
    ioList.addObject (",") ;
    ioList.addObject ("-") ;
    ioList.addObject ("/") ;
    ioList.addObject (":") ;
    ioList.addObject (";") ;
    ioList.addObject ("<") ;
    ioList.addObject (">") ;
    ioList.addObject ("\?") ;
    ioList.addObject ("@") ;
    ioList.addObject ("[") ;
    ioList.addObject ("]") ;
    ioList.addObject ("^") ;
    ioList.addObject ("{") ;
    ioList.addObject ("|") ;
    ioList.addObject ("}") ;
    ioList.addObject ("~") ;
    ioList.addObject ("!=") ;
    ioList.addObject ("!\?") ;
    ioList.addObject ("++") ;
    ioList.addObject ("+=") ;
    ioList.addObject ("+>") ;
    ioList.addObject ("--") ;
    ioList.addObject ("-=") ;
    ioList.addObject ("->") ;
    ioList.addObject ("::") ;
    ioList.addObject (":=") ;
    ioList.addObject ("<-") ;
    ioList.addObject ("<<") ;
    ioList.addObject ("<=") ;
    ioList.addObject ("==") ;
    ioList.addObject (">=") ;
    ioList.addObject (">>") ;
    ioList.addObject ("\?!") ;
    ioList.addObject ("\?\?") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "template_scanner:goilTemplateKeyWordList") {
    ioFound = true ;
    ioList.addObject ("by") ;
    ioList.addObject ("do") ;
    ioList.addObject ("if") ;
    ioList.addObject ("in") ;
    ioList.addObject ("no") ;
    ioList.addObject ("or") ;
    ioList.addObject ("to") ;
    ioList.addObject ("end") ;
    ioList.addObject ("for") ;
    ioList.addObject ("let") ;
    ioList.addObject ("mod") ;
    ioList.addObject ("not") ;
    ioList.addObject ("tab") ;
    ioList.addObject ("yes") ;
    ioList.addObject ("call") ;
    ioList.addObject ("else") ;
    ioList.addObject ("from") ;
    ioList.addObject ("here") ;
    ioList.addObject ("list") ;
    ioList.addObject ("loop") ;
    ioList.addObject ("sort") ;
    ioList.addObject ("then") ;
    ioList.addObject ("true") ;
    ioList.addObject ("after") ;
    ioList.addObject ("block") ;
    ioList.addObject ("elsif") ;
    ioList.addObject ("error") ;
    ioList.addObject ("false") ;
    ioList.addObject ("mapof") ;
    ioList.addObject ("print") ;
    ioList.addObject ("while") ;
    ioList.addObject ("write") ;
    ioList.addObject ("before") ;
    ioList.addObject ("exists") ;
    ioList.addObject ("listof") ;
    ioList.addObject ("repeat") ;
    ioList.addObject ("return") ;
    ioList.addObject ("typeof") ;
    ioList.addObject ("between") ;
    ioList.addObject ("default") ;
    ioList.addObject ("display") ;
    ioList.addObject ("foreach") ;
    ioList.addObject ("println") ;
    ioList.addObject ("warning") ;
    ioList.addObject ("emptymap") ;
    ioList.addObject ("function") ;
    ioList.addObject ("template") ;
    ioList.addObject ("emptylist") ;
    ioList.addObject ("executable") ;
    ioList.addObject ("prefixedby") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_template_5F_scanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_template_5F_scanner, getKeywordsForIdentifier_template_5F_scanner) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_template_5F_scanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [100] = {0,
    0 /* template_scanner_1_identifier */,
    0 /* template_scanner_1_functionContent */,
    5 /* template_scanner_1_literal_5F_double */,
    4 /* template_scanner_1_signed_5F_literal_5F_integer_5F_bigint */,
    2 /* template_scanner_1__2E_ */,
    2 /* template_scanner_1__2E__3D_ */,
    2 /* template_scanner_1__2E__2E__2E_ */,
    6 /* template_scanner_1_string */,
    7 /* template_scanner_1_comment */,
    1 /* template_scanner_1_after */,
    1 /* template_scanner_1_before */,
    1 /* template_scanner_1_between */,
    1 /* template_scanner_1_block */,
    1 /* template_scanner_1_by */,
    1 /* template_scanner_1_call */,
    1 /* template_scanner_1_default */,
    1 /* template_scanner_1_display */,
    1 /* template_scanner_1_do */,
    1 /* template_scanner_1_else */,
    1 /* template_scanner_1_elsif */,
    1 /* template_scanner_1_emptylist */,
    1 /* template_scanner_1_emptymap */,
    1 /* template_scanner_1_end */,
    1 /* template_scanner_1_error */,
    1 /* template_scanner_1_exists */,
    1 /* template_scanner_1_false */,
    1 /* template_scanner_1_for */,
    1 /* template_scanner_1_foreach */,
    1 /* template_scanner_1_from */,
    1 /* template_scanner_1_function */,
    1 /* template_scanner_1_here */,
    1 /* template_scanner_1_if */,
    1 /* template_scanner_1_in */,
    1 /* template_scanner_1_list */,
    1 /* template_scanner_1_listof */,
    1 /* template_scanner_1_let */,
    1 /* template_scanner_1_loop */,
    1 /* template_scanner_1_mapof */,
    1 /* template_scanner_1_mod */,
    1 /* template_scanner_1_no */,
    1 /* template_scanner_1_not */,
    1 /* template_scanner_1_or */,
    1 /* template_scanner_1_prefixedby */,
    1 /* template_scanner_1_print */,
    1 /* template_scanner_1_println */,
    1 /* template_scanner_1_repeat */,
    1 /* template_scanner_1_return */,
    1 /* template_scanner_1_sort */,
    1 /* template_scanner_1_tab */,
    1 /* template_scanner_1_template */,
    1 /* template_scanner_1_then */,
    1 /* template_scanner_1_to */,
    1 /* template_scanner_1_true */,
    1 /* template_scanner_1_typeof */,
    1 /* template_scanner_1_yes */,
    1 /* template_scanner_1_warning */,
    1 /* template_scanner_1_while */,
    1 /* template_scanner_1_write */,
    1 /* template_scanner_1_executable */,
    2 /* template_scanner_1__2A_ */,
    2 /* template_scanner_1__7C_ */,
    2 /* template_scanner_1__2C_ */,
    2 /* template_scanner_1__2B_ */,
    2 /* template_scanner_1__2D__2D_ */,
    2 /* template_scanner_1__3A__3A_ */,
    2 /* template_scanner_1__3E_ */,
    2 /* template_scanner_1__3B_ */,
    2 /* template_scanner_1__3A_ */,
    2 /* template_scanner_1__2D_ */,
    2 /* template_scanner_1__28_ */,
    2 /* template_scanner_1__29_ */,
    2 /* template_scanner_1__2D__3E_ */,
    2 /* template_scanner_1__3F_ */,
    2 /* template_scanner_1__3D__3D_ */,
    2 /* template_scanner_1__3F__3F_ */,
    2 /* template_scanner_1__21_ */,
    2 /* template_scanner_1__3A__3D_ */,
    2 /* template_scanner_1__2B__2B_ */,
    2 /* template_scanner_1__5B_ */,
    2 /* template_scanner_1__5D_ */,
    2 /* template_scanner_1__2B__3D_ */,
    2 /* template_scanner_1__3F__21_ */,
    2 /* template_scanner_1__21__3F_ */,
    2 /* template_scanner_1__2F_ */,
    2 /* template_scanner_1__21__3D_ */,
    2 /* template_scanner_1__3E__3D_ */,
    2 /* template_scanner_1__26_ */,
    2 /* template_scanner_1__3C__3D_ */,
    2 /* template_scanner_1__7B_ */,
    2 /* template_scanner_1__7D_ */,
    2 /* template_scanner_1__2B__3E_ */,
    2 /* template_scanner_1__2D__3D_ */,
    2 /* template_scanner_1__3C_ */,
    2 /* template_scanner_1__5E_ */,
    2 /* template_scanner_1__3E__3E_ */,
    2 /* template_scanner_1__7E_ */,
    2 /* template_scanner_1__3C__2D_ */,
    2 /* template_scanner_1__3C__3C_ */,
    2 /* template_scanner_1__40_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_template_5F_scanner::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 8) {
    static const char * kStyleArray [8] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "nonTerminalStyle",
      "integerStyle",
      "floatCsts",
      "stringStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@sortingKeyList' list                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sortingKeyList : public cCollectionElement {
  public : GALGAS_sortingKeyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sortingKeyList (const GALGAS_lstring & in_key,
                                              const GALGAS_lsint & in_order
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sortingKeyList::cCollectionElement_sortingKeyList (const GALGAS_lstring & in_key,
                                                                      const GALGAS_lsint & in_order
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_key, in_order) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sortingKeyList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sortingKeyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sortingKeyList (mObject.mAttribute_key, mObject.mAttribute_order COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sortingKeyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "key" ":" ;
  mObject.mAttribute_key.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "order" ":" ;
  mObject.mAttribute_order.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sortingKeyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sortingKeyList * operand = (cCollectionElement_sortingKeyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sortingKeyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList::GALGAS_sortingKeyList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList::GALGAS_sortingKeyList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList GALGAS_sortingKeyList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_sortingKeyList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList GALGAS_sortingKeyList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lsint & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortingKeyList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_sortingKeyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_lstring & in_key,
                                                       const GALGAS_lsint & in_order
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_sortingKeyList * p = NULL ;
  macroMyNew (p, cCollectionElement_sortingKeyList (in_key,
                                                    in_order COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                 const GALGAS_lsint & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sortingKeyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                  const GALGAS_lsint inOperand1,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sortingKeyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                  GALGAS_lsint & outOperand1,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sortingKeyList * p = (cCollectionElement_sortingKeyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
      outOperand0 = p->mObject.mAttribute_key ;
      outOperand1 = p->mObject.mAttribute_order ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::setter_popFirst (GALGAS_lstring & outOperand0,
                                             GALGAS_lsint & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortingKeyList * p = (cCollectionElement_sortingKeyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
    outOperand0 = p->mObject.mAttribute_key ;
    outOperand1 = p->mObject.mAttribute_order ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::setter_popLast (GALGAS_lstring & outOperand0,
                                            GALGAS_lsint & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortingKeyList * p = (cCollectionElement_sortingKeyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
    outOperand0 = p->mObject.mAttribute_key ;
    outOperand1 = p->mObject.mAttribute_order ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::method_first (GALGAS_lstring & outOperand0,
                                          GALGAS_lsint & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortingKeyList * p = (cCollectionElement_sortingKeyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
    outOperand0 = p->mObject.mAttribute_key ;
    outOperand1 = p->mObject.mAttribute_order ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::method_last (GALGAS_lstring & outOperand0,
                                         GALGAS_lsint & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortingKeyList * p = (cCollectionElement_sortingKeyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
    outOperand0 = p->mObject.mAttribute_key ;
    outOperand1 = p->mObject.mAttribute_order ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList GALGAS_sortingKeyList::add_operation (const GALGAS_sortingKeyList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sortingKeyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList GALGAS_sortingKeyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortingKeyList result = GALGAS_sortingKeyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList GALGAS_sortingKeyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_sortingKeyList result = GALGAS_sortingKeyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList GALGAS_sortingKeyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_sortingKeyList result = GALGAS_sortingKeyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList::plusAssign_operation (const GALGAS_sortingKeyList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortingKeyList::getter_keyAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortingKeyList * p = (cCollectionElement_sortingKeyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
    result = p->mObject.mAttribute_key ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint GALGAS_sortingKeyList::getter_orderAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortingKeyList * p = (cCollectionElement_sortingKeyList *) attributes.ptr () ;
  GALGAS_lsint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
    result = p->mObject.mAttribute_order ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sortingKeyList::cEnumerator_sortingKeyList (const GALGAS_sortingKeyList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList_2D_element cEnumerator_sortingKeyList::current (LOCATION_ARGS) const {
  const cCollectionElement_sortingKeyList * p = (const cCollectionElement_sortingKeyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sortingKeyList::current_key (LOCATION_ARGS) const {
  const cCollectionElement_sortingKeyList * p = (const cCollectionElement_sortingKeyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
  return p->mObject.mAttribute_key ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint cEnumerator_sortingKeyList::current_order (LOCATION_ARGS) const {
  const cCollectionElement_sortingKeyList * p = (const cCollectionElement_sortingKeyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortingKeyList) ;
  return p->mObject.mAttribute_order ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @sortingKeyList type                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortingKeyList ("sortingKeyList",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortingKeyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortingKeyList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortingKeyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortingKeyList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList GALGAS_sortingKeyList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sortingKeyList result ;
  const GALGAS_sortingKeyList * p = (const GALGAS_sortingKeyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortingKeyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortingKeyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i0_ (const GALGAS_string constinArgument_inPrefix,
                                                                                      const GALGAS_string constinArgument_inPath,
                                                                                      const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & ioArgument_ioResultingString,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__21_) COMMA_SOURCE_FILE ("template_parser.galgas", 97)) ;
  GALGAS_Tvalue var_expression_2363 ;
  GALGAS_Ttype var_resultType_2383 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_expression_2363, var_resultType_2383, inCompiler) ;
  switch (var_resultType_2383.enumValue ()) {
  case GALGAS_Ttype::kNotBuilt:
    break ;
  case GALGAS_Ttype::kEnum_stringType:
  case GALGAS_Ttype::kEnum_enumType:
    {
      ioArgument_ioResultingString.plusAssign_operation(var_expression_2363.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 109)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_intType:
    {
      ioArgument_ioResultingString.plusAssign_operation(var_expression_2363.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 111)).getter_string (SOURCE_FILE ("template_parser.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 111)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_floatType:
    {
      ioArgument_ioResultingString.plusAssign_operation(var_expression_2363.getter_mFloatValue (SOURCE_FILE ("template_parser.galgas", 113)).getter_string (SOURCE_FILE ("template_parser.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 113)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_boolType:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression_2363.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 115)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 115)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioResultingString.plusAssign_operation(GALGAS_string ("false"), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 116)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioResultingString.plusAssign_operation(GALGAS_string ("true"), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 118)) ;
      }
    }
    break ;
  case GALGAS_Ttype::kEnum_listType:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 121)), GALGAS_string ("a list expression cannot be emitted")  COMMA_SOURCE_FILE ("template_parser.galgas", 121)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_mapType:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 123)), GALGAS_string ("a map expression cannot be emitted")  COMMA_SOURCE_FILE ("template_parser.galgas", 123)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_structType:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 125)), GALGAS_string ("a struct expression cannot be emitted")  COMMA_SOURCE_FILE ("template_parser.galgas", 125)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_unconstructedType:
  case GALGAS_Ttype::kEnum_functionType:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 127)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_parser.galgas", 127)) ;
    }
    break ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 130)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 131)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i0_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__21_) COMMA_SOURCE_FILE ("template_parser.galgas", 97)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i1_ (const GALGAS_string constinArgument_inPrefix,
                                                                                      const GALGAS_string constinArgument_inPath,
                                                                                      const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  GALGAS_bool var_fileNameOk_3694 = GALGAS_bool (true) ;
  GALGAS_bool var_executableFile_3724 = GALGAS_bool (false) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_write) COMMA_SOURCE_FILE ("template_parser.galgas", 146)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("template_parser.galgas", 146)) ;
  switch (select_template_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_executable) COMMA_SOURCE_FILE ("template_parser.galgas", 147)) ;
    var_executableFile_3724 = GALGAS_bool (true) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  GALGAS_Tvalue var_expression_3819 ;
  GALGAS_Ttype var_expressionType_3843 ;
  GALGAS_TfieldMap var_templateVariableMap_3876 = ioArgument_ioTemplateVariableMap ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_expression_3819, var_expressionType_3843, inCompiler) ;
  const enumGalgasBool test_0 = var_templateVariableMap_3876.getter_hasKeyAtLevel (GALGAS_string ("FILENAME"), GALGAS_uint ((uint32_t) 0U) COMMA_SOURCE_FILE ("template_parser.galgas", 159)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_Ttype joker_4219 ; // Joker input parameter
    GALGAS_Tvalue joker_4222 ; // Joker input parameter
    var_templateVariableMap_3876.setter_removeKey (function_lstringWith (GALGAS_string ("FILENAME"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 160)), joker_4219, joker_4222, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 160)) ;
    }
  }
  const enumGalgasBool test_1 = var_templateVariableMap_3876.getter_hasKeyAtLevel (GALGAS_string ("FILEPATH"), GALGAS_uint ((uint32_t) 0U) COMMA_SOURCE_FILE ("template_parser.galgas", 162)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    GALGAS_Ttype joker_4356 ; // Joker input parameter
    GALGAS_Tvalue joker_4359 ; // Joker input parameter
    var_templateVariableMap_3876.setter_removeKey (function_lstringWith (GALGAS_string ("FILEPATH"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 163)), joker_4356, joker_4359, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 163)) ;
    }
  }
  GALGAS_Tvalue var_fileName_4386 = function_valueWithString (var_expression_3819.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 165)).getter_lastPathComponent (SOURCE_FILE ("template_parser.galgas", 165)), function_lstringWith (GALGAS_string ("name of the file"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 165)) ;
  GALGAS_Tvalue var_nativeFilePath_4511 = function_valueWithString (var_expression_3819.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 166)).getter_nativePathWithUnixPath (SOURCE_FILE ("template_parser.galgas", 166)), function_lstringWith (GALGAS_string ("path of the file"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 166)) ;
  {
  var_templateVariableMap_3876.setter_insertKey (function_lstringWith (GALGAS_string ("FILENAME"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 167)), var_expressionType_3843, var_fileName_4386, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 167)) ;
  }
  {
  var_templateVariableMap_3876.setter_insertKey (function_lstringWith (GALGAS_string ("FILEPATH"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 168)), var_expressionType_3843, var_nativeFilePath_4511, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 168)) ;
  }
  GALGAS_location var_fileNameLocation_4827 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 169)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expressionType_3843.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_parser.galgas", 170)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 171)), GALGAS_string ("a file name should be of type string")  COMMA_SOURCE_FILE ("template_parser.galgas", 171)) ;
    var_fileNameOk_3694 = GALGAS_bool (false) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 174)) ;
  GALGAS_string var_writeBlockResult_5022 = GALGAS_string::makeEmptyString () ;
  GALGAS_Tvalue joker_5174 ; // Joker input parameter
  GALGAS_Ttype joker_5181 ; // Joker input parameter
  nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_3876, var_writeBlockResult_5022, GALGAS_bool (false), joker_5174, joker_5181, inCompiler) ;
  joker_5174.drop () ; // Release temporary input variables (joker in source)
  joker_5181.drop () ; // Release temporary input variables (joker in source)
  const enumGalgasBool test_3 = var_fileNameOk_3694.operator_and (GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("template_parser.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template_parser.galgas", 185)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = var_executableFile_3724.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_directory_5278 = var_expression_3819.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 187)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("template_parser.galgas", 187)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_directory_5278.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_directory_5278.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 189)) ;
      }
      var_writeBlockResult_5022.method_writeToExecutableFile (var_expression_3819.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 191)) ;
    }else if (kBoolFalse == test_4) {
      var_writeBlockResult_5022.method_makeDirectoryAndWriteToFile (var_expression_3819.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 193)) ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 196)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_write) COMMA_SOURCE_FILE ("template_parser.galgas", 196)) ;
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 197)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 198)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i1_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_write) COMMA_SOURCE_FILE ("template_parser.galgas", 146)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("template_parser.galgas", 146)) ;
  switch (select_template_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_executable) COMMA_SOURCE_FILE ("template_parser.galgas", 147)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 174)) ;
  nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 196)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_write) COMMA_SOURCE_FILE ("template_parser.galgas", 196)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_file_5F_name_i2_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                       GALGAS_lstring & outArgument_fileName,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_fileName.drop () ; // Release 'out' argument
  switch (select_template_5F_parser_1 (inCompiler)) {
  case 1: {
    outArgument_fileName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_from) COMMA_SOURCE_FILE ("template_parser.galgas", 210)) ;
    GALGAS_Tvalue var_expressionValue_5935 ;
    GALGAS_Ttype var_expressionType_5962 ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_expressionValue_5935, var_expressionType_5962, inCompiler) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expressionType_5962.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_parser.galgas", 214)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 215)), GALGAS_string ("String expression expected")  COMMA_SOURCE_FILE ("template_parser.galgas", 215)) ;
      outArgument_fileName.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      outArgument_fileName = GALGAS_lstring::constructor_new (var_expressionValue_5935.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 217)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 217))  COMMA_SOURCE_FILE ("template_parser.galgas", 217)) ;
    }
  } break ;
  default:
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_file_5F_name_i2_parse (C_Lexique_template_5F_scanner * inCompiler) {
  switch (select_template_5F_parser_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_from) COMMA_SOURCE_FILE ("template_parser.galgas", 210)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i3_ (const GALGAS_string constinArgument_inPrefix,
                                                                                      const GALGAS_string constinArgument_inPath,
                                                                                      const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & ioArgument_ioResultingString,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  GALGAS_string var_nextPrefix_6616 = constinArgument_inPrefix ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_template) COMMA_SOURCE_FILE ("template_parser.galgas", 232)) ;
  switch (select_template_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("template_parser.galgas", 234)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_exists) COMMA_SOURCE_FILE ("template_parser.galgas", 234)) ;
    GALGAS_lstring var_templateName_6693 ;
    nt_template_5F_file_5F_name_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_templateName_6693, inCompiler) ;
    GALGAS_bool var_found_6810 ;
    switch (select_template_5F_parser_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 239)) ;
      GALGAS_lstring var_prefix_6866 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 239)) ;
      var_nextPrefix_6616 = function_fullPrefix (ioArgument_ioTemplateVariableMap, var_prefix_6866, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 240)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    {
    routine_templateInvocation (var_templateName_6693, var_nextPrefix_6616, constinArgument_inPath, constinArgument_inTemplateDirectory, GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioTemplateVariableMap, ioArgument_ioResultingString, var_found_6810, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 243)) ;
    }
    switch (select_template_5F_parser_4 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_or) COMMA_SOURCE_FILE ("template_parser.galgas", 255)) ;
      if (var_found_6810.operator_not (SOURCE_FILE ("template_parser.galgas", 257)).isValidAndTrue ()) {
        GALGAS_TfieldMap var_templateVariableMap_7247 = GALGAS_TfieldMap::constructor_mapWithMapToOverride (ioArgument_ioTemplateVariableMap  COMMA_SOURCE_FILE ("template_parser.galgas", 258)) ;
        GALGAS_Tvalue joker_7503 ; // Joker input parameter
        GALGAS_Ttype joker_7516 ; // Joker input parameter
        nt_template_5F_instruction_5F_list_ (var_nextPrefix_6616, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_7247, ioArgument_ioResultingString, GALGAS_bool (false), joker_7503, joker_7516, inCompiler) ;
        joker_7503.drop () ; // Release temporary input variables (joker in source)
        joker_7516.drop () ; // Release temporary input variables (joker in source)
        ioArgument_ioTemplateVariableMap = var_templateVariableMap_7247.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 268)) ;
      }else{
        nt_template_5F_instruction_5F_list_parse (inCompiler) ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 272)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_template) COMMA_SOURCE_FILE ("template_parser.galgas", 272)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    GALGAS_lstring var_templateName_7717 ;
    nt_template_5F_file_5F_name_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_templateName_7717, inCompiler) ;
    switch (select_template_5F_parser_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 279)) ;
      GALGAS_lstring var_prefix_7874 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 279)) ;
      var_nextPrefix_6616 = function_fullPrefix (ioArgument_ioTemplateVariableMap, var_prefix_7874, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 280)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    {
    GALGAS_bool joker_8143 ; // Joker input parameter
    routine_templateInvocation (var_templateName_7717, var_nextPrefix_6616, constinArgument_inPath, constinArgument_inTemplateDirectory, GALGAS_bool (true), GALGAS_bool (false), ioArgument_ioTemplateVariableMap, ioArgument_ioResultingString, joker_8143, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 283)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 295)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 296)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i3_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_template) COMMA_SOURCE_FILE ("template_parser.galgas", 232)) ;
  switch (select_template_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("template_parser.galgas", 234)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_exists) COMMA_SOURCE_FILE ("template_parser.galgas", 234)) ;
    nt_template_5F_file_5F_name_parse (inCompiler) ;
    switch (select_template_5F_parser_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 239)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 239)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    switch (select_template_5F_parser_4 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_or) COMMA_SOURCE_FILE ("template_parser.galgas", 255)) ;
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 272)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_template) COMMA_SOURCE_FILE ("template_parser.galgas", 272)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_template_5F_file_5F_name_parse (inCompiler) ;
    switch (select_template_5F_parser_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 279)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 279)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i4_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                      const GALGAS_string /* constinArgument_inPath */,
                                                                                      const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & ioArgument_ioResultingString,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3F_) COMMA_SOURCE_FILE ("template_parser.galgas", 309)) ;
  GALGAS_lstring var_columnConstantName_8620 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 310)) ;
  GALGAS_string var_value_8636 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_searchEndOfLine_8665 = GALGAS_bool (true) ;
  GALGAS_uint var_idx_8684 = ioArgument_ioResultingString.getter_length (SOURCE_FILE ("template_parser.galgas", 313)) ;
  if (ioArgument_ioResultingString.getter_length (SOURCE_FILE ("template_parser.galgas", 314)).isValid ()) {
    uint32_t variant_8720 = ioArgument_ioResultingString.getter_length (SOURCE_FILE ("template_parser.galgas", 314)).uintValue () ;
    bool loop_8720 = true ;
    while (loop_8720) {
      loop_8720 = GALGAS_bool (kIsStrictSup, var_idx_8684.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_8665 COMMA_SOURCE_FILE ("template_parser.galgas", 315)).isValid () ;
      if (loop_8720) {
        loop_8720 = GALGAS_bool (kIsStrictSup, var_idx_8684.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_8665 COMMA_SOURCE_FILE ("template_parser.galgas", 315)).boolValue () ;
      }
      if (loop_8720 && (0 == variant_8720)) {
        loop_8720 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("template_parser.galgas", 314)) ;
      }
      if (loop_8720) {
        variant_8720 -- ;
        var_searchEndOfLine_8665 = GALGAS_bool (kIsNotEqual, ioArgument_ioResultingString.getter_characterAtIndex (var_idx_8684.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 317)).objectCompare (GALGAS_char (TO_UNICODE (10)))) ;
        var_idx_8684.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 318)) ;
        const enumGalgasBool test_0 = var_searchEndOfLine_8665.boolEnum () ;
        if (kBoolTrue == test_0) {
          var_value_8636.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 320)) ;
        }
      }
    }
  }
  {
  ioArgument_ioTemplateVariableMap.setter_insertKey (var_columnConstantName_8620, GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_parser.galgas", 325)), function_valueWithString (var_value_8636, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 323)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 328)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 329)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i4_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3F_) COMMA_SOURCE_FILE ("template_parser.galgas", 309)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 310)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i5_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                      const GALGAS_string /* constinArgument_inPath */,
                                                                                      const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_function) COMMA_SOURCE_FILE ("template_parser.galgas", 342)) ;
  GALGAS_lstring var_fctName_9540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 343)) ;
  GALGAS_lstringlist var_args_9551 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 344)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_parser.galgas", 345)) ;
  switch (select_template_5F_parser_6 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_arg_9609 ;
    var_arg_9609 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 348)) ;
    var_args_9551.addAssign_operation (var_arg_9609  COMMA_SOURCE_FILE ("template_parser.galgas", 349)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_template_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 350)) ;
        var_arg_9609 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 350)) ;
        var_args_9551.addAssign_operation (var_arg_9609  COMMA_SOURCE_FILE ("template_parser.galgas", 350)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_parser.galgas", 352)) ;
  GALGAS_lstring var_content_9761 = inCompiler->synthetizedAttribute_functionContent () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_functionContent) COMMA_SOURCE_FILE ("template_parser.galgas", 353)) ;
  var_content_9761 = GALGAS_lstring::constructor_new (GALGAS_string ("%").add_operation (var_content_9761.getter_string (SOURCE_FILE ("template_parser.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 354)).add_operation (GALGAS_string ("%"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 354)), var_content_9761.getter_location (SOURCE_FILE ("template_parser.galgas", 354))  COMMA_SOURCE_FILE ("template_parser.galgas", 354)) ;
  GALGAS_Tfunction var_fct_9853 = GALGAS_Tfunction::constructor_new (var_fctName_9540, var_args_9551, var_content_9761.getter_string (SOURCE_FILE ("template_parser.galgas", 355))  COMMA_SOURCE_FILE ("template_parser.galgas", 355)) ;
  {
  ioArgument_ioTemplateVariableMap.setter_insertKey (var_fctName_9540, GALGAS_Ttype::constructor_functionType (SOURCE_FILE ("template_parser.galgas", 358)), GALGAS_Tvalue::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 359)), GALGAS_double (0), GALGAS_string::makeEmptyString (), GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 359)), GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_parser.galgas", 359)), var_fct_9853, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 359))  COMMA_SOURCE_FILE ("template_parser.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 356)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 361)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 362)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i5_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_function) COMMA_SOURCE_FILE ("template_parser.galgas", 342)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 343)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_parser.galgas", 345)) ;
  switch (select_template_5F_parser_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 348)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_template_5F_parser_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 350)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 350)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_parser.galgas", 352)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_functionContent) COMMA_SOURCE_FILE ("template_parser.galgas", 353)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i6_ (const GALGAS_string constinArgument_inPrefix,
                                                                                      const GALGAS_string constinArgument_inPath,
                                                                                      const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_call) COMMA_SOURCE_FILE ("template_parser.galgas", 375)) ;
  GALGAS_lstring var_fctName_10535 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 376)) ;
  GALGAS_TexpressionList var_args_10546 = GALGAS_TexpressionList::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 377)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_parser.galgas", 378)) ;
  switch (select_template_5F_parser_8 (inCompiler)) {
  case 1: {
    GALGAS_Ttype var_type_10607 ;
    GALGAS_Tvalue var_value_10625 ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_value_10625, var_type_10607, inCompiler) ;
    var_args_10546.addAssign_operation (var_value_10625, var_type_10607  COMMA_SOURCE_FILE ("template_parser.galgas", 389)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_template_5F_parser_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 391)) ;
        GALGAS_Ttype var_type_10823 ;
        GALGAS_Tvalue var_value_10843 ;
        nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_value_10843, var_type_10823, inCompiler) ;
        var_args_10546.addAssign_operation (var_value_10843, var_type_10823  COMMA_SOURCE_FILE ("template_parser.galgas", 401)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_parser.galgas", 405)) ;
  GALGAS_Ttype var_type_11052 ;
  GALGAS_Tvalue var_value_11068 ;
  ioArgument_ioTemplateVariableMap.method_searchKey (var_fctName_10535, var_type_11052, var_value_11068, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 409)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_args_10546.getter_length (SOURCE_FILE ("template_parser.galgas", 415)).objectCompare (var_value_11068.getter_mFunctionValue (SOURCE_FILE ("template_parser.galgas", 415)).getter_args (SOURCE_FILE ("template_parser.galgas", 415)).getter_length (SOURCE_FILE ("template_parser.galgas", 415)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 416)), GALGAS_string ("incorrect number of arguments")  COMMA_SOURCE_FILE ("template_parser.galgas", 416)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_TfieldMap var_locals_11355 = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_parser.galgas", 419)) ;
    cEnumerator_TexpressionList enumerator_11463 (var_args_10546, kEnumeration_up) ;
    cEnumerator_lstringlist enumerator_11512 (var_value_11068.getter_mFunctionValue (SOURCE_FILE ("template_parser.galgas", 421)).getter_args (SOURCE_FILE ("template_parser.galgas", 421)), kEnumeration_up) ;
    while (enumerator_11463.hasCurrentObject () && enumerator_11512.hasCurrentObject ()) {
      {
      var_locals_11355.setter_insertKey (enumerator_11512.current_mValue (HERE), enumerator_11463.current_mType (HERE), enumerator_11463.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 422)) ;
      }
      enumerator_11463.gotoNextObject () ;
      enumerator_11512.gotoNextObject () ;
    }
    GALGAS_string var_result_11615 = GALGAS_string::makeEmptyString () ;
    GALGAS_Tvalue joker_11816 ; // Joker input parameter
    GALGAS_Ttype joker_11819 ; // Joker input parameter
    cGrammar_template_5F_grammar::_performSourceStringParsing_ (inCompiler, var_value_11068.getter_mFunctionValue (SOURCE_FILE ("template_parser.galgas", 426)).getter_content (SOURCE_FILE ("template_parser.galgas", 426)), GALGAS_string::makeEmptyString (), constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_locals_11355, var_result_11615, GALGAS_bool (false), joker_11816, joker_11819  COMMA_SOURCE_FILE ("template_parser.galgas", 426)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 428)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 429)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i6_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_call) COMMA_SOURCE_FILE ("template_parser.galgas", 375)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 376)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_parser.galgas", 378)) ;
  switch (select_template_5F_parser_8 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_template_5F_parser_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 391)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_parser.galgas", 405)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i7_ (const GALGAS_string constinArgument_inPrefix,
                                                                                      const GALGAS_string constinArgument_inPath,
                                                                                      const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_return) COMMA_SOURCE_FILE ("template_parser.galgas", 442)) ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, outArgument_returnedValue, outArgument_returnedType, inCompiler) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i7_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_return) COMMA_SOURCE_FILE ("template_parser.galgas", 442)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i8_ (const GALGAS_string constinArgument_inPrefix,
                                                                                      const GALGAS_string constinArgument_inPath,
                                                                                      const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                      GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                      GALGAS_string & ioArgument_ioResultingString,
                                                                                      GALGAS_Tvalue & outArgument_returnedValue,
                                                                                      GALGAS_Ttype & outArgument_returnedType,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("template_parser.galgas", 507)) ;
  GALGAS_bool var_currentCondition_13968 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (var_currentCondition_13968.operator_not (SOURCE_FILE ("template_parser.galgas", 511)).isValidAndTrue ()) {
      GALGAS_Tvalue var_expression_14052 ;
      GALGAS_Ttype var_expressionType_14080 ;
      nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_expression_14052, var_expressionType_14080, inCompiler) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expressionType_14080.objectCompare (GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_parser.galgas", 521)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 522)), GALGAS_string ("the operand of the 'not' operator should be boolean")  COMMA_SOURCE_FILE ("template_parser.galgas", 522)) ;
      }
      var_currentCondition_13968 = GALGAS_bool (kIsEqual, var_expression_14052.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 524)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 524)))) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_then) COMMA_SOURCE_FILE ("template_parser.galgas", 525)) ;
      if (var_currentCondition_13968.isValidAndTrue ()) {
        GALGAS_TfieldMap var_templateVariableMap_14524 = GALGAS_TfieldMap::constructor_mapWithMapToOverride (ioArgument_ioTemplateVariableMap  COMMA_SOURCE_FILE ("template_parser.galgas", 528)) ;
        GALGAS_Tvalue joker_14778 ; // Joker input parameter
        GALGAS_Ttype joker_14791 ; // Joker input parameter
        nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_14524, ioArgument_ioResultingString, GALGAS_bool (false), joker_14778, joker_14791, inCompiler) ;
        joker_14778.drop () ; // Release temporary input variables (joker in source)
        joker_14791.drop () ; // Release temporary input variables (joker in source)
        ioArgument_ioTemplateVariableMap = var_templateVariableMap_14524.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 538)) ;
      }else{
        nt_template_5F_instruction_5F_list_parse (inCompiler) ;
      }
    }else{
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_then) COMMA_SOURCE_FILE ("template_parser.galgas", 544)) ;
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    }
    switch (select_template_5F_parser_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_elsif) COMMA_SOURCE_FILE ("template_parser.galgas", 548)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_template_5F_parser_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_else) COMMA_SOURCE_FILE ("template_parser.galgas", 553)) ;
    if (var_currentCondition_13968.operator_not (SOURCE_FILE ("template_parser.galgas", 555)).isValidAndTrue ()) {
      GALGAS_TfieldMap var_templateVariableMap_15151 = GALGAS_TfieldMap::constructor_mapWithMapToOverride (ioArgument_ioTemplateVariableMap  COMMA_SOURCE_FILE ("template_parser.galgas", 556)) ;
      GALGAS_Tvalue joker_15389 ; // Joker input parameter
      GALGAS_Ttype joker_15400 ; // Joker input parameter
      nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_15151, ioArgument_ioResultingString, GALGAS_bool (false), joker_15389, joker_15400, inCompiler) ;
      joker_15389.drop () ; // Release temporary input variables (joker in source)
      joker_15400.drop () ; // Release temporary input variables (joker in source)
      ioArgument_ioTemplateVariableMap = var_templateVariableMap_15151.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 566)) ;
    }else{
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 572)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("template_parser.galgas", 573)) ;
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 574)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 575)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i8_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("template_parser.galgas", 507)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_then) COMMA_SOURCE_FILE ("template_parser.galgas", 525)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_template_5F_parser_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_elsif) COMMA_SOURCE_FILE ("template_parser.galgas", 548)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_template_5F_parser_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_else) COMMA_SOURCE_FILE ("template_parser.galgas", 553)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 572)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("template_parser.galgas", 573)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_5F_list_i9_ (const GALGAS_string constinArgument_inPrefix,
                                                                                              const GALGAS_string constinArgument_inPath,
                                                                                              const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                              GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                              GALGAS_string & ioArgument_ioResultingString,
                                                                                              const GALGAS_bool constinArgument_inIsRoot,
                                                                                              GALGAS_Tvalue & outArgument_returnedValue,
                                                                                              GALGAS_Ttype & outArgument_returnedType,
                                                                                              C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  GALGAS_Tvalue var_value_15982 = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 590)) ;
  GALGAS_Ttype var_type_16017 = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 591)) ;
  const enumGalgasBool test_0 = constinArgument_inIsRoot.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_requiredVersion_16159 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 594)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("template_parser.galgas", 596)).objectCompare (var_requiredVersion_16159)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 597)), GALGAS_string ("\n"
        "  The version of Trampoline does not correspond to the version of goil\n").add_operation (GALGAS_string ("    Version of Trampoline: "), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 598)).add_operation (var_requiredVersion_16159, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 599)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 599)).add_operation (GALGAS_string ("    Version of goil      : "), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 599)).add_operation (GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("template_parser.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 600))  COMMA_SOURCE_FILE ("template_parser.galgas", 597)) ;
    }
  }else if (kBoolFalse == test_0) {
    ioArgument_ioResultingString.plusAssign_operation(GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 603)) ;
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_template_5F_parser_12 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, ioArgument_ioResultingString, var_value_15982, var_type_16017, inCompiler) ;
      ioArgument_ioResultingString.plusAssign_operation(GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 615)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  outArgument_returnedValue = var_value_15982 ;
  outArgument_returnedType = var_type_16017 ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_5F_list_i9_parse (C_Lexique_template_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_parser_12 (inCompiler)) {
    case 2: {
      nt_template_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_goil_5F_template_5F_start_5F_symbol_i10_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                   const GALGAS_string constinArgument_inPath,
                                                                                                   const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                   GALGAS_TfieldMap inArgument_inTemplateVariableMap,
                                                                                                   GALGAS_string & ioArgument_ioResultingString,
                                                                                                   const GALGAS_bool constinArgument_inIsRoot,
                                                                                                   GALGAS_Tvalue & outArgument_returnedValue,
                                                                                                   GALGAS_Ttype & outArgument_returnedType,
                                                                                                   C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, inArgument_inTemplateVariableMap, ioArgument_ioResultingString, constinArgument_inIsRoot, outArgument_returnedValue, outArgument_returnedType, inCompiler) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_goil_5F_template_5F_start_5F_symbol_i10_parse (C_Lexique_template_5F_scanner * inCompiler) {
  nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i11_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & ioArgument_ioResultingString,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_foreach) COMMA_SOURCE_FILE ("template_parser.galgas", 654)) ;
  GALGAS_lstring var_variableName_17858 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 654)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 654)) ;
  GALGAS_Tvalue var_enumeratedValue_17889 ;
  GALGAS_Ttype var_expressionType_17913 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_17889, var_expressionType_17913, inCompiler) ;
  GALGAS_uint var_listLength_18071 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_lstringlist var_keyList_18098 ;
  switch (var_expressionType_17913.enumValue ()) {
  case GALGAS_Ttype::kNotBuilt:
    break ;
  case GALGAS_Ttype::kEnum_listType:
    {
      var_listLength_18071 = var_enumeratedValue_17889.getter_mMapListValue (SOURCE_FILE ("template_parser.galgas", 669)).getter_length (SOURCE_FILE ("template_parser.galgas", 669)) ;
      var_keyList_18098 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 670)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_mapType:
    {
      var_listLength_18071 = var_enumeratedValue_17889.getter_mStructValue (SOURCE_FILE ("template_parser.galgas", 672)).getter_count (SOURCE_FILE ("template_parser.galgas", 672)) ;
      var_keyList_18098 = var_enumeratedValue_17889.getter_mStructValue (SOURCE_FILE ("template_parser.galgas", 673)).getter_keyList (SOURCE_FILE ("template_parser.galgas", 673)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_boolType:
  case GALGAS_Ttype::kEnum_enumType:
  case GALGAS_Ttype::kEnum_intType:
  case GALGAS_Ttype::kEnum_floatType:
  case GALGAS_Ttype::kEnum_stringType:
  case GALGAS_Ttype::kEnum_structType:
  case GALGAS_Ttype::kEnum_unconstructedType:
  case GALGAS_Ttype::kEnum_functionType:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 675)), GALGAS_string ("only a list or a map can be enumerated")  COMMA_SOURCE_FILE ("template_parser.galgas", 675)) ;
      var_keyList_18098.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_string var_foreachPrefix_18572 ;
  switch (select_template_5F_parser_13 (inCompiler)) {
  case 1: {
    var_foreachPrefix_18572 = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_prefixedby) COMMA_SOURCE_FILE ("template_parser.galgas", 682)) ;
    GALGAS_lstring var_prefixString_18671 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 683)) ;
    var_foreachPrefix_18572 = var_prefixString_18671.getter_string (SOURCE_FILE ("template_parser.galgas", 684)) ;
  } break ;
  default:
    break ;
  }
  switch (select_template_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_before) COMMA_SOURCE_FILE ("template_parser.galgas", 690)) ;
    if (GALGAS_bool (kIsStrictSup, var_listLength_18071.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue ()) {
      GALGAS_Tvalue joker_18983 ; // Joker input parameter
      GALGAS_Ttype joker_18994 ; // Joker input parameter
      nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, ioArgument_ioResultingString, GALGAS_bool (false), joker_18983, joker_18994, inCompiler) ;
      joker_18983.drop () ; // Release temporary input variables (joker in source)
      joker_18994.drop () ; // Release temporary input variables (joker in source)
    }else{
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("template_parser.galgas", 707)) ;
  GALGAS_uint var_idx_19091 = GALGAS_uint ((uint32_t) 0U) ;
  if (var_listLength_18071.isValid ()) {
    uint32_t variant_0 = var_listLength_18071.uintValue () ;
    bool loop_1 = true ;
    while (loop_1) {
      loop_1 = false ;
      if (GALGAS_bool (kIsStrictInf, var_idx_19091.objectCompare (var_listLength_18071)).isValidAndTrue ()) {
        loop_1 = true ;
        variant_0 -- ; // Decrement variant
        const C_parsingContext parsingContext = inCompiler->parsingContext () ;
          GALGAS_TfieldMap var_templateVariableMap_19175 = GALGAS_TfieldMap::constructor_mapWithMapToOverride (ioArgument_ioTemplateVariableMap  COMMA_SOURCE_FILE ("template_parser.galgas", 711)) ;
          GALGAS_Ttype var_itemType_19253 ;
          GALGAS_Tvalue var_itemValue_19275 ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_expressionType_17913.objectCompare (GALGAS_Ttype::constructor_mapType (SOURCE_FILE ("template_parser.galgas", 714)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_lstring var_keyOfItem_19346 = var_keyList_18098.getter_mValueAtIndex (var_idx_19091, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 715)) ;
            var_enumeratedValue_17889.getter_mStructValue (SOURCE_FILE ("template_parser.galgas", 716)).method_searchKey (var_keyOfItem_19346, var_itemType_19253, var_itemValue_19275, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 716)) ;
            {
            routine_addLStringValue (var_templateVariableMap_19175, GALGAS_string ("KEY"), var_keyOfItem_19346, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 717)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 717)) ;
            }
          }else if (kBoolFalse == test_2) {
            GALGAS_TfieldMap var_fieldMap_19578 = var_enumeratedValue_17889.getter_mMapListValue (SOURCE_FILE ("template_parser.galgas", 719)).getter_mMapAtIndex (var_idx_19091, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 719)) ;
            var_itemType_19253 = GALGAS_Ttype::constructor_structType (SOURCE_FILE ("template_parser.galgas", 720)) ;
            var_itemValue_19275 = GALGAS_Tvalue::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 721)), GALGAS_double (0), GALGAS_string::makeEmptyString (), GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 721)), var_fieldMap_19578, function_dummyFunction (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 721)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 721))  COMMA_SOURCE_FILE ("template_parser.galgas", 721)) ;
          }
          GALGAS_lstring var_varName_19814 = GALGAS_lstring::constructor_new (var_foreachPrefix_18572.add_operation (var_variableName_17858.getter_string (SOURCE_FILE ("template_parser.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 723)), var_variableName_17858.getter_location (SOURCE_FILE ("template_parser.galgas", 723))  COMMA_SOURCE_FILE ("template_parser.galgas", 723)) ;
          {
          var_templateVariableMap_19175.setter_insertKey (var_varName_19814, var_itemType_19253, var_itemValue_19275, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 724)) ;
          }
          {
          routine_addUnsignedValue (var_templateVariableMap_19175, GALGAS_lstring::constructor_new (var_foreachPrefix_18572.add_operation (GALGAS_string ("INDEX"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 726)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 726))  COMMA_SOURCE_FILE ("template_parser.galgas", 726)), var_idx_19091.getter_bigint (SOURCE_FILE ("template_parser.galgas", 726)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 726)) ;
          }
          GALGAS_Tvalue joker_20264 ; // Joker input parameter
          GALGAS_Ttype joker_20273 ; // Joker input parameter
          nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_19175, ioArgument_ioResultingString, GALGAS_bool (false), joker_20264, joker_20273, inCompiler) ;
          joker_20264.drop () ; // Release temporary input variables (joker in source)
          joker_20273.drop () ; // Release temporary input variables (joker in source)
          var_idx_19091.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 737)) ;
          switch (select_template_5F_parser_15 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 740)) ;
            if (GALGAS_bool (kIsStrictInf, var_idx_19091.objectCompare (var_listLength_18071)).isValidAndTrue ()) {
              GALGAS_Tvalue joker_20558 ; // Joker input parameter
              GALGAS_Ttype joker_20571 ; // Joker input parameter
              nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_19175, ioArgument_ioResultingString, GALGAS_bool (false), joker_20558, joker_20571, inCompiler) ;
              joker_20558.drop () ; // Release temporary input variables (joker in source)
              joker_20571.drop () ; // Release temporary input variables (joker in source)
            }else{
              nt_template_5F_instruction_5F_list_parse (inCompiler) ;
            }
          } break ;
          default:
            break ;
          }
          ioArgument_ioTemplateVariableMap = var_templateVariableMap_19175.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 756)) ;
        inCompiler->setParsingContext (parsingContext) ;
      }
    }
  }
  //--- 'parse'
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_template_5F_parser_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 740)) ;
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  inCompiler->resetTemplateString () ;
  GALGAS_string var_s_20725 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 758)) ;
  switch (select_template_5F_parser_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_after) COMMA_SOURCE_FILE ("template_parser.galgas", 762)) ;
    if (GALGAS_bool (kIsStrictSup, var_listLength_18071.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue ()) {
      GALGAS_Tvalue joker_21045 ; // Joker input parameter
      GALGAS_Ttype joker_21056 ; // Joker input parameter
      nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, ioArgument_ioResultingString, GALGAS_bool (false), joker_21045, joker_21056, inCompiler) ;
      joker_21045.drop () ; // Release temporary input variables (joker in source)
      joker_21056.drop () ; // Release temporary input variables (joker in source)
    }else{
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 779)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_foreach) COMMA_SOURCE_FILE ("template_parser.galgas", 780)) ;
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 781)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 782)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i11_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_foreach) COMMA_SOURCE_FILE ("template_parser.galgas", 654)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 654)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 654)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_template_5F_parser_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_prefixedby) COMMA_SOURCE_FILE ("template_parser.galgas", 682)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 683)) ;
  } break ;
  default:
    break ;
  }
  switch (select_template_5F_parser_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_before) COMMA_SOURCE_FILE ("template_parser.galgas", 690)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("template_parser.galgas", 707)) ;
  nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_template_5F_parser_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 740)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_template_5F_parser_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_after) COMMA_SOURCE_FILE ("template_parser.galgas", 762)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 779)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_foreach) COMMA_SOURCE_FILE ("template_parser.galgas", 780)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i12_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & ioArgument_ioResultingString,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_for) COMMA_SOURCE_FILE ("template_parser.galgas", 795)) ;
  GALGAS_lstring var_variableName_21582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 795)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 799)) ;
  GALGAS_TexpressionList var_enumerationList_21749 = GALGAS_TexpressionList::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 800)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_Tvalue var_enumeratedValue_21816 ;
    GALGAS_Ttype var_expressionType_21842 ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_21816, var_expressionType_21842, inCompiler) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expressionType_21842.objectCompare (GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_parser.galgas", 811)))).operator_and (GALGAS_bool (kIsNotEqual, var_expressionType_21842.objectCompare (GALGAS_Ttype::constructor_intType (SOURCE_FILE ("template_parser.galgas", 812)))) COMMA_SOURCE_FILE ("template_parser.galgas", 811)).operator_and (GALGAS_bool (kIsNotEqual, var_expressionType_21842.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_parser.galgas", 813)))) COMMA_SOURCE_FILE ("template_parser.galgas", 812)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 814)), GALGAS_string ("only a bool, integer or string can be enumerated")  COMMA_SOURCE_FILE ("template_parser.galgas", 814)) ;
    }
    var_enumerationList_21749.addAssign_operation (var_enumeratedValue_21816, var_expressionType_21842  COMMA_SOURCE_FILE ("template_parser.galgas", 816)) ;
    switch (select_template_5F_parser_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 818)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("template_parser.galgas", 821)) ;
  GALGAS_uint var_idx_22324 = GALGAS_uint ((uint32_t) 0U) ;
  if (var_enumerationList_21749.getter_length (SOURCE_FILE ("template_parser.galgas", 823)).isValid ()) {
    uint32_t variant_2 = var_enumerationList_21749.getter_length (SOURCE_FILE ("template_parser.galgas", 823)).uintValue () ;
    bool loop_3 = true ;
    while (loop_3) {
      loop_3 = false ;
      if (GALGAS_bool (kIsStrictSup, var_enumerationList_21749.getter_length (SOURCE_FILE ("template_parser.galgas", 824)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue ()) {
        loop_3 = true ;
        variant_2 -- ; // Decrement variant
        const C_parsingContext parsingContext = inCompiler->parsingContext () ;
          GALGAS_TfieldMap var_templateVariableMap_22434 = GALGAS_TfieldMap::constructor_mapWithMapToOverride (ioArgument_ioTemplateVariableMap  COMMA_SOURCE_FILE ("template_parser.galgas", 825)) ;
          GALGAS_Tvalue var_value_22510 ;
          GALGAS_Ttype var_type_22526 ;
          {
          var_enumerationList_21749.setter_popFirst (var_value_22510, var_type_22526, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 828)) ;
          }
          {
          var_templateVariableMap_22434.setter_insertKey (var_variableName_21582, var_type_22526, var_value_22510, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 829)) ;
          }
          {
          routine_addUnsignedValue (var_templateVariableMap_22434, GALGAS_lstring::constructor_new (GALGAS_string ("INDEX"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 837))  COMMA_SOURCE_FILE ("template_parser.galgas", 837)), var_idx_22324.getter_bigint (SOURCE_FILE ("template_parser.galgas", 837)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 837)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 837)) ;
          }
          GALGAS_Tvalue joker_23095 ; // Joker input parameter
          GALGAS_Ttype joker_23104 ; // Joker input parameter
          nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_22434, ioArgument_ioResultingString, GALGAS_bool (false), joker_23095, joker_23104, inCompiler) ;
          joker_23095.drop () ; // Release temporary input variables (joker in source)
          joker_23104.drop () ; // Release temporary input variables (joker in source)
          var_idx_22324.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 848)) ;
          switch (select_template_5F_parser_18 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 851)) ;
            if (GALGAS_bool (kIsStrictSup, var_enumerationList_21749.getter_length (SOURCE_FILE ("template_parser.galgas", 853)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue ()) {
              GALGAS_Tvalue joker_23401 ; // Joker input parameter
              GALGAS_Ttype joker_23414 ; // Joker input parameter
              nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_22434, ioArgument_ioResultingString, GALGAS_bool (false), joker_23401, joker_23414, inCompiler) ;
              joker_23401.drop () ; // Release temporary input variables (joker in source)
              joker_23414.drop () ; // Release temporary input variables (joker in source)
            }else{
              nt_template_5F_instruction_5F_list_parse (inCompiler) ;
            }
          } break ;
          default:
            break ;
          }
          ioArgument_ioTemplateVariableMap = var_templateVariableMap_22434.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 867)) ;
        inCompiler->setParsingContext (parsingContext) ;
      }
    }
  }
  //--- 'parse'
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_template_5F_parser_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 851)) ;
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  inCompiler->resetTemplateString () ;
  GALGAS_string var_s_23568 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 869)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 871)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_for) COMMA_SOURCE_FILE ("template_parser.galgas", 872)) ;
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 873)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 874)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i12_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_for) COMMA_SOURCE_FILE ("template_parser.galgas", 795)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 795)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_in) COMMA_SOURCE_FILE ("template_parser.galgas", 799)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_parse (inCompiler) ;
    switch (select_template_5F_parser_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 818)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("template_parser.galgas", 821)) ;
  nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_template_5F_parser_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 851)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 871)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_for) COMMA_SOURCE_FILE ("template_parser.galgas", 872)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i13_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & ioArgument_ioResultingString,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_loop) COMMA_SOURCE_FILE ("template_parser.galgas", 887)) ;
  GALGAS_lstring var_variableName_24086 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 887)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_from) COMMA_SOURCE_FILE ("template_parser.galgas", 888)) ;
  GALGAS_Tvalue var_startValue_24116 ;
  GALGAS_Ttype var_startType_24135 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_startValue_24116, var_startType_24135, inCompiler) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_startType_24135.objectCompare (GALGAS_Ttype::constructor_intType (SOURCE_FILE ("template_parser.galgas", 898)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 899)), GALGAS_string ("loop start value should be an integer")  COMMA_SOURCE_FILE ("template_parser.galgas", 899)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("template_parser.galgas", 901)) ;
  GALGAS_Tvalue var_endValue_24395 ;
  GALGAS_Ttype var_endType_24412 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_endValue_24395, var_endType_24412, inCompiler) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_endType_24412.objectCompare (GALGAS_Ttype::constructor_intType (SOURCE_FILE ("template_parser.galgas", 911)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 912)), GALGAS_string ("loop end value should be an integer")  COMMA_SOURCE_FILE ("template_parser.galgas", 912)) ;
  }
  switch (select_template_5F_parser_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_before) COMMA_SOURCE_FILE ("template_parser.galgas", 917)) ;
    if (GALGAS_bool (kIsSupOrEqual, var_endValue_24395.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 919)).objectCompare (var_startValue_24116.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 919)))).isValidAndTrue ()) {
      GALGAS_Tvalue joker_24939 ; // Joker input parameter
      GALGAS_Ttype joker_24950 ; // Joker input parameter
      nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, ioArgument_ioResultingString, GALGAS_bool (false), joker_24939, joker_24950, inCompiler) ;
      joker_24939.drop () ; // Release temporary input variables (joker in source)
      joker_24950.drop () ; // Release temporary input variables (joker in source)
    }else{
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("template_parser.galgas", 934)) ;
  GALGAS_uint var_start_25049 = var_startValue_24116.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 935)).getter_uint (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 935)) ;
  GALGAS_uint var_stop_25097 = var_endValue_24395.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 936)).getter_uint (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 936)) ;
  GALGAS_uint var_idx_25142 = var_start_25049 ;
  GALGAS_uint var_num_25192 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_start_25049.objectCompare (var_stop_25097)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_num_25192 = GALGAS_uint ((uint32_t) 0U) ;
  }else if (kBoolFalse == test_2) {
    var_num_25192 = var_stop_25097.substract_operation (var_start_25049, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 945)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 945)) ;
  }
  if (var_num_25192.isValid ()) {
    uint32_t variant_3 = var_num_25192.uintValue () ;
    bool loop_4 = true ;
    while (loop_4) {
      loop_4 = false ;
      if (GALGAS_bool (kIsInfOrEqual, var_idx_25142.objectCompare (var_stop_25097)).isValidAndTrue ()) {
        loop_4 = true ;
        variant_3 -- ; // Decrement variant
        const C_parsingContext parsingContext = inCompiler->parsingContext () ;
          GALGAS_TfieldMap var_templateVariableMap_25335 = GALGAS_TfieldMap::constructor_mapWithMapToOverride (ioArgument_ioTemplateVariableMap  COMMA_SOURCE_FILE ("template_parser.galgas", 949)) ;
          {
          routine_addUnsignedValue (var_templateVariableMap_25335, var_variableName_24086, var_idx_25142.getter_bigint (SOURCE_FILE ("template_parser.galgas", 953)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 953)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 953)) ;
          }
          GALGAS_Tvalue joker_25788 ; // Joker input parameter
          GALGAS_Ttype joker_25797 ; // Joker input parameter
          nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_25335, ioArgument_ioResultingString, GALGAS_bool (false), joker_25788, joker_25797, inCompiler) ;
          joker_25788.drop () ; // Release temporary input variables (joker in source)
          joker_25797.drop () ; // Release temporary input variables (joker in source)
          var_idx_25142.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 964)) ;
          switch (select_template_5F_parser_20 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 967)) ;
            if (GALGAS_bool (kIsInfOrEqual, var_idx_25142.objectCompare (var_stop_25097)).isValidAndTrue ()) {
              GALGAS_Tvalue joker_26077 ; // Joker input parameter
              GALGAS_Ttype joker_26090 ; // Joker input parameter
              nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_25335, ioArgument_ioResultingString, GALGAS_bool (false), joker_26077, joker_26090, inCompiler) ;
              joker_26077.drop () ; // Release temporary input variables (joker in source)
              joker_26090.drop () ; // Release temporary input variables (joker in source)
            }else{
              nt_template_5F_instruction_5F_list_parse (inCompiler) ;
            }
          } break ;
          default:
            break ;
          }
          ioArgument_ioTemplateVariableMap = var_templateVariableMap_25335.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 983)) ;
        inCompiler->setParsingContext (parsingContext) ;
      }
    }
  }
  //--- 'parse'
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_template_5F_parser_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 967)) ;
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  inCompiler->resetTemplateString () ;
  GALGAS_string var_s_26244 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 985)) ;
  switch (select_template_5F_parser_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_after) COMMA_SOURCE_FILE ("template_parser.galgas", 989)) ;
    if (GALGAS_bool (kIsSupOrEqual, var_stop_25097.objectCompare (var_start_25049)).isValidAndTrue ()) {
      GALGAS_Tvalue joker_26563 ; // Joker input parameter
      GALGAS_Ttype joker_26574 ; // Joker input parameter
      nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, ioArgument_ioResultingString, GALGAS_bool (false), joker_26563, joker_26574, inCompiler) ;
      joker_26563.drop () ; // Release temporary input variables (joker in source)
      joker_26574.drop () ; // Release temporary input variables (joker in source)
    }else{
      nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 1006)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_loop) COMMA_SOURCE_FILE ("template_parser.galgas", 1007)) ;
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1008)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1009)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i13_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_loop) COMMA_SOURCE_FILE ("template_parser.galgas", 887)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 887)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_from) COMMA_SOURCE_FILE ("template_parser.galgas", 888)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_to) COMMA_SOURCE_FILE ("template_parser.galgas", 901)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_template_5F_parser_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_before) COMMA_SOURCE_FILE ("template_parser.galgas", 917)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("template_parser.galgas", 934)) ;
  nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_template_5F_parser_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_between) COMMA_SOURCE_FILE ("template_parser.galgas", 967)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_template_5F_parser_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_after) COMMA_SOURCE_FILE ("template_parser.galgas", 989)) ;
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 1006)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_loop) COMMA_SOURCE_FILE ("template_parser.galgas", 1007)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i14_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & ioArgument_ioResultingString,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_repeat) COMMA_SOURCE_FILE ("template_parser.galgas", 1023)) ;
  GALGAS_bool var_continueLoop_27080 = GALGAS_bool (true) ;
  GALGAS_TfieldMap var_templateVariableMap_27114 = GALGAS_TfieldMap::constructor_mapWithMapToOverride (ioArgument_ioTemplateVariableMap  COMMA_SOURCE_FILE ("template_parser.galgas", 1025)) ;
  if (GALGAS_uint ((uint32_t) 2000000000U).isValid ()) {
    uint32_t variant_0 = GALGAS_uint ((uint32_t) 2000000000U).uintValue () ;
    bool loop_1 = true ;
    while (loop_1) {
      loop_1 = false ;
      if (var_continueLoop_27080.isValidAndTrue ()) {
        loop_1 = true ;
        variant_0 -- ; // Decrement variant
        const C_parsingContext parsingContext = inCompiler->parsingContext () ;
          GALGAS_Tvalue joker_27399 ; // Joker input parameter
          GALGAS_Ttype joker_27408 ; // Joker input parameter
          nt_template_5F_instruction_5F_list_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_27114, ioArgument_ioResultingString, GALGAS_bool (false), joker_27399, joker_27408, inCompiler) ;
          joker_27399.drop () ; // Release temporary input variables (joker in source)
          joker_27408.drop () ; // Release temporary input variables (joker in source)
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_while) COMMA_SOURCE_FILE ("template_parser.galgas", 1038)) ;
          GALGAS_Ttype var_conditionType_27446 ;
          GALGAS_Tvalue var_conditionValue_27473 ;
          nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_templateVariableMap_27114, var_conditionValue_27473, var_conditionType_27446, inCompiler) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_conditionType_27446.objectCompare (GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_parser.galgas", 1048)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1049)), GALGAS_string ("repeat loop continue condition should be a boolean")  COMMA_SOURCE_FILE ("template_parser.galgas", 1049)) ;
          }else if (kBoolFalse == test_2) {
            var_continueLoop_27080 = GALGAS_bool (kIsNotEqual, var_conditionValue_27473.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 1051)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1051)))) ;
          }
        inCompiler->setParsingContext (parsingContext) ;
      }
    }
  }
  //--- 'parse'
    nt_template_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_while) COMMA_SOURCE_FILE ("template_parser.galgas", 1038)) ;
    nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
  GALGAS_string var_s_27842 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1054)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 1056)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_repeat) COMMA_SOURCE_FILE ("template_parser.galgas", 1057)) ;
  ioArgument_ioTemplateVariableMap = var_templateVariableMap_27114.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1058)) ;
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1059)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1060)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i14_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_repeat) COMMA_SOURCE_FILE ("template_parser.galgas", 1023)) ;
  nt_template_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_while) COMMA_SOURCE_FILE ("template_parser.galgas", 1038)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_parser.galgas", 1056)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_repeat) COMMA_SOURCE_FILE ("template_parser.galgas", 1057)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i15_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  GALGAS_TvarPath var_path_28507 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_let) COMMA_SOURCE_FILE ("template_parser.galgas", 1083)) ;
  nt_variable_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_path_28507, inCompiler) ;
  GALGAS_Tvalue var_enumeratedValue_28620 ;
  GALGAS_Ttype var_expressionType_28644 ;
  switch (select_template_5F_parser_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1087)) ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_28620, var_expressionType_28644, inCompiler) ;
    {
    routine_setVariableInPath (var_path_28507, ioArgument_ioTemplateVariableMap, var_expressionType_28644, var_enumeratedValue_28620, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1101)) ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1103)) ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_28620, var_expressionType_28644, inCompiler) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expressionType_28644.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_parser.galgas", 1111)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expressionType_28644.objectCompare (GALGAS_Ttype::constructor_structType (SOURCE_FILE ("template_parser.galgas", 1112)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1113)), GALGAS_string ("string or struct type expected")  COMMA_SOURCE_FILE ("template_parser.galgas", 1113)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_Tvalue var_variableValue_29645 ;
        GALGAS_Ttype var_variableType_29673 ;
        GALGAS_bool var_found_29693 ;
        {
        routine_searchFieldIfExists (var_path_28507, ioArgument_ioTemplateVariableMap, var_variableType_29673, var_variableValue_29645, var_found_29693, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1119)) ;
        }
        var_variableValue_29645.mAttribute_mMapListValue.addAssign_operation (var_enumeratedValue_28620.getter_mStructValue (SOURCE_FILE ("template_parser.galgas", 1120))  COMMA_SOURCE_FILE ("template_parser.galgas", 1120)) ;
        const enumGalgasBool test_2 = var_found_29693.operator_not (SOURCE_FILE ("template_parser.galgas", 1121)).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_variableType_29673 = GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_parser.galgas", 1122)) ;
        }
        {
        routine_setVariableInPath (var_path_28507, ioArgument_ioTemplateVariableMap, var_variableType_29673, var_variableValue_29645, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1124)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_Tvalue var_variableValue_30076 ;
      GALGAS_Ttype var_variableType_30102 ;
      GALGAS_bool var_found_30120 ;
      {
      routine_searchFieldIfExists (var_path_28507, ioArgument_ioTemplateVariableMap, var_variableType_30102, var_variableValue_30076, var_found_30120, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1130)) ;
      }
      GALGAS_TfieldMap var_fieldMap_30233 = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_parser.galgas", 1131)) ;
      {
      var_fieldMap_30233.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("VALUE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1132))  COMMA_SOURCE_FILE ("template_parser.galgas", 1132)), var_expressionType_28644, var_enumeratedValue_28620, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1132)) ;
      }
      var_variableValue_30076.mAttribute_mMapListValue.addAssign_operation (var_fieldMap_30233  COMMA_SOURCE_FILE ("template_parser.galgas", 1133)) ;
      const enumGalgasBool test_3 = var_found_30120.operator_not (SOURCE_FILE ("template_parser.galgas", 1134)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_variableType_30102 = GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_parser.galgas", 1135)) ;
      }
      {
      routine_setVariableInPath (var_path_28507, ioArgument_ioTemplateVariableMap, var_variableType_30102, var_variableValue_30076, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1137)) ;
      }
    }
  } break ;
  case 3: {
    var_expressionType_28644 = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1141)) ;
    var_enumeratedValue_28620 = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1142)) ;
    {
    routine_setVariableInPath (var_path_28507, ioArgument_ioTemplateVariableMap, var_expressionType_28644, var_enumeratedValue_28620, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1143)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1145)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1146)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i15_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_let) COMMA_SOURCE_FILE ("template_parser.galgas", 1083)) ;
  nt_variable_parse (inCompiler) ;
  switch (select_template_5F_parser_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1087)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1103)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_variable_5F_or_5F_here_i16_ (const GALGAS_string constinArgument_inPrefix,
                                                                                      const GALGAS_string constinArgument_inPath,
                                                                                      const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                      const GALGAS_TfieldMap constinArgument_inTemplateVariableMap,
                                                                                      GALGAS_location & outArgument_outWhere,
                                                                                      C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outWhere.drop () ; // Release 'out' argument
  switch (select_template_5F_parser_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_here) COMMA_SOURCE_FILE ("template_parser.galgas", 1158)) ;
    outArgument_outWhere = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1159)) ;
  } break ;
  case 2: {
    GALGAS_TvarPath var_path_31206 ;
    nt_variable_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inTemplateVariableMap, var_path_31206, inCompiler) ;
    GALGAS_Tvalue var_variableValue_31315 ;
    GALGAS_Ttype var_variableType_31339 ;
    {
    routine_searchField (var_path_31206, constinArgument_inTemplateVariableMap, var_variableType_31339, var_variableValue_31315, outArgument_outWhere, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1165)) ;
    }
  } break ;
  default:
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_variable_5F_or_5F_here_i16_parse (C_Lexique_template_5F_scanner * inCompiler) {
  switch (select_template_5F_parser_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_here) COMMA_SOURCE_FILE ("template_parser.galgas", 1158)) ;
  } break ;
  case 2: {
    nt_variable_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i17_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_error) COMMA_SOURCE_FILE ("template_parser.galgas", 1179)) ;
  GALGAS_location var_where_31775 ;
  nt_variable_5F_or_5F_here_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_where_31775, inCompiler) ;
  GALGAS_Tvalue var_enumeratedValue_31891 ;
  GALGAS_Ttype var_expressionType_31915 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 1184)) ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_31891, var_expressionType_31915, inCompiler) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expressionType_31915.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_parser.galgas", 1192)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1193)), GALGAS_string ("error message should by a string expression")  COMMA_SOURCE_FILE ("template_parser.galgas", 1193)) ;
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (var_where_31775, var_enumeratedValue_31891.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 1195))  COMMA_SOURCE_FILE ("template_parser.galgas", 1195)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1197)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1198)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i17_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_error) COMMA_SOURCE_FILE ("template_parser.galgas", 1179)) ;
  nt_variable_5F_or_5F_here_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 1184)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i18_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_warning) COMMA_SOURCE_FILE ("template_parser.galgas", 1211)) ;
  GALGAS_location var_where_32660 ;
  nt_variable_5F_or_5F_here_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_where_32660, inCompiler) ;
  GALGAS_Tvalue var_enumeratedValue_32777 ;
  GALGAS_Ttype var_expressionType_32801 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 1216)) ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_32777, var_expressionType_32801, inCompiler) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expressionType_32801.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_parser.galgas", 1224)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1225)), GALGAS_string ("error message should by a string expression")  COMMA_SOURCE_FILE ("template_parser.galgas", 1225)) ;
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticWarning (var_where_32660, var_enumeratedValue_32777.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 1227))  COMMA_SOURCE_FILE ("template_parser.galgas", 1227)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1229)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1230)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i18_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_warning) COMMA_SOURCE_FILE ("template_parser.galgas", 1211)) ;
  nt_variable_5F_or_5F_here_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 1216)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i19_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  GALGAS_bool var_carriageReturn_33541 ;
  switch (select_template_5F_parser_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_print) COMMA_SOURCE_FILE ("template_parser.galgas", 1246)) ;
    var_carriageReturn_33541 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_println) COMMA_SOURCE_FILE ("template_parser.galgas", 1248)) ;
    var_carriageReturn_33541 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_Tvalue var_enumeratedValue_33658 ;
  GALGAS_Ttype var_expressionType_33682 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_33658, var_expressionType_33682, inCompiler) ;
  switch (var_expressionType_33682.enumValue ()) {
  case GALGAS_Ttype::kNotBuilt:
    break ;
  case GALGAS_Ttype::kEnum_boolType:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumeratedValue_33658.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 1262)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1262)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->printMessage (GALGAS_string ("true")  COMMA_SOURCE_FILE ("template_parser.galgas", 1263)) ;
      }else if (kBoolFalse == test_0) {
        inCompiler->printMessage (GALGAS_string ("false")  COMMA_SOURCE_FILE ("template_parser.galgas", 1265)) ;
      }
    }
    break ;
  case GALGAS_Ttype::kEnum_intType:
    {
      inCompiler->printMessage (var_enumeratedValue_33658.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 1268)).getter_string (SOURCE_FILE ("template_parser.galgas", 1268))  COMMA_SOURCE_FILE ("template_parser.galgas", 1268)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_floatType:
    {
      inCompiler->printMessage (var_enumeratedValue_33658.getter_mFloatValue (SOURCE_FILE ("template_parser.galgas", 1270)).getter_string (SOURCE_FILE ("template_parser.galgas", 1270))  COMMA_SOURCE_FILE ("template_parser.galgas", 1270)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_stringType:
    {
      inCompiler->printMessage (var_enumeratedValue_33658.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 1272))  COMMA_SOURCE_FILE ("template_parser.galgas", 1272)) ;
    }
    break ;
  case GALGAS_Ttype::kEnum_listType:
  case GALGAS_Ttype::kEnum_mapType:
  case GALGAS_Ttype::kEnum_structType:
  case GALGAS_Ttype::kEnum_enumType:
  case GALGAS_Ttype::kEnum_functionType:
  case GALGAS_Ttype::kEnum_unconstructedType:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1274)), GALGAS_string ("Only strings, numbers and booleans my be printed")  COMMA_SOURCE_FILE ("template_parser.galgas", 1274)) ;
    }
    break ;
  }
  const enumGalgasBool test_1 = var_carriageReturn_33541.boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("template_parser.galgas", 1276)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1277)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1278)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i19_parse (C_Lexique_template_5F_scanner * inCompiler) {
  switch (select_template_5F_parser_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_print) COMMA_SOURCE_FILE ("template_parser.galgas", 1246)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_println) COMMA_SOURCE_FILE ("template_parser.galgas", 1248)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i20_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  GALGAS_TvarPath var_path_34711 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("template_parser.galgas", 1290)) ;
  nt_variable_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_path_34711, inCompiler) ;
  GALGAS_Ttype var_variableType_34824 ;
  GALGAS_Tvalue var_variableValue_34848 ;
  GALGAS_location var_loc_34864 ;
  {
  routine_searchField (var_path_34711, ioArgument_ioTemplateVariableMap, var_variableType_34824, var_variableValue_34848, var_loc_34864, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1294)) ;
  }
  {
  routine_printPath (var_path_34711, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1295)) ;
  }
  inCompiler->printMessage (GALGAS_string (" (").add_operation (var_loc_34864.getter_locationString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1296)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1296)).add_operation (GALGAS_string (") : "), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1296)).add_operation (extensionGetter_messageGoilTemplateType (var_variableType_34824, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1296)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1296))  COMMA_SOURCE_FILE ("template_parser.galgas", 1296)) ;
  {
  routine_printVariable (GALGAS_uint ((uint32_t) 0U), var_variableType_34824, var_variableValue_34848, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1297)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1298)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1299)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i20_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("template_parser.galgas", 1290)) ;
  nt_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_sorting_5F_order_i21_ (GALGAS_lsint & outArgument_order,
                                                                                C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_order.drop () ; // Release 'out' argument
  switch (select_template_5F_parser_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("template_parser.galgas", 1305)) ;
    outArgument_order = GALGAS_lsint::constructor_new (GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1306)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1306))  COMMA_SOURCE_FILE ("template_parser.galgas", 1306)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("template_parser.galgas", 1308)) ;
    outArgument_order = GALGAS_lsint::constructor_new (GALGAS_sint ((int32_t) 1L), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1309))  COMMA_SOURCE_FILE ("template_parser.galgas", 1309)) ;
  } break ;
  default:
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_sorting_5F_order_i21_parse (C_Lexique_template_5F_scanner * inCompiler) {
  switch (select_template_5F_parser_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("template_parser.galgas", 1305)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("template_parser.galgas", 1308)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i22_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                       const GALGAS_string /* constinArgument_inPath */,
                                                                                       const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & /* ioArgument_ioResultingString */,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_sort) COMMA_SOURCE_FILE ("template_parser.galgas", 1322)) ;
  GALGAS_lstring var_variableName_35663 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1322)) ;
  GALGAS_Ttype var_variableType_35685 ;
  GALGAS_Tvalue var_variableValue_35709 ;
  ioArgument_ioTemplateVariableMap.method_searchKey (var_variableName_35663, var_variableType_35685, var_variableValue_35709, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1325)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_by) COMMA_SOURCE_FILE ("template_parser.galgas", 1326)) ;
  GALGAS_sortingKeyList var_keys_35806 = GALGAS_sortingKeyList::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 1327)) ;
  GALGAS_lsint var_firstOrder_35855 ;
  GALGAS_lstring var_firstKey_35893 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1329)) ;
  nt_sorting_5F_order_ (var_firstOrder_35855, inCompiler) ;
  var_keys_35806.addAssign_operation (var_firstKey_35893, var_firstOrder_35855  COMMA_SOURCE_FILE ("template_parser.galgas", 1330)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_parser_26 (inCompiler)) {
    case 2: {
      GALGAS_lsint var_nextOrder_35989 ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 1333)) ;
      GALGAS_lstring var_nextKey_36032 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1333)) ;
      nt_sorting_5F_order_ (var_nextOrder_35989, inCompiler) ;
      var_keys_35806.addAssign_operation (var_nextKey_36032, var_nextOrder_35989  COMMA_SOURCE_FILE ("template_parser.galgas", 1334)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_variableType_35685.objectCompare (GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_parser.galgas", 1337)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_TfieldMapList var_variable_36184 = var_variableValue_35709.getter_mMapListValue (SOURCE_FILE ("template_parser.galgas", 1339)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_variable_36184.getter_length (SOURCE_FILE ("template_parser.galgas", 1340)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_quickSort (var_variable_36184, GALGAS_uint ((uint32_t) 0U), var_variable_36184.getter_length (SOURCE_FILE ("template_parser.galgas", 1341)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1341)), var_keys_35806, inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1341)) ;
      }
      var_variableValue_35709 = GALGAS_Tvalue::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1342)), GALGAS_double (0), GALGAS_string::makeEmptyString (), var_variable_36184, GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_parser.galgas", 1342)), function_dummyFunction (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1342)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1342))  COMMA_SOURCE_FILE ("template_parser.galgas", 1342)) ;
      {
      ioArgument_ioTemplateVariableMap.setter_setMTypeForKey (var_variableType_35685, var_variableName_35663.getter_string (SOURCE_FILE ("template_parser.galgas", 1344)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1344)) ;
      }
      {
      ioArgument_ioTemplateVariableMap.setter_setMValueForKey (var_variableValue_35709, var_variableName_35663.getter_string (SOURCE_FILE ("template_parser.galgas", 1345)), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1345)) ;
      }
    }
  }else if (kBoolFalse == test_1) {
    GALGAS_location location_3 (var_variableName_35663.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("list type expected")  COMMA_SOURCE_FILE ("template_parser.galgas", 1348)) ;
  }
  outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1350)) ;
  outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1351)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i22_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_sort) COMMA_SOURCE_FILE ("template_parser.galgas", 1322)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1322)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_by) COMMA_SOURCE_FILE ("template_parser.galgas", 1326)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1329)) ;
  nt_sorting_5F_order_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_parser_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_parser.galgas", 1333)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1333)) ;
      nt_sorting_5F_order_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i23_ (const GALGAS_string constinArgument_inPrefix,
                                                                                       const GALGAS_string constinArgument_inPath,
                                                                                       const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                       GALGAS_TfieldMap & ioArgument_ioTemplateVariableMap,
                                                                                       GALGAS_string & ioArgument_ioResultingString,
                                                                                       GALGAS_Tvalue & outArgument_returnedValue,
                                                                                       GALGAS_Ttype & outArgument_returnedType,
                                                                                       C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_returnedValue.drop () ; // Release 'out' argument
  outArgument_returnedType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_tab) COMMA_SOURCE_FILE ("template_parser.galgas", 1365)) ;
  GALGAS_Tvalue var_enumeratedValue_37207 ;
  GALGAS_Ttype var_expressionType_37238 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, ioArgument_ioTemplateVariableMap, var_enumeratedValue_37207, var_expressionType_37238, inCompiler) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expressionType_37238.objectCompare (GALGAS_Ttype::constructor_intType (SOURCE_FILE ("template_parser.galgas", 1373)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1374)), GALGAS_string ("tab should have an integer argument")  COMMA_SOURCE_FILE ("template_parser.galgas", 1374)) ;
    outArgument_returnedValue.drop () ; // Release error dropped variable
    outArgument_returnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_uint var_currentColumn_37413 = ioArgument_ioResultingString.getter_currentColumn (SOURCE_FILE ("template_parser.galgas", 1377)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_enumeratedValue_37207.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 1378)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1378)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_tabColumn_37521 = var_enumeratedValue_37207.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 1379)).getter_uint (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1379)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_tabColumn_37521.objectCompare (var_currentColumn_37413)).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioResultingString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_tabColumn_37521.substract_operation (var_currentColumn_37413, inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1383)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1383))  COMMA_SOURCE_FILE ("template_parser.galgas", 1381)), inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1381)) ;
      }
    }
    outArgument_returnedValue = function_valueWithVoid (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1388)) ;
    outArgument_returnedType = GALGAS_Ttype::constructor_unconstructedType (SOURCE_FILE ("template_parser.galgas", 1389)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_template_5F_instruction_i23_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_tab) COMMA_SOURCE_FILE ("template_parser.galgas", 1365)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_variable_i24_ (const GALGAS_string constinArgument_inPrefix,
                                                                        const GALGAS_string constinArgument_inPath,
                                                                        const GALGAS_string constinArgument_inTemplateDirectory,
                                                                        const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                        GALGAS_TvarPath & outArgument_path,
                                                                        C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_path.drop () ; // Release 'out' argument
  outArgument_path = GALGAS_TvarPath::constructor_emptyList (SOURCE_FILE ("template_parser.galgas", 1401)) ;
  GALGAS_lstring var_variableName_38152 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1402)) ;
  GALGAS_lstring var_key_38167 = function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1403)) ;
  GALGAS_lsint var_idx_38197 = GALGAS_lsint::constructor_new (GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1404)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1404))  COMMA_SOURCE_FILE ("template_parser.galgas", 1404)) ;
  switch (select_template_5F_parser_27 (inCompiler)) {
  case 1: {
    GALGAS_Tvalue var_keyValue_38265 ;
    GALGAS_Ttype var_keyType_38284 ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_parser.galgas", 1408)) ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_keyValue_38265, var_keyType_38284, inCompiler) ;
    switch (var_keyType_38284.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_stringType:
      {
        var_key_38167 = GALGAS_lstring::constructor_new (var_keyValue_38265.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 1412)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1412))  COMMA_SOURCE_FILE ("template_parser.galgas", 1412)) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_intType:
      {
        var_idx_38197 = GALGAS_lsint::constructor_new (var_keyValue_38265.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 1414)).getter_sint (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1414)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1414))  COMMA_SOURCE_FILE ("template_parser.galgas", 1414)) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_boolType:
    case GALGAS_Ttype::kEnum_floatType:
    case GALGAS_Ttype::kEnum_listType:
    case GALGAS_Ttype::kEnum_mapType:
    case GALGAS_Ttype::kEnum_structType:
    case GALGAS_Ttype::kEnum_enumType:
    case GALGAS_Ttype::kEnum_unconstructedType:
    case GALGAS_Ttype::kEnum_functionType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1416)), GALGAS_string ("map key must be a string, list index must be an unsigned integer")  COMMA_SOURCE_FILE ("template_parser.galgas", 1416)) ;
      }
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1418)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  outArgument_path.addAssign_operation (var_variableName_38152, var_key_38167, var_idx_38197  COMMA_SOURCE_FILE ("template_parser.galgas", 1420)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_parser_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 1423)) ;
      var_variableName_38152 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1423)) ;
      var_key_38167 = function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1424)) ;
      var_idx_38197 = GALGAS_lsint::constructor_new (GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1425)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1425))  COMMA_SOURCE_FILE ("template_parser.galgas", 1425)) ;
      switch (select_template_5F_parser_29 (inCompiler)) {
      case 1: {
        GALGAS_Tvalue var_keyValue_39001 ;
        GALGAS_Ttype var_keyType_39022 ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_parser.galgas", 1429)) ;
        nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_keyValue_39001, var_keyType_39022, inCompiler) ;
        switch (var_keyType_39022.enumValue ()) {
        case GALGAS_Ttype::kNotBuilt:
          break ;
        case GALGAS_Ttype::kEnum_stringType:
          {
            var_key_38167 = GALGAS_lstring::constructor_new (var_keyValue_39001.getter_mStringValue (SOURCE_FILE ("template_parser.galgas", 1433)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1433))  COMMA_SOURCE_FILE ("template_parser.galgas", 1433)) ;
          }
          break ;
        case GALGAS_Ttype::kEnum_intType:
          {
            var_idx_38197 = GALGAS_lsint::constructor_new (var_keyValue_39001.getter_mBigIntValue (SOURCE_FILE ("template_parser.galgas", 1435)).getter_sint (inCompiler COMMA_SOURCE_FILE ("template_parser.galgas", 1435)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1435))  COMMA_SOURCE_FILE ("template_parser.galgas", 1435)) ;
          }
          break ;
        case GALGAS_Ttype::kEnum_boolType:
        case GALGAS_Ttype::kEnum_floatType:
        case GALGAS_Ttype::kEnum_listType:
        case GALGAS_Ttype::kEnum_mapType:
        case GALGAS_Ttype::kEnum_structType:
        case GALGAS_Ttype::kEnum_enumType:
        case GALGAS_Ttype::kEnum_unconstructedType:
        case GALGAS_Ttype::kEnum_functionType:
          {
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_parser.galgas", 1437)), GALGAS_string ("map key must be a string, list index must be an unsigned integer")  COMMA_SOURCE_FILE ("template_parser.galgas", 1437)) ;
          }
          break ;
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1439)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      outArgument_path.addAssign_operation (var_variableName_38152, var_key_38167, var_idx_38197  COMMA_SOURCE_FILE ("template_parser.galgas", 1441)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_parser::rule_template_5F_parser_variable_i24_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1402)) ;
  switch (select_template_5F_parser_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_parser.galgas", 1408)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1418)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_parser_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A__3A_) COMMA_SOURCE_FILE ("template_parser.galgas", 1423)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_parser.galgas", 1423)) ;
      switch (select_template_5F_parser_29 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_parser.galgas", 1429)) ;
        nt_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_parser.galgas", 1439)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}



//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_expression_i0_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                     const GALGAS_string constinArgument_inPath,
                                                                                                     const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                     const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                     GALGAS_Tvalue & outArgument_outValue,
                                                                                                     GALGAS_Ttype & outArgument_outResultType,
                                                                                                     C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  nt_relation_5F_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, outArgument_outValue, outArgument_outResultType, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__7C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 112)) ;
      GALGAS_Tvalue var_leftOperand_3104 = outArgument_outValue ;
      GALGAS_Tvalue var_rightOperand_3140 ;
      GALGAS_Ttype var_firstOperandType_3168 = outArgument_outResultType ;
      GALGAS_Ttype var_secondOperandType_3213 ;
      nt_relation_5F_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightOperand_3140, var_secondOperandType_3213, inCompiler) ;
      outArgument_outValue.mAttribute_mBigIntValue = var_leftOperand_3104.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 124)).operator_or (var_rightOperand_3140.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 124)) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 124)) ;
      {
      routine_matchOrOperatorForTemplate (var_firstOperandType_3168, var_secondOperandType_3213, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 125)) ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 131)) ;
      GALGAS_Tvalue var_leftOperand_3590 = outArgument_outValue ;
      GALGAS_Tvalue var_rightOperand_3626 ;
      GALGAS_Ttype var_firstOperandType_3654 = outArgument_outResultType ;
      GALGAS_Ttype var_secondOperandType_3699 ;
      nt_relation_5F_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightOperand_3626, var_secondOperandType_3699, inCompiler) ;
      outArgument_outValue.mAttribute_mBigIntValue = var_leftOperand_3590.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 143)).operator_xor (var_rightOperand_3626.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 143)) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 143)) ;
      {
      routine_matchXorOperatorForTemplate (var_firstOperandType_3654, var_secondOperandType_3699, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 144)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_expression_i0_parse (C_Lexique_template_5F_scanner * inCompiler) {
  nt_relation_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__7C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 112)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 131)) ;
      nt_relation_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_relation_5F_term_i1_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                           const GALGAS_string constinArgument_inPath,
                                                                                                           const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                           const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                           GALGAS_Tvalue & outArgument_outValue,
                                                                                                           GALGAS_Ttype & outArgument_outResultType,
                                                                                                           C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, outArgument_outValue, outArgument_outResultType, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__26_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 174)) ;
      GALGAS_Tvalue var_leftOperand_4804 = outArgument_outValue ;
      GALGAS_Tvalue var_rightOperand_4840 ;
      GALGAS_Ttype var_firstOperandType_4868 = outArgument_outResultType ;
      GALGAS_Ttype var_secondOperandType_4913 ;
      nt_relation_5F_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightOperand_4840, var_secondOperandType_4913, inCompiler) ;
      outArgument_outValue.mAttribute_mBigIntValue = var_leftOperand_4804.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 186)).operator_and (var_rightOperand_4840.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 186)) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 186)) ;
      {
      routine_matchAndOperatorForTemplate (var_firstOperandType_4868, var_secondOperandType_4913, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 187)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_relation_5F_term_i1_parse (C_Lexique_template_5F_scanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__26_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 174)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_relation_5F_factor_i2_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                             const GALGAS_string constinArgument_inPath,
                                                                                                             const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                             const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                             GALGAS_Tvalue & outArgument_outValue,
                                                                                                             GALGAS_Ttype & outArgument_outResultType,
                                                                                                             C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, outArgument_outValue, outArgument_outResultType, inCompiler) ;
  switch (select_template_5F_expression_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 217)) ;
    GALGAS_Tvalue var_leftExpression_6024 = outArgument_outValue ;
    GALGAS_Ttype var_leftType_6055 = outArgument_outResultType ;
    GALGAS_Tvalue var_rightExpression_6099 ;
    GALGAS_Ttype var_rightType_6120 ;
    nt_simple_5F_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_6099, var_rightType_6120, inCompiler) ;
    {
    routine_comparison_5F_types_5F_checkForTemplate (var_leftType_6055, var_rightType_6120, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 229)) ;
    }
    GALGAS_bool var_result_6341 ;
    switch (var_leftType_6055.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_boolType:
      {
        var_result_6341 = GALGAS_bool (kIsEqual, var_leftExpression_6024.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 233)).objectCompare (var_rightExpression_6099.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 233)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_intType:
      {
        var_result_6341 = GALGAS_bool (kIsEqual, var_leftExpression_6024.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 235)).objectCompare (var_rightExpression_6099.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 235)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_floatType:
      {
        var_result_6341 = GALGAS_bool (kIsEqual, var_leftExpression_6024.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 237)).objectCompare (var_rightExpression_6099.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 237)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_stringType:
      {
        var_result_6341 = GALGAS_bool (kIsEqual, var_leftExpression_6024.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 239)).objectCompare (var_rightExpression_6099.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 239)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_enumType:
      {
        var_result_6341 = GALGAS_bool (kIsEqual, var_leftExpression_6024.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 241)).objectCompare (var_rightExpression_6099.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 241)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_listType:
    case GALGAS_Ttype::kEnum_structType:
    case GALGAS_Ttype::kEnum_mapType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 243)), GALGAS_string ("lists, structs and maps may not be compared")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 243)) ;
        var_result_6341.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_Ttype::kEnum_unconstructedType:
    case GALGAS_Ttype::kEnum_functionType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 245)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 245)) ;
        var_result_6341.drop () ; // Release error dropped variable
      }
      break ;
    }
    outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 247)) ;
    GALGAS_bigint temp_0 ;
    const enumGalgasBool test_1 = var_result_6341.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 248)) ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 248)) ;
    }
    outArgument_outValue.mAttribute_mBigIntValue = temp_0 ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 250)) ;
    GALGAS_Tvalue var_leftExpression_7248 = outArgument_outValue ;
    GALGAS_Ttype var_leftType_7279 = outArgument_outResultType ;
    GALGAS_Tvalue var_rightExpression_7323 ;
    GALGAS_Ttype var_rightType_7344 ;
    nt_simple_5F_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_7323, var_rightType_7344, inCompiler) ;
    {
    routine_comparison_5F_types_5F_checkForTemplate (var_leftType_7279, var_rightType_7344, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 262)) ;
    }
    GALGAS_bool var_result_7565 ;
    switch (var_leftType_7279.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_boolType:
      {
        var_result_7565 = GALGAS_bool (kIsNotEqual, var_leftExpression_7248.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 266)).objectCompare (var_rightExpression_7323.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 266)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_intType:
      {
        var_result_7565 = GALGAS_bool (kIsNotEqual, var_leftExpression_7248.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 268)).objectCompare (var_rightExpression_7323.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 268)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_floatType:
      {
        var_result_7565 = GALGAS_bool (kIsNotEqual, var_leftExpression_7248.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 270)).objectCompare (var_rightExpression_7323.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 270)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_stringType:
      {
        var_result_7565 = GALGAS_bool (kIsNotEqual, var_leftExpression_7248.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 272)).objectCompare (var_rightExpression_7323.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 272)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_enumType:
      {
        var_result_7565 = GALGAS_bool (kIsNotEqual, var_leftExpression_7248.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 274)).objectCompare (var_rightExpression_7323.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 274)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_listType:
    case GALGAS_Ttype::kEnum_structType:
    case GALGAS_Ttype::kEnum_mapType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 276)), GALGAS_string ("lists, structs and maps may not be compared")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 276)) ;
        var_result_7565.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_Ttype::kEnum_unconstructedType:
    case GALGAS_Ttype::kEnum_functionType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 278)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 278)) ;
        var_result_7565.drop () ; // Release error dropped variable
      }
      break ;
    }
    outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 280)) ;
    GALGAS_bigint temp_2 ;
    const enumGalgasBool test_3 = var_result_7565.boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 281)) ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 281)) ;
    }
    outArgument_outValue.mAttribute_mBigIntValue = temp_2 ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 283)) ;
    GALGAS_Tvalue var_leftExpression_8471 = outArgument_outValue ;
    GALGAS_Ttype var_leftType_8502 = outArgument_outResultType ;
    GALGAS_Tvalue var_rightExpression_8546 ;
    GALGAS_Ttype var_rightType_8567 ;
    nt_simple_5F_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_8546, var_rightType_8567, inCompiler) ;
    {
    routine_magnitude_5F_comparison_5F_types_5F_checkForTemplate (var_leftType_8502, var_rightType_8567, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 295)) ;
    }
    GALGAS_bool var_result_8798 ;
    switch (var_leftType_8502.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_boolType:
      {
        var_result_8798 = GALGAS_bool (kIsInfOrEqual, var_leftExpression_8471.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 299)).objectCompare (var_rightExpression_8546.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 299)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_intType:
      {
        var_result_8798 = GALGAS_bool (kIsInfOrEqual, var_leftExpression_8471.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 301)).objectCompare (var_rightExpression_8546.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 301)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_floatType:
      {
        var_result_8798 = GALGAS_bool (kIsInfOrEqual, var_leftExpression_8471.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 303)).objectCompare (var_rightExpression_8546.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 303)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_stringType:
    case GALGAS_Ttype::kEnum_enumType:
    case GALGAS_Ttype::kEnum_listType:
    case GALGAS_Ttype::kEnum_structType:
    case GALGAS_Ttype::kEnum_mapType:
      {
        var_result_8798 = GALGAS_bool (false) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_unconstructedType:
    case GALGAS_Ttype::kEnum_functionType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 307)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 307)) ;
        var_result_8798.drop () ; // Release error dropped variable
      }
      break ;
    }
    outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 309)) ;
    GALGAS_bigint temp_4 ;
    const enumGalgasBool test_5 = var_result_8798.boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 310)) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 310)) ;
    }
    outArgument_outValue.mAttribute_mBigIntValue = temp_4 ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 312)) ;
    GALGAS_Tvalue var_leftExpression_9466 = outArgument_outValue ;
    GALGAS_Ttype var_leftType_9497 = outArgument_outResultType ;
    GALGAS_Tvalue var_rightExpression_9541 ;
    GALGAS_Ttype var_rightType_9562 ;
    nt_simple_5F_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_9541, var_rightType_9562, inCompiler) ;
    {
    routine_magnitude_5F_comparison_5F_types_5F_checkForTemplate (var_leftType_9497, var_rightType_9562, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 324)) ;
    }
    GALGAS_bool var_result_9793 ;
    switch (var_leftType_9497.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_boolType:
      {
        var_result_9793 = GALGAS_bool (kIsSupOrEqual, var_leftExpression_9466.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 328)).objectCompare (var_rightExpression_9541.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 328)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_intType:
      {
        var_result_9793 = GALGAS_bool (kIsSupOrEqual, var_leftExpression_9466.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 330)).objectCompare (var_rightExpression_9541.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 330)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_floatType:
      {
        var_result_9793 = GALGAS_bool (kIsSupOrEqual, var_leftExpression_9466.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 332)).objectCompare (var_rightExpression_9541.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 332)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_stringType:
    case GALGAS_Ttype::kEnum_enumType:
    case GALGAS_Ttype::kEnum_listType:
    case GALGAS_Ttype::kEnum_structType:
    case GALGAS_Ttype::kEnum_mapType:
      {
        var_result_9793 = GALGAS_bool (false) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_unconstructedType:
    case GALGAS_Ttype::kEnum_functionType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 336)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 336)) ;
        var_result_9793.drop () ; // Release error dropped variable
      }
      break ;
    }
    outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 338)) ;
    GALGAS_bigint temp_6 ;
    const enumGalgasBool test_7 = var_result_9793.boolEnum () ;
    if (kBoolTrue == test_7) {
      temp_6 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 339)) ;
    }else if (kBoolFalse == test_7) {
      temp_6 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 339)) ;
    }
    outArgument_outValue.mAttribute_mBigIntValue = temp_6 ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 341)) ;
    GALGAS_Tvalue var_leftExpression_10460 = outArgument_outValue ;
    GALGAS_Ttype var_leftType_10491 = outArgument_outResultType ;
    GALGAS_Tvalue var_rightExpression_10535 ;
    GALGAS_Ttype var_rightType_10556 ;
    nt_simple_5F_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_10535, var_rightType_10556, inCompiler) ;
    {
    routine_magnitude_5F_comparison_5F_types_5F_checkForTemplate (var_leftType_10491, var_rightType_10556, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 353)) ;
    }
    GALGAS_bool var_result_10787 ;
    switch (var_leftType_10491.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_boolType:
      {
        var_result_10787 = GALGAS_bool (kIsStrictSup, var_leftExpression_10460.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 357)).objectCompare (var_rightExpression_10535.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 357)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_intType:
      {
        var_result_10787 = GALGAS_bool (kIsStrictSup, var_leftExpression_10460.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 359)).objectCompare (var_rightExpression_10535.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 359)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_floatType:
      {
        var_result_10787 = GALGAS_bool (kIsStrictSup, var_leftExpression_10460.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 361)).objectCompare (var_rightExpression_10535.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 361)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_stringType:
    case GALGAS_Ttype::kEnum_enumType:
    case GALGAS_Ttype::kEnum_listType:
    case GALGAS_Ttype::kEnum_structType:
    case GALGAS_Ttype::kEnum_mapType:
      {
        var_result_10787 = GALGAS_bool (false) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_unconstructedType:
    case GALGAS_Ttype::kEnum_functionType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 365)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 365)) ;
        var_result_10787.drop () ; // Release error dropped variable
      }
      break ;
    }
    outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 367)) ;
    GALGAS_bigint temp_8 ;
    const enumGalgasBool test_9 = var_result_10787.boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 368)) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 368)) ;
    }
    outArgument_outValue.mAttribute_mBigIntValue = temp_8 ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 370)) ;
    GALGAS_Tvalue var_leftExpression_11451 = outArgument_outValue ;
    GALGAS_Ttype var_leftType_11482 = outArgument_outResultType ;
    GALGAS_Tvalue var_rightExpression_11526 ;
    GALGAS_Ttype var_rightType_11547 ;
    nt_simple_5F_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_11526, var_rightType_11547, inCompiler) ;
    {
    routine_magnitude_5F_comparison_5F_types_5F_checkForTemplate (var_leftType_11482, var_rightType_11547, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 382)) ;
    }
    GALGAS_bool var_result_11778 ;
    switch (var_leftType_11482.enumValue ()) {
    case GALGAS_Ttype::kNotBuilt:
      break ;
    case GALGAS_Ttype::kEnum_boolType:
      {
        var_result_11778 = GALGAS_bool (kIsStrictInf, var_leftExpression_11451.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 386)).objectCompare (var_rightExpression_11526.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 386)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_intType:
      {
        var_result_11778 = GALGAS_bool (kIsStrictInf, var_leftExpression_11451.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 388)).objectCompare (var_rightExpression_11526.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 388)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_floatType:
      {
        var_result_11778 = GALGAS_bool (kIsStrictInf, var_leftExpression_11451.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 390)).objectCompare (var_rightExpression_11526.getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 390)))) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_stringType:
    case GALGAS_Ttype::kEnum_enumType:
    case GALGAS_Ttype::kEnum_listType:
    case GALGAS_Ttype::kEnum_structType:
    case GALGAS_Ttype::kEnum_mapType:
      {
        var_result_11778 = GALGAS_bool (false) ;
      }
      break ;
    case GALGAS_Ttype::kEnum_unconstructedType:
    case GALGAS_Ttype::kEnum_functionType:
      {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 394)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 394)) ;
        var_result_11778.drop () ; // Release error dropped variable
      }
      break ;
    }
    outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 396)) ;
    GALGAS_bigint temp_10 ;
    const enumGalgasBool test_11 = var_result_11778.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 397)) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 397)) ;
    }
    outArgument_outValue.mAttribute_mBigIntValue = temp_10 ;
  } break ;
  default:
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_relation_5F_factor_i2_parse (C_Lexique_template_5F_scanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  switch (select_template_5F_expression_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 217)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 250)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 283)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 312)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 341)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 370)) ;
    nt_simple_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_simple_5F_expression_i3_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                               const GALGAS_string constinArgument_inPath,
                                                                                                               const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                               const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                               GALGAS_Tvalue & outArgument_outValue,
                                                                                                               GALGAS_Ttype & outArgument_outResultType,
                                                                                                               C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  nt_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, outArgument_outValue, outArgument_outResultType, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 423)) ;
      GALGAS_Tvalue var_leftExpression_13167 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_13198 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_13242 ;
      GALGAS_Ttype var_rightType_13263 ;
      nt_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_13242, var_rightType_13263, inCompiler) ;
      {
      routine_left_5F_shift_5F_types_5F_checkForTemplate (var_leftType_13198, var_rightType_13263, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 435)) ;
      }
      outArgument_outValue.mAttribute_mBigIntValue = var_leftExpression_13167.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 436)).left_shift_operation (var_rightExpression_13242.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 436)).getter_uint (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 436)) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 436)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 438)) ;
      GALGAS_Tvalue var_leftExpression_13614 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_13645 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_13689 ;
      GALGAS_Ttype var_rightType_13710 ;
      nt_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_13689, var_rightType_13710, inCompiler) ;
      {
      routine_right_5F_shift_5F_types_5F_checkForTemplate (var_leftType_13645, var_rightType_13710, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 450)) ;
      }
      outArgument_outValue.mAttribute_mBigIntValue = var_leftExpression_13614.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 451)).right_shift_operation (var_rightExpression_13689.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 451)).getter_uint (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 451)) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 451)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 453)) ;
      GALGAS_Tvalue var_leftExpression_14061 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_14092 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_14136 ;
      GALGAS_Ttype var_rightType_14157 ;
      nt_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_14136, var_rightType_14157, inCompiler) ;
      {
      routine_addition_5F_types_5F_checkForTemplate (var_leftType_14092, var_rightType_14157, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 465)) ;
      }
      outArgument_outValue.mAttribute_mBigIntValue = var_leftExpression_14061.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 466)).add_operation (var_rightExpression_14136.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 466)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 468)) ;
      GALGAS_Tvalue var_leftExpression_14497 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_14528 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_14572 ;
      GALGAS_Ttype var_rightType_14593 ;
      nt_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_14572, var_rightType_14593, inCompiler) ;
      {
      routine_concatenation_5F_types_5F_checkForTemplate (var_leftType_14528, var_rightType_14593, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 480)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, outArgument_outResultType.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_expression_parser.galgas", 481)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outValue.mAttribute_mStringValue = var_leftExpression_14497.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 482)).add_operation (var_rightExpression_14572.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 482)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, outArgument_outResultType.objectCompare (GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_expression_parser.galgas", 483)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          outArgument_outValue.mAttribute_mMapListValue = var_leftExpression_14497.getter_mMapListValue (SOURCE_FILE ("template_expression_parser.galgas", 484)).add_operation (var_rightExpression_14572.getter_mMapListValue (SOURCE_FILE ("template_expression_parser.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 484)) ;
        }
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 487)) ;
      GALGAS_Tvalue var_leftExpression_15140 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_15171 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_15215 ;
      GALGAS_Ttype var_rightType_15236 ;
      nt_term_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_15215, var_rightType_15236, inCompiler) ;
      {
      routine_addition_5F_types_5F_checkForTemplate (var_leftType_15171, var_rightType_15236, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 499)) ;
      }
      outArgument_outValue.mAttribute_mBigIntValue = var_leftExpression_15140.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 500)).substract_operation (var_rightExpression_15215.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 500)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_simple_5F_expression_i3_parse (C_Lexique_template_5F_scanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 423)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 438)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 453)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 468)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 487)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_term_i4_ (const GALGAS_string constinArgument_inPrefix,
                                                                                               const GALGAS_string constinArgument_inPath,
                                                                                               const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                               const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                               GALGAS_Tvalue & outArgument_outValue,
                                                                                               GALGAS_Ttype & outArgument_outResultType,
                                                                                               C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, outArgument_outValue, outArgument_outResultType, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2A_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 526)) ;
      GALGAS_Tvalue var_leftExpression_16285 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_16316 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_16360 ;
      GALGAS_Ttype var_rightType_16381 ;
      nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_16360, var_rightType_16381, inCompiler) ;
      {
      routine_multiply_5F_types_5F_checkForTemplate (var_leftType_16316, var_rightType_16381, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 538)) ;
      }
      outArgument_outValue.mAttribute_mBigIntValue = var_leftExpression_16285.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 539)).multiply_operation (var_rightExpression_16360.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 539)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2F_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 541)) ;
      GALGAS_Tvalue var_leftExpression_16723 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_16754 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_16798 ;
      GALGAS_Ttype var_rightType_16819 ;
      nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_16798, var_rightType_16819, inCompiler) ;
      {
      routine_divide_5F_types_5F_checkForTemplate (var_leftType_16754, var_rightType_16819, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 553)) ;
      }
      outArgument_outValue.mAttribute_mBigIntValue = var_leftExpression_16723.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 554)).divide_operation (var_rightExpression_16798.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 554)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_mod) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 556)) ;
      GALGAS_Tvalue var_leftExpression_17161 = outArgument_outValue ;
      GALGAS_Ttype var_leftType_17192 = outArgument_outResultType ;
      GALGAS_Tvalue var_rightExpression_17236 ;
      GALGAS_Ttype var_rightType_17257 ;
      nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_rightExpression_17236, var_rightType_17257, inCompiler) ;
      {
      routine_modulo_5F_types_5F_checkForTemplate (var_leftType_17192, var_rightType_17257, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 568)) ;
      }
      outArgument_outValue.mAttribute_mBigIntValue = var_leftExpression_17161.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 569)).modulo_operation (var_rightExpression_17236.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 569)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_term_i4_parse (C_Lexique_template_5F_scanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_template_5F_expression_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2A_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 526)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2F_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 541)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_mod) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 556)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i5_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                 const GALGAS_string constinArgument_inPath,
                                                                                                 const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                 const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                 GALGAS_Tvalue & outArgument_outValue,
                                                                                                 GALGAS_Ttype & outArgument_outResultType,
                                                                                                 C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 589)) ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, outArgument_outValue, outArgument_outResultType, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 597)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i5_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 589)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 597)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i6_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                 const GALGAS_string constinArgument_inPath,
                                                                                                 const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                 const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                 GALGAS_Tvalue & outArgument_outValue,
                                                                                                 GALGAS_Ttype & outArgument_outResultType,
                                                                                                 C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 613)) ;
  GALGAS_Tvalue var_expression_18954 ;
  GALGAS_Ttype var_operandType_18975 ;
  nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_expression_18954, var_operandType_18975, inCompiler) ;
  outArgument_outValue = function_valueWithUnsigned (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 623)).substract_operation (var_expression_18954.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 623)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 623)) ;
  {
  routine_checkNotOperatorForTemplate (var_operandType_18975, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 624)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i6_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 613)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i7_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                 const GALGAS_string constinArgument_inPath,
                                                                                                 const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                 const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                 GALGAS_Tvalue & outArgument_outValue,
                                                                                                 GALGAS_Ttype & outArgument_outResultType,
                                                                                                 C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 640)) ;
  GALGAS_Tvalue var_value_19835 ;
  GALGAS_Ttype var_operandType_19856 ;
  nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_value_19835, var_operandType_19856, inCompiler) ;
  outArgument_outValue = function_valueWithSigned (var_value_19835.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 650)).operator_tilde (SOURCE_FILE ("template_expression_parser.galgas", 650)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 650)) ;
  {
  routine_checkBitComplementOperatorForTemplate (var_operandType_19856, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 651)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i7_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 640)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i8_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                 const GALGAS_string constinArgument_inPath,
                                                                                                 const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                 const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                 GALGAS_Tvalue & outArgument_outValue,
                                                                                                 GALGAS_Ttype & outArgument_outResultType,
                                                                                                 C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 667)) ;
  GALGAS_Tvalue var_value_20710 ;
  GALGAS_Ttype var_operandType_20731 ;
  nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_value_20710, var_operandType_20731, inCompiler) ;
  outArgument_outValue = function_valueWithSigned (var_value_20710.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 677)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 677)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 677)) ;
  {
  routine_checkBitComplementOperatorForTemplate (var_operandType_20731, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 678)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i8_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 667)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i9_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                 const GALGAS_string constinArgument_inPath,
                                                                                                 const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                 const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                 GALGAS_Tvalue & outArgument_outValue,
                                                                                                 GALGAS_Ttype & outArgument_outResultType,
                                                                                                 C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 694)) ;
  GALGAS_Tvalue var_value_21585 ;
  GALGAS_Ttype var_operandType_21606 ;
  nt_factor_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_value_21585, var_operandType_21606, inCompiler) ;
  outArgument_outValue = function_valueWithSigned (var_value_21585.getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 704)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 704)) ;
  {
  routine_checkBitComplementOperatorForTemplate (var_operandType_21606, outArgument_outResultType, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 705)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i9_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 694)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i10_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_yes) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 721)) ;
  outArgument_outValue = function_valueWithUnsigned (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 722)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 722)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 723)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i10_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_yes) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 721)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i11_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_no) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 739)) ;
  outArgument_outValue = function_valueWithUnsigned (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 740)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 740)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 741)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i11_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_no) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 739)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i12_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_23897 ;
  var_literalInt_23897 = inCompiler->synthetizedAttribute_intValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 758)) ;
  outArgument_outValue = function_valueWithSigned (var_literalInt_23897.getter_bigint (SOURCE_FILE ("template_expression_parser.galgas", 759)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 759)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_intType (SOURCE_FILE ("template_expression_parser.galgas", 760)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i12_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 758)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i13_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_lstring var_literalString_24693 = inCompiler->synthetizedAttribute_a_5F_string () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 776)) ;
  outArgument_outValue = function_valueWithString (var_literalString_24693.getter_string (SOURCE_FILE ("template_expression_parser.galgas", 777)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 777)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_expression_parser.galgas", 778)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i13_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 776)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i14_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                  const GALGAS_string constinArgument_inPath,
                                                                                                  const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                  const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 795)) ;
  GALGAS_Tvalue var_expressionValue_25496 ;
  GALGAS_Ttype var_expressionType_25520 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_expressionValue_25496, var_expressionType_25520, inCompiler) ;
  GALGAS_lstring var_templateMethodName_25696 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 807)) ;
  GALGAS_TexpressionList var_expressionList_25718 = GALGAS_TexpressionList::constructor_emptyList (SOURCE_FILE ("template_expression_parser.galgas", 809)) ;
  switch (select_template_5F_expression_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 812)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_Tvalue var_expression_25806 ;
      GALGAS_Ttype var_resultType_25830 ;
      nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_expression_25806, var_resultType_25830, inCompiler) ;
      var_expressionList_25718.addAssign_operation (var_expression_25806, var_resultType_25830  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 823)) ;
      switch (select_template_5F_expression_5F_parser_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 825)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 829)) ;
  {
  routine_templateMethodInvocation (var_expressionType_25520, var_expressionValue_25496, var_templateMethodName_25696, var_expressionList_25718, outArgument_outResultType, outArgument_outValue, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 831)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i14_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 795)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 807)) ;
  switch (select_template_5F_expression_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 812)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_parse (inCompiler) ;
      switch (select_template_5F_expression_5F_parser_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 825)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 829)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i15_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                  const GALGAS_string constinArgument_inPath,
                                                                                                  const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                  const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_TvarPath var_path_26490 ;
  nt_variable_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_path_26490, inCompiler) ;
  switch (select_template_5F_expression_5F_parser_7 (inCompiler)) {
  case 1: {
    {
    GALGAS_location joker_26638 ; // Joker input parameter
    routine_searchField (var_path_26490, constinArgument_inVariableMap, outArgument_outResultType, outArgument_outValue, joker_26638, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 853)) ;
    }
  } break ;
  case 2: {
    GALGAS_lstring var_functionOrVariableName_26681 ;
    GALGAS_lstring joker_26723 ; // Joker input parameter
    GALGAS_lsint joker_26726 ; // Joker input parameter
    var_path_26490.method_first (var_functionOrVariableName_26681, joker_26723, joker_26726, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 856)) ;
    GALGAS_TexpressionList var_actualArgumentList_26847 = GALGAS_TexpressionList::constructor_emptyList (SOURCE_FILE ("template_expression_parser.galgas", 859)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 860)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_Tvalue var_expression_26921 ;
      GALGAS_Ttype var_resultType_26945 ;
      nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_expression_26921, var_resultType_26945, inCompiler) ;
      var_actualArgumentList_26847.addAssign_operation (var_expression_26921, var_resultType_26945  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 871)) ;
      switch (select_template_5F_expression_5F_parser_8 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 873)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 875)) ;
    const enumGalgasBool test_1 = GALGAS_function::constructor_isFunctionDefined (var_functionOrVariableName_26681.getter_string (SOURCE_FILE ("template_expression_parser.galgas", 878))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 878)).operator_not (SOURCE_FILE ("template_expression_parser.galgas", 878)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_Tvalue var_fct_27468 ;
      GALGAS_Ttype var_type_27486 ;
      constinArgument_inVariableMap.method_searchKey (var_functionOrVariableName_26681, var_type_27486, var_fct_27468, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 883)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_actualArgumentList_26847.getter_length (SOURCE_FILE ("template_expression_parser.galgas", 884)).objectCompare (var_fct_27468.getter_mFunctionValue (SOURCE_FILE ("template_expression_parser.galgas", 884)).getter_args (SOURCE_FILE ("template_expression_parser.galgas", 884)).getter_length (SOURCE_FILE ("template_expression_parser.galgas", 884)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 885)), GALGAS_string ("incorrect number of arguments")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 885)) ;
        outArgument_outValue.drop () ; // Release error dropped variable
        outArgument_outResultType.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        GALGAS_TfieldMap var_locals_27822 = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_expression_parser.galgas", 888)) ;
        cEnumerator_TexpressionList enumerator_27952 (var_actualArgumentList_26847, kEnumeration_up) ;
        cEnumerator_lstringlist enumerator_27999 (var_fct_27468.getter_mFunctionValue (SOURCE_FILE ("template_expression_parser.galgas", 890)).getter_args (SOURCE_FILE ("template_expression_parser.galgas", 890)), kEnumeration_up) ;
        while (enumerator_27952.hasCurrentObject () && enumerator_27999.hasCurrentObject ()) {
          {
          var_locals_27822.setter_insertKey (enumerator_27999.current_mValue (HERE), enumerator_27952.current_mType (HERE), enumerator_27952.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 891)) ;
          }
          enumerator_27952.gotoNextObject () ;
          enumerator_27999.gotoNextObject () ;
        }
        GALGAS_string var_result_28114 = GALGAS_string::makeEmptyString () ;
        outArgument_outValue.drop () ;
        outArgument_outResultType.drop () ;
        cGrammar_template_5F_grammar::_performSourceStringParsing_ (inCompiler, var_fct_27468.getter_mFunctionValue (SOURCE_FILE ("template_expression_parser.galgas", 895)).getter_content (SOURCE_FILE ("template_expression_parser.galgas", 895)), GALGAS_string::makeEmptyString (), constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, var_locals_27822, var_result_28114, GALGAS_bool (false), outArgument_outValue, outArgument_outResultType  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 895)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_function var_f_28540 ;
      var_f_28540 = GALGAS_function::constructor_functionWithName (var_functionOrVariableName_26681.getter_string (SOURCE_FILE ("template_expression_parser.galgas", 901))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 901)) ;
      GALGAS_objectlist var_actualArgumentObjectList_28676 = GALGAS_objectlist::constructor_emptyList (SOURCE_FILE ("template_expression_parser.galgas", 903)) ;
      GALGAS_typelist var_formalParameterList_28741 = var_f_28540.getter_formalParameterTypeList (SOURCE_FILE ("template_expression_parser.galgas", 904)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_formalParameterList_28741.getter_length (SOURCE_FILE ("template_expression_parser.galgas", 905)).objectCompare (var_actualArgumentList_26847.getter_length (SOURCE_FILE ("template_expression_parser.galgas", 905)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_4 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_actualArgumentList_26847.getter_length (SOURCE_FILE ("template_expression_parser.galgas", 908)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_formalParameterList_28741.getter_length (SOURCE_FILE ("template_expression_parser.galgas", 911)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (var_functionOrVariableName_26681.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("this function is invoked with ").add_operation (var_actualArgumentList_26847.getter_length (SOURCE_FILE ("template_expression_parser.galgas", 907)).getter_string (SOURCE_FILE ("template_expression_parser.galgas", 907)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 906)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 907)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 908)).add_operation (GALGAS_string (", but requires "), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 908)).add_operation (var_formalParameterList_28741.getter_length (SOURCE_FILE ("template_expression_parser.galgas", 910)).getter_string (SOURCE_FILE ("template_expression_parser.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 909)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 910)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 911))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 906)) ;
        outArgument_outValue.drop () ; // Release error dropped variable
        outArgument_outResultType.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        GALGAS_uint var_idx_29266 = GALGAS_uint ((uint32_t) 1U) ;
        cEnumerator_typelist enumerator_29317 (var_formalParameterList_28741, kEnumeration_up) ;
        cEnumerator_TexpressionList enumerator_29352 (var_actualArgumentList_26847, kEnumeration_up) ;
        while (enumerator_29317.hasCurrentObject () && enumerator_29352.hasCurrentObject ()) {
          switch (enumerator_29352.current_mType (HERE).enumValue ()) {
          case GALGAS_Ttype::kNotBuilt:
            break ;
          case GALGAS_Ttype::kEnum_boolType:
            {
              const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_29317.current_mValue (HERE).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bool))).boolEnum () ;
              if (kBoolTrue == test_9) {
                {
                routine_typeError (var_functionOrVariableName_26681, enumerator_29317.current_mValue (HERE), GALGAS_string ("boolean"), var_idx_29266, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 919)) ;
                }
              }
              GALGAS_bool temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_29352.current_mValue (HERE).getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 921)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 921)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_bool (false) ;
              }else if (kBoolFalse == test_11) {
                temp_10 = GALGAS_bool (true) ;
              }
              var_actualArgumentObjectList_28676.addAssign_operation (temp_10.getter_object (SOURCE_FILE ("template_expression_parser.galgas", 921))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 921)) ;
            }
            break ;
          case GALGAS_Ttype::kEnum_intType:
            {
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_29317.current_mValue (HERE).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_sint_36__34_))).boolEnum () ;
              if (kBoolTrue == test_12) {
                {
                routine_typeError (var_functionOrVariableName_26681, enumerator_29317.current_mValue (HERE), GALGAS_string ("unsigned"), var_idx_29266, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 924)) ;
                }
              }
              var_actualArgumentObjectList_28676.addAssign_operation (enumerator_29352.current_mValue (HERE).getter_mBigIntValue (SOURCE_FILE ("template_expression_parser.galgas", 926)).getter_object (SOURCE_FILE ("template_expression_parser.galgas", 926))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 926)) ;
            }
            break ;
          case GALGAS_Ttype::kEnum_floatType:
            {
              const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_29317.current_mValue (HERE).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_double))).boolEnum () ;
              if (kBoolTrue == test_13) {
                {
                routine_typeError (var_functionOrVariableName_26681, enumerator_29317.current_mValue (HERE), GALGAS_string ("float"), var_idx_29266, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 929)) ;
                }
              }
              var_actualArgumentObjectList_28676.addAssign_operation (enumerator_29352.current_mValue (HERE).getter_mFloatValue (SOURCE_FILE ("template_expression_parser.galgas", 931)).getter_object (SOURCE_FILE ("template_expression_parser.galgas", 931))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 931)) ;
            }
            break ;
          case GALGAS_Ttype::kEnum_stringType:
            {
              const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_29317.current_mValue (HERE).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_string))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                routine_typeError (var_functionOrVariableName_26681, enumerator_29317.current_mValue (HERE), GALGAS_string ("string"), var_idx_29266, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 934)) ;
                }
              }
            }
            break ;
          case GALGAS_Ttype::kEnum_enumType:
            {
              const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_29317.current_mValue (HERE).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_string))).boolEnum () ;
              if (kBoolTrue == test_15) {
                {
                routine_typeError (var_functionOrVariableName_26681, enumerator_29317.current_mValue (HERE), GALGAS_string ("enum"), var_idx_29266, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 938)) ;
                }
              }
              var_actualArgumentObjectList_28676.addAssign_operation (enumerator_29352.current_mValue (HERE).getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 940)).getter_object (SOURCE_FILE ("template_expression_parser.galgas", 940))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 940)) ;
            }
            break ;
          case GALGAS_Ttype::kEnum_listType:
          case GALGAS_Ttype::kEnum_structType:
          case GALGAS_Ttype::kEnum_mapType:
            {
              {
              routine_typeError (var_functionOrVariableName_26681, enumerator_29317.current_mValue (HERE), GALGAS_string ("string"), var_idx_29266, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 942)) ;
              }
            }
            break ;
          case GALGAS_Ttype::kEnum_unconstructedType:
          case GALGAS_Ttype::kEnum_functionType:
            {
              inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 944)), GALGAS_string ("internal error, unconstructed type found")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 944)) ;
            }
            break ;
          }
          var_idx_29266.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 946)) ;
          enumerator_29317.gotoNextObject () ;
          enumerator_29352.gotoNextObject () ;
        }
        outArgument_outResultType = GALGAS_Ttype::constructor_intType (SOURCE_FILE ("template_expression_parser.galgas", 948)) ;
        outArgument_outValue = function_valueWithSigned (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 949)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 949)) ;
        const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("template_expression_parser.galgas", 950)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_object var_result_31044 = var_f_28540.getter_invoke (var_actualArgumentObjectList_28676, var_functionOrVariableName_26681.getter_location (SOURCE_FILE ("template_expression_parser.galgas", 951)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 951)) ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, var_result_31044.getter_objectDynamicType (SOURCE_FILE ("template_expression_parser.galgas", 952)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bigint))).boolEnum () ;
          if (kBoolTrue == test_17) {
            outArgument_outResultType = GALGAS_Ttype::constructor_intType (SOURCE_FILE ("template_expression_parser.galgas", 953)) ;
            outArgument_outValue.mAttribute_mBigIntValue = GALGAS_bigint::extractObject (var_result_31044, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 954)) ;
          }else if (kBoolFalse == test_17) {
            const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_result_31044.getter_objectDynamicType (SOURCE_FILE ("template_expression_parser.galgas", 956)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bool))).boolEnum () ;
            if (kBoolTrue == test_19) {
              outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 957)) ;
              outArgument_outValue.mAttribute_mBigIntValue = GALGAS_bool::extractObject (var_result_31044, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 958)).getter_bigint (SOURCE_FILE ("template_expression_parser.galgas", 958)) ;
            }else if (kBoolFalse == test_19) {
              const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, var_result_31044.getter_objectDynamicType (SOURCE_FILE ("template_expression_parser.galgas", 960)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_string))).boolEnum () ;
              if (kBoolTrue == test_21) {
                outArgument_outResultType = GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_expression_parser.galgas", 961)) ;
                outArgument_outValue.mAttribute_mStringValue = GALGAS_string::extractObject (var_result_31044, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 962)) ;
              }else if (kBoolFalse == test_21) {
                GALGAS_location location_23 (var_functionOrVariableName_26681.getter_location (HERE)) ; // Implicit use of 'location' getter
                inCompiler->emitSemanticError (location_23, GALGAS_string ("this function does not return an unsigned, boolean or string value")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 965)) ;
              }
            }
          }
        }
      }
    }
  } break ;
  default:
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i15_parse (C_Lexique_template_5F_scanner * inCompiler) {
  nt_variable_parse (inCompiler) ;
  switch (select_template_5F_expression_5F_parser_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 860)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_parse (inCompiler) ;
      switch (select_template_5F_expression_5F_parser_8 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 873)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 875)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i16_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                  const GALGAS_string constinArgument_inPath,
                                                                                                  const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                  const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_TvarPath var_path_32251 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_exists) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 984)) ;
  nt_variable_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_path_32251, inCompiler) ;
  GALGAS_Ttype var_variableType_32356 ;
  GALGAS_Tvalue var_variableValue_32380 ;
  GALGAS_bool var_varExists_32398 ;
  {
  routine_searchFieldIfExists (var_path_32251, constinArgument_inVariableMap, var_variableType_32356, var_variableValue_32380, var_varExists_32398, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 990)) ;
  }
  switch (select_template_5F_expression_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_default) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 993)) ;
    GALGAS_Tvalue var_expression_32532 ;
    GALGAS_Ttype var_resultType_32554 ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 996)) ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_expression_32532, var_resultType_32554, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1004)) ;
    const enumGalgasBool test_0 = var_varExists_32398.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResultType = var_variableType_32356 ;
      outArgument_outValue = var_variableValue_32380 ;
    }else if (kBoolFalse == test_0) {
      outArgument_outResultType = var_resultType_32554 ;
      outArgument_outValue = var_expression_32532 ;
    }
  } break ;
  case 2: {
    outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 1013)) ;
    const enumGalgasBool test_1 = var_varExists_32398.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outValue = function_valueWithUnsigned (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1015)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1015)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1015)) ;
    }else if (kBoolFalse == test_1) {
      outArgument_outValue = function_valueWithUnsigned (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1017)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1017)) ;
    }
  } break ;
  default:
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i16_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_exists) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 984)) ;
  nt_variable_parse (inCompiler) ;
  switch (select_template_5F_expression_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_default) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 993)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 996)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1004)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i17_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                  const GALGAS_string constinArgument_inPath,
                                                                                                  const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                  const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  GALGAS_TvarPath var_variableName_33353 ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_typeof) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1032)) ;
  nt_variable_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_variableName_33353, inCompiler) ;
  GALGAS_Ttype var_variableType_33465 ;
  GALGAS_Tvalue var_variableValue_33489 ;
  {
  GALGAS_location joker_33565 ; // Joker input parameter
  routine_searchField (var_variableName_33353, constinArgument_inVariableMap, var_variableType_33465, var_variableValue_33489, joker_33565, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1035)) ;
  }
  outArgument_outResultType = GALGAS_Ttype::constructor_enumType (SOURCE_FILE ("template_expression_parser.galgas", 1036)) ;
  outArgument_outValue = function_valueWithString (extensionGetter_messageGoilTemplateType (var_variableType_33465, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1037)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1037)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1037)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i17_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_typeof) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1032)) ;
  nt_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i18_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  switch (select_template_5F_expression_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_true) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1050)) ;
    outArgument_outValue = function_valueWithUnsigned (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1051)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1051)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_false) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1053)) ;
    outArgument_outValue = function_valueWithUnsigned (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1054)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1054)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1054)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outResultType = GALGAS_Ttype::constructor_boolType (SOURCE_FILE ("template_expression_parser.galgas", 1056)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i18_parse (C_Lexique_template_5F_scanner * inCompiler) {
  switch (select_template_5F_expression_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_true) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1050)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_false) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1053)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i19_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__40_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1068)) ;
  GALGAS_lstring var_enumValue_34491 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1068)) ;
  outArgument_outValue = function_valueWithString (var_enumValue_34491.getter_string (SOURCE_FILE ("template_expression_parser.galgas", 1069)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1069)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_enumType (SOURCE_FILE ("template_expression_parser.galgas", 1070)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i19_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__40_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1068)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1068)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i20_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_emptylist) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1082)) ;
  outArgument_outValue = GALGAS_Tvalue::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1083)), GALGAS_double (0), GALGAS_string::makeEmptyString (), GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("template_expression_parser.galgas", 1083)), GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_expression_parser.galgas", 1083)), function_dummyFunction (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1083)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1083))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1083)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_expression_parser.galgas", 1084)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i20_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_emptylist) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1082)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i21_ (const GALGAS_string /* constinArgument_inPrefix */,
                                                                                                  const GALGAS_string /* constinArgument_inPath */,
                                                                                                  const GALGAS_string /* constinArgument_inTemplateDirectory */,
                                                                                                  const GALGAS_TfieldMap /* constinArgument_inVariableMap */,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_emptymap) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1096)) ;
  outArgument_outValue = GALGAS_Tvalue::constructor_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1097)), GALGAS_double (0), GALGAS_string::makeEmptyString (), GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("template_expression_parser.galgas", 1097)), GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_expression_parser.galgas", 1097)), function_dummyFunction (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1097)), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1097))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1097)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_mapType (SOURCE_FILE ("template_expression_parser.galgas", 1098)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i21_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_emptymap) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1096)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i22_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                  const GALGAS_string constinArgument_inPath,
                                                                                                  const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                  const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_mapof) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1110)) ;
  GALGAS_Tvalue var_expValue_35797 ;
  GALGAS_Ttype var_expType_35814 ;
  nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_expValue_35797, var_expType_35814, inCompiler) ;
  GALGAS_location var_where_35920 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1114)) ;
  switch (select_template_5F_expression_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_by) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1117)) ;
    GALGAS_lstring var_key_35993 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1118)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expType_35814.objectCompare (GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_expression_parser.galgas", 1119)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (var_where_35920, GALGAS_string ("list expected")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1120)) ;
      outArgument_outValue.drop () ; // Release error dropped variable
      outArgument_outResultType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      GALGAS_TfieldMap var_resultMap_36243 = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_expression_parser.galgas", 1124)) ;
      cEnumerator_TfieldMapList enumerator_36308 (var_expValue_35797.getter_mMapListValue (SOURCE_FILE ("template_expression_parser.galgas", 1125)), kEnumeration_up) ;
      while (enumerator_36308.hasCurrentObject ()) {
        const enumGalgasBool test_1 = enumerator_36308.current_mMap (HERE).getter_hasKey (var_key_35993.getter_string (SOURCE_FILE ("template_expression_parser.galgas", 1126)) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1126)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_Ttype var_keyType_36452 ;
          GALGAS_Tvalue var_keyValue_36479 ;
          enumerator_36308.current_mMap (HERE).method_searchKey (var_key_35993, var_keyType_36452, var_keyValue_36479, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1130)) ;
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_keyType_36452.objectCompare (GALGAS_Ttype::constructor_stringType (SOURCE_FILE ("template_expression_parser.galgas", 1131)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_lstring var_keyVal_36606 = GALGAS_lstring::constructor_new (var_keyValue_36479.getter_mStringValue (SOURCE_FILE ("template_expression_parser.galgas", 1132)), enumerator_36308.current_mMap (HERE).getter_locationForKey (var_key_35993.getter_string (SOURCE_FILE ("template_expression_parser.galgas", 1132)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1132))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1132)) ;
            {
            var_resultMap_36243.setter_insertKey (var_keyVal_36606, GALGAS_Ttype::constructor_structType (SOURCE_FILE ("template_expression_parser.galgas", 1133)), function_valueWithMap (enumerator_36308.current_mMap (HERE), function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1133)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1133)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1133)) ;
            }
          }else if (kBoolFalse == test_2) {
            inCompiler->emitSemanticError (enumerator_36308.current_mMap (HERE).getter_locationForKey (var_key_35993.getter_string (SOURCE_FILE ("template_expression_parser.galgas", 1135)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1135)), GALGAS_string ("the list element specified key is not a string")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1135)) ;
          }
        }else if (kBoolFalse == test_1) {
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1138)), GALGAS_string ("the list element has not the specified key")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1138)) ;
        }
        enumerator_36308.gotoNextObject () ;
      }
      outArgument_outResultType = GALGAS_Ttype::constructor_mapType (SOURCE_FILE ("template_expression_parser.galgas", 1141)) ;
      outArgument_outValue = function_valueWithMap (var_resultMap_36243, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1142)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1142)) ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1145)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_expType_35814.objectCompare (GALGAS_Ttype::constructor_structType (SOURCE_FILE ("template_expression_parser.galgas", 1146)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (var_where_35920, GALGAS_string ("struct expected")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1147)) ;
      outArgument_outValue.drop () ; // Release error dropped variable
      outArgument_outResultType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      outArgument_outResultType = GALGAS_Ttype::constructor_mapType (SOURCE_FILE ("template_expression_parser.galgas", 1149)) ;
      outArgument_outValue = var_expValue_35797 ;
    }
  } break ;
  default:
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i22_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_mapof) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1110)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_template_5F_expression_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_by) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1117)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1118)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1145)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i23_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                  const GALGAS_string constinArgument_inPath,
                                                                                                  const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                  const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_listof) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1165)) ;
  GALGAS_TvarPath var_path_37711 ;
  nt_variable_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_path_37711, inCompiler) ;
  GALGAS_Ttype var_variableType_37849 ;
  GALGAS_Tvalue var_variableValue_37873 ;
  GALGAS_location var_where_37891 ;
  {
  routine_searchField (var_path_37711, constinArgument_inVariableMap, var_variableType_37849, var_variableValue_37873, var_where_37891, inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1174)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variableType_37849.objectCompare (GALGAS_Ttype::constructor_mapType (SOURCE_FILE ("template_expression_parser.galgas", 1175)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_where_37891, GALGAS_string ("map expected")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1176)) ;
    outArgument_outValue.drop () ; // Release error dropped variable
    outArgument_outResultType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_TfieldMapList var_resultList_38090 = GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("template_expression_parser.galgas", 1178)) ;
    cEnumerator_TfieldMap enumerator_38162 (var_variableValue_37873.getter_mStructValue (SOURCE_FILE ("template_expression_parser.galgas", 1179)), kEnumeration_up) ;
    while (enumerator_38162.hasCurrentObject ()) {
      var_resultList_38090.addAssign_operation (enumerator_38162.current_mValue (HERE).getter_mStructValue (SOURCE_FILE ("template_expression_parser.galgas", 1181))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1181)) ;
      enumerator_38162.gotoNextObject () ;
    }
    outArgument_outResultType = GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_expression_parser.galgas", 1183)) ;
    outArgument_outValue = function_valueWithList (var_resultList_38090, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1184)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1184)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i23_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_listof) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1165)) ;
  nt_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_list_5F_item_i24_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                        const GALGAS_string constinArgument_inPath,
                                                                                                        const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                        const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                        GALGAS_Tvalue & outArgument_outValue,
                                                                                                        GALGAS_Ttype & outArgument_outResultType,
                                                                                                        C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1198)) ;
  GALGAS_TfieldMap var_resultStruct_38617 = GALGAS_TfieldMap::constructor_emptyMap (SOURCE_FILE ("template_expression_parser.galgas", 1199)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_fieldName_38691 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1201)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1202)) ;
    GALGAS_Tvalue var_fieldValue_38824 ;
    GALGAS_Ttype var_fieldType_38852 ;
    nt_expression_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_fieldValue_38824, var_fieldType_38852, inCompiler) ;
    {
    var_resultStruct_38617.setter_insertKey (var_fieldName_38691, var_fieldType_38852, var_fieldValue_38824, inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1210)) ;
    }
    switch (select_template_5F_expression_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1211)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1213)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_structType (SOURCE_FILE ("template_expression_parser.galgas", 1214)) ;
  outArgument_outValue = function_valueWithStruct (var_resultStruct_38617, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1215)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_list_5F_item_i24_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1198)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1201)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1202)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_template_5F_expression_5F_parser_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1211)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1213)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i25_ (const GALGAS_string constinArgument_inPrefix,
                                                                                                  const GALGAS_string constinArgument_inPath,
                                                                                                  const GALGAS_string constinArgument_inTemplateDirectory,
                                                                                                  const GALGAS_TfieldMap constinArgument_inVariableMap,
                                                                                                  GALGAS_Tvalue & outArgument_outValue,
                                                                                                  GALGAS_Ttype & outArgument_outResultType,
                                                                                                  C_Lexique_template_5F_scanner * inCompiler) {
  outArgument_outValue.drop () ; // Release 'out' argument
  outArgument_outResultType.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_list) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1226)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1226)) ;
  GALGAS_TfieldMapList var_resultList_39244 = GALGAS_TfieldMapList::constructor_emptyList (SOURCE_FILE ("template_expression_parser.galgas", 1227)) ;
  switch (select_template_5F_expression_5F_parser_13 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_Tvalue var_itemValue_39428 ;
      GALGAS_Ttype var_itemType_39457 ;
      nt_list_5F_item_ (constinArgument_inPrefix, constinArgument_inPath, constinArgument_inTemplateDirectory, constinArgument_inVariableMap, var_itemValue_39428, var_itemType_39457, inCompiler) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_itemType_39457.objectCompare (GALGAS_Ttype::constructor_structType (SOURCE_FILE ("template_expression_parser.galgas", 1237)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1238)), GALGAS_string ("Internal error")  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1238)) ;
      }else if (kBoolFalse == test_1) {
        var_resultList_39244.addAssign_operation (var_itemValue_39428.getter_mStructValue (SOURCE_FILE ("template_expression_parser.galgas", 1240))  COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1240)) ;
      }
      switch (select_template_5F_expression_5F_parser_14 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1242)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1246)) ;
  outArgument_outResultType = GALGAS_Ttype::constructor_listType (SOURCE_FILE ("template_expression_parser.galgas", 1247)) ;
  outArgument_outValue = function_valueWithList (var_resultList_39244, function_emptyLString (inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1248)), inCompiler COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1248)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cParser_template_5F_expression_5F_parser::rule_template_5F_expression_5F_parser_factor_i25_parse (C_Lexique_template_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken_list) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1226)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1226)) ;
  switch (select_template_5F_expression_5F_parser_13 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_list_5F_item_parse (inCompiler) ;
      switch (select_template_5F_expression_5F_parser_14 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1242)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_template_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("template_expression_parser.galgas", 1246)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_goil_5F_lexique::cTokenFor_goil_5F_lexique (void) :
mLexicalAttribute_a_5F_string (),
mLexicalAttribute_att_5F_token (),
mLexicalAttribute_floatNumber (),
mLexicalAttribute_integerNumber (),
mLexicalAttribute_number () {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_goil_5F_lexique::C_Lexique_goil_5F_lexique (C_Compiler * inCallerCompiler,
                                                      const C_String & inDependencyFileExtension,
                                                      const C_String & inDependencyFilePath,
                                                      const C_String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_goil_5F_lexique::C_Lexique_goil_5F_lexique (C_Compiler * inCallerCompiler,
                                                      const C_String & inSourceString,
                                                      const C_String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_goil_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                                                   *
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_goil_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_goil_5F_lexique_illegalEscape = "Illegal escaped character" ;

static const char * gLexicalMessage_goil_5F_lexique_internalError = "internal error" ;

static const char * gLexicalMessage_goil_5F_lexique_unableToConvertToDouble = "Unable to convert the string to double" ;

static const char * gLexicalMessage_goil_5F_lexique_unterminatedLitteralString = "Unterminated literal string" ;

static const char * gLexicalMessage_goil_5F_lexique_unterminated_comment_error = "unterminated comment" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                                           *
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$idf$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_idf = "identifier" ;

//--- Syntax error message for terminal '$string$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_string = "literal string" ;

//--- Syntax error message for terminal '$g_string$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_g_5F_string = "in search path" ;

//--- Syntax error message for terminal '$uint_number$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_uint_5F_number = "literal unsigned 64 bits integer" ;

//--- Syntax error message for terminal '$float_number$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_float_5F_number = "literal float" ;

//--- Syntax error message for terminal '$set_start_uint_number$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_set_5F_start_5F_uint_5F_number = "literal unsigned 64 bits integer" ;

//--- Syntax error message for terminal '$command$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_command = "command" ;

//--- Syntax error message for terminal '$OIL_VERSION$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_OIL_5F_VERSION = "OIL version" ;

//--- Syntax error message for terminal '$IMPLEMENTATION$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_IMPLEMENTATION = "OIL implementation definition" ;

//--- Syntax error message for terminal '$CPU$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_CPU = "OIL implementation definition" ;

//--- Syntax error message for terminal '$UINT32$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_UINT_33__32_ = "type 'UINT32'" ;

//--- Syntax error message for terminal '$INT32$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_INT_33__32_ = "type 'INT32'" ;

//--- Syntax error message for terminal '$UINT64$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_UINT_36__34_ = "type 'UINT64'" ;

//--- Syntax error message for terminal '$INT64$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_INT_36__34_ = "type 'INT64'" ;

//--- Syntax error message for terminal '$FLOAT$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_FLOAT = "type 'FLOAT'" ;

//--- Syntax error message for terminal '$ENUM$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_ENUM = "type 'ENUM'" ;

//--- Syntax error message for terminal '$STRING$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_STRING = "type 'STRING'" ;

//--- Syntax error message for terminal '$BOOLEAN$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_BOOLEAN = "type 'BOOLEAN'" ;

//--- Syntax error message for terminal '$IDENTIFIER$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_IDENTIFIER = "type 'IDENTIFIER'" ;

//--- Syntax error message for terminal '$STRUCT$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_STRUCT = "type 'STRUCT'" ;

//--- Syntax error message for terminal '$WITH_AUTO$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_WITH_5F_AUTO = "specifier 'WITH_AUTO'" ;

//--- Syntax error message for terminal '$NO_DEFAULT$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_NO_5F_DEFAULT = "specifier 'NO_DEFAULT'" ;

//--- Syntax error message for terminal '$AUTO$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_AUTO = "specifier 'AUTO'" ;

//--- Syntax error message for terminal '$FALSE$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_FALSE = "boolean 'FALSE'" ;

//--- Syntax error message for terminal '$TRUE$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_TRUE = "boolean 'TRUE'" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__3B_ = "';' delimiter" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__3A_ = "':' delimiter" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__3D_ = "'=' delimiter" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__7B_ = "'{' delimiter" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__7D_ = "'}' delimiter" ;

//--- Syntax error message for terminal '$..$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__2E__2E_ = "'..' delimiter" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__5B_ = "'[' delimiter" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__5D_ = "']' delimiter" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__2C_ = "',' delimiter" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__2E_ = "'.' delimiter" ;

//--- Syntax error message for terminal '$+$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__2B_ = "'+' delimiter" ;

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique__2D_ = "'-' delimiter" ;

//--- Syntax error message for terminal '$include$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_include = "command 'include'" ;

//--- Syntax error message for terminal '$includeifexists$' :
static const char * gSyntaxErrorMessage_goil_5F_lexique_includeifexists = "command 'includeifexists'" ;

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                                                *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_goil_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [41] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_goil_5F_lexique_comment,
    gSyntaxErrorMessage_goil_5F_lexique_idf,
    gSyntaxErrorMessage_goil_5F_lexique_string,
    gSyntaxErrorMessage_goil_5F_lexique_g_5F_string,
    gSyntaxErrorMessage_goil_5F_lexique_uint_5F_number,
    gSyntaxErrorMessage_goil_5F_lexique_float_5F_number,
    gSyntaxErrorMessage_goil_5F_lexique_set_5F_start_5F_uint_5F_number,
    gSyntaxErrorMessage_goil_5F_lexique_command,
    gSyntaxErrorMessage_goil_5F_lexique_OIL_5F_VERSION,
    gSyntaxErrorMessage_goil_5F_lexique_IMPLEMENTATION,
    gSyntaxErrorMessage_goil_5F_lexique_CPU,
    gSyntaxErrorMessage_goil_5F_lexique_UINT_33__32_,
    gSyntaxErrorMessage_goil_5F_lexique_INT_33__32_,
    gSyntaxErrorMessage_goil_5F_lexique_UINT_36__34_,
    gSyntaxErrorMessage_goil_5F_lexique_INT_36__34_,
    gSyntaxErrorMessage_goil_5F_lexique_FLOAT,
    gSyntaxErrorMessage_goil_5F_lexique_ENUM,
    gSyntaxErrorMessage_goil_5F_lexique_STRING,
    gSyntaxErrorMessage_goil_5F_lexique_BOOLEAN,
    gSyntaxErrorMessage_goil_5F_lexique_IDENTIFIER,
    gSyntaxErrorMessage_goil_5F_lexique_STRUCT,
    gSyntaxErrorMessage_goil_5F_lexique_WITH_5F_AUTO,
    gSyntaxErrorMessage_goil_5F_lexique_NO_5F_DEFAULT,
    gSyntaxErrorMessage_goil_5F_lexique_AUTO,
    gSyntaxErrorMessage_goil_5F_lexique_FALSE,
    gSyntaxErrorMessage_goil_5F_lexique_TRUE,
    gSyntaxErrorMessage_goil_5F_lexique__3B_,
    gSyntaxErrorMessage_goil_5F_lexique__3A_,
    gSyntaxErrorMessage_goil_5F_lexique__3D_,
    gSyntaxErrorMessage_goil_5F_lexique__7B_,
    gSyntaxErrorMessage_goil_5F_lexique__7D_,
    gSyntaxErrorMessage_goil_5F_lexique__2E__2E_,
    gSyntaxErrorMessage_goil_5F_lexique__5B_,
    gSyntaxErrorMessage_goil_5F_lexique__5D_,
    gSyntaxErrorMessage_goil_5F_lexique__2C_,
    gSyntaxErrorMessage_goil_5F_lexique__2E_,
    gSyntaxErrorMessage_goil_5F_lexique__2B_,
    gSyntaxErrorMessage_goil_5F_lexique__2D_,
    gSyntaxErrorMessage_goil_5F_lexique_include,
    gSyntaxErrorMessage_goil_5F_lexique_includeifexists} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                                                 *
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_2A__2F_$'
static const utf32 kUnicodeString_goil_5F_lexique__2A__2F_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_goil_5F_lexique__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_goil_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_goil_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_goil_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_goil_5F_lexique__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__2A_$'
static const utf32 kUnicodeString_goil_5F_lexique__2F__2A_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__2F_$'
static const utf32 kUnicodeString_goil_5F_lexique__2F__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_X$'
static const utf32 kUnicodeString_goil_5F_lexique__30_X [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('X'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_goil_5F_lexique__30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_goil_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_goil_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_goil_5F_lexique__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$AUTO$'
static const utf32 kUnicodeString_goil_5F_lexique_AUTO [] = {
  TO_UNICODE ('A'),
  TO_UNICODE ('U'),
  TO_UNICODE ('T'),
  TO_UNICODE ('O'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$BOOLEAN$'
static const utf32 kUnicodeString_goil_5F_lexique_BOOLEAN [] = {
  TO_UNICODE ('B'),
  TO_UNICODE ('O'),
  TO_UNICODE ('O'),
  TO_UNICODE ('L'),
  TO_UNICODE ('E'),
  TO_UNICODE ('A'),
  TO_UNICODE ('N'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$CPU$'
static const utf32 kUnicodeString_goil_5F_lexique_CPU [] = {
  TO_UNICODE ('C'),
  TO_UNICODE ('P'),
  TO_UNICODE ('U'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$ENUM$'
static const utf32 kUnicodeString_goil_5F_lexique_ENUM [] = {
  TO_UNICODE ('E'),
  TO_UNICODE ('N'),
  TO_UNICODE ('U'),
  TO_UNICODE ('M'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$FALSE$'
static const utf32 kUnicodeString_goil_5F_lexique_FALSE [] = {
  TO_UNICODE ('F'),
  TO_UNICODE ('A'),
  TO_UNICODE ('L'),
  TO_UNICODE ('S'),
  TO_UNICODE ('E'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$FLOAT$'
static const utf32 kUnicodeString_goil_5F_lexique_FLOAT [] = {
  TO_UNICODE ('F'),
  TO_UNICODE ('L'),
  TO_UNICODE ('O'),
  TO_UNICODE ('A'),
  TO_UNICODE ('T'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$IDENTIFIER$'
static const utf32 kUnicodeString_goil_5F_lexique_IDENTIFIER [] = {
  TO_UNICODE ('I'),
  TO_UNICODE ('D'),
  TO_UNICODE ('E'),
  TO_UNICODE ('N'),
  TO_UNICODE ('T'),
  TO_UNICODE ('I'),
  TO_UNICODE ('F'),
  TO_UNICODE ('I'),
  TO_UNICODE ('E'),
  TO_UNICODE ('R'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$IMPLEMENTATION$'
static const utf32 kUnicodeString_goil_5F_lexique_IMPLEMENTATION [] = {
  TO_UNICODE ('I'),
  TO_UNICODE ('M'),
  TO_UNICODE ('P'),
  TO_UNICODE ('L'),
  TO_UNICODE ('E'),
  TO_UNICODE ('M'),
  TO_UNICODE ('E'),
  TO_UNICODE ('N'),
  TO_UNICODE ('T'),
  TO_UNICODE ('A'),
  TO_UNICODE ('T'),
  TO_UNICODE ('I'),
  TO_UNICODE ('O'),
  TO_UNICODE ('N'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$INT_33__32_$'
static const utf32 kUnicodeString_goil_5F_lexique_INT_33__32_ [] = {
  TO_UNICODE ('I'),
  TO_UNICODE ('N'),
  TO_UNICODE ('T'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$INT_36__34_$'
static const utf32 kUnicodeString_goil_5F_lexique_INT_36__34_ [] = {
  TO_UNICODE ('I'),
  TO_UNICODE ('N'),
  TO_UNICODE ('T'),
  TO_UNICODE ('6'),
  TO_UNICODE ('4'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$NO_5F_DEFAULT$'
static const utf32 kUnicodeString_goil_5F_lexique_NO_5F_DEFAULT [] = {
  TO_UNICODE ('N'),
  TO_UNICODE ('O'),
  TO_UNICODE ('_'),
  TO_UNICODE ('D'),
  TO_UNICODE ('E'),
  TO_UNICODE ('F'),
  TO_UNICODE ('A'),
  TO_UNICODE ('U'),
  TO_UNICODE ('L'),
  TO_UNICODE ('T'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$OIL_5F_VERSION$'
static const utf32 kUnicodeString_goil_5F_lexique_OIL_5F_VERSION [] = {
  TO_UNICODE ('O'),
  TO_UNICODE ('I'),
  TO_UNICODE ('L'),
  TO_UNICODE ('_'),
  TO_UNICODE ('V'),
  TO_UNICODE ('E'),
  TO_UNICODE ('R'),
  TO_UNICODE ('S'),
  TO_UNICODE ('I'),
  TO_UNICODE ('O'),
  TO_UNICODE ('N'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$STRING$'
static const utf32 kUnicodeString_goil_5F_lexique_STRING [] = {
  TO_UNICODE ('S'),
  TO_UNICODE ('T'),
  TO_UNICODE ('R'),
  TO_UNICODE ('I'),
  TO_UNICODE ('N'),
  TO_UNICODE ('G'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$STRUCT$'
static const utf32 kUnicodeString_goil_5F_lexique_STRUCT [] = {
  TO_UNICODE ('S'),
  TO_UNICODE ('T'),
  TO_UNICODE ('R'),
  TO_UNICODE ('U'),
  TO_UNICODE ('C'),
  TO_UNICODE ('T'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$TRUE$'
static const utf32 kUnicodeString_goil_5F_lexique_TRUE [] = {
  TO_UNICODE ('T'),
  TO_UNICODE ('R'),
  TO_UNICODE ('U'),
  TO_UNICODE ('E'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$UINT_33__32_$'
static const utf32 kUnicodeString_goil_5F_lexique_UINT_33__32_ [] = {
  TO_UNICODE ('U'),
  TO_UNICODE ('I'),
  TO_UNICODE ('N'),
  TO_UNICODE ('T'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$UINT_36__34_$'
static const utf32 kUnicodeString_goil_5F_lexique_UINT_36__34_ [] = {
  TO_UNICODE ('U'),
  TO_UNICODE ('I'),
  TO_UNICODE ('N'),
  TO_UNICODE ('T'),
  TO_UNICODE ('6'),
  TO_UNICODE ('4'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$WITH_5F_AUTO$'
static const utf32 kUnicodeString_goil_5F_lexique_WITH_5F_AUTO [] = {
  TO_UNICODE ('W'),
  TO_UNICODE ('I'),
  TO_UNICODE ('T'),
  TO_UNICODE ('H'),
  TO_UNICODE ('_'),
  TO_UNICODE ('A'),
  TO_UNICODE ('U'),
  TO_UNICODE ('T'),
  TO_UNICODE ('O'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_goil_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_goil_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$include$'
static const utf32 kUnicodeString_goil_5F_lexique_include [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$includeifexists$'
static const utf32 kUnicodeString_goil_5F_lexique_includeifexists [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_goil_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_goil_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'OILDelimiters'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_goil_5F_lexique_OILDelimiters = 12 ;

static const C_unicode_lexique_table_entry ktable_for_goil_5F_lexique_OILDelimiters [ktable_size_goil_5F_lexique_OILDelimiters] = {
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__2B_, 1, C_Lexique_goil_5F_lexique::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__2C_, 1, C_Lexique_goil_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__2D_, 1, C_Lexique_goil_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__2E_, 1, C_Lexique_goil_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__3A_, 1, C_Lexique_goil_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__3B_, 1, C_Lexique_goil_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__3D_, 1, C_Lexique_goil_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__5B_, 1, C_Lexique_goil_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__5D_, 1, C_Lexique_goil_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__7B_, 1, C_Lexique_goil_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__7D_, 1, C_Lexique_goil_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique__2E__2E_, 2, C_Lexique_goil_5F_lexique::kToken__2E__2E_)
} ;

int16_t C_Lexique_goil_5F_lexique::search_into_OILDelimiters (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_goil_5F_lexique_OILDelimiters, ktable_size_goil_5F_lexique_OILDelimiters) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'boolean'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_goil_5F_lexique_boolean = 2 ;

static const C_unicode_lexique_table_entry ktable_for_goil_5F_lexique_boolean [ktable_size_goil_5F_lexique_boolean] = {
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_TRUE, 4, C_Lexique_goil_5F_lexique::kToken_TRUE),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_FALSE, 5, C_Lexique_goil_5F_lexique::kToken_FALSE)
} ;

int16_t C_Lexique_goil_5F_lexique::search_into_boolean (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_goil_5F_lexique_boolean, ktable_size_goil_5F_lexique_boolean) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'commands'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_goil_5F_lexique_commands = 2 ;

static const C_unicode_lexique_table_entry ktable_for_goil_5F_lexique_commands [ktable_size_goil_5F_lexique_commands] = {
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_include, 7, C_Lexique_goil_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_includeifexists, 15, C_Lexique_goil_5F_lexique::kToken_includeifexists)
} ;

int16_t C_Lexique_goil_5F_lexique::search_into_commands (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_goil_5F_lexique_commands, ktable_size_goil_5F_lexique_commands) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'dataTypes'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_goil_5F_lexique_dataTypes = 10 ;

static const C_unicode_lexique_table_entry ktable_for_goil_5F_lexique_dataTypes [ktable_size_goil_5F_lexique_dataTypes] = {
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_ENUM, 4, C_Lexique_goil_5F_lexique::kToken_ENUM),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_FLOAT, 5, C_Lexique_goil_5F_lexique::kToken_FLOAT),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_INT_33__32_, 5, C_Lexique_goil_5F_lexique::kToken_INT_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_INT_36__34_, 5, C_Lexique_goil_5F_lexique::kToken_INT_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_STRING, 6, C_Lexique_goil_5F_lexique::kToken_STRING),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_STRUCT, 6, C_Lexique_goil_5F_lexique::kToken_STRUCT),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_UINT_33__32_, 6, C_Lexique_goil_5F_lexique::kToken_UINT_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_UINT_36__34_, 6, C_Lexique_goil_5F_lexique::kToken_UINT_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_BOOLEAN, 7, C_Lexique_goil_5F_lexique::kToken_BOOLEAN),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_IDENTIFIER, 10, C_Lexique_goil_5F_lexique::kToken_IDENTIFIER)
} ;

int16_t C_Lexique_goil_5F_lexique::search_into_dataTypes (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_goil_5F_lexique_dataTypes, ktable_size_goil_5F_lexique_dataTypes) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'miscSpecifiers'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_goil_5F_lexique_miscSpecifiers = 3 ;

static const C_unicode_lexique_table_entry ktable_for_goil_5F_lexique_miscSpecifiers [ktable_size_goil_5F_lexique_miscSpecifiers] = {
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_AUTO, 4, C_Lexique_goil_5F_lexique::kToken_AUTO),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_WITH_5F_AUTO, 9, C_Lexique_goil_5F_lexique::kToken_WITH_5F_AUTO),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_NO_5F_DEFAULT, 10, C_Lexique_goil_5F_lexique::kToken_NO_5F_DEFAULT)
} ;

int16_t C_Lexique_goil_5F_lexique::search_into_miscSpecifiers (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_goil_5F_lexique_miscSpecifiers, ktable_size_goil_5F_lexique_miscSpecifiers) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'oilDefinitions'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_goil_5F_lexique_oilDefinitions = 2 ;

static const C_unicode_lexique_table_entry ktable_for_goil_5F_lexique_oilDefinitions [ktable_size_goil_5F_lexique_oilDefinitions] = {
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_CPU, 3, C_Lexique_goil_5F_lexique::kToken_CPU),
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_IMPLEMENTATION, 14, C_Lexique_goil_5F_lexique::kToken_IMPLEMENTATION)
} ;

int16_t C_Lexique_goil_5F_lexique::search_into_oilDefinitions (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_goil_5F_lexique_oilDefinitions, ktable_size_goil_5F_lexique_oilDefinitions) ;
}

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'oilVersion'                            *
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_goil_5F_lexique_oilVersion = 1 ;

static const C_unicode_lexique_table_entry ktable_for_goil_5F_lexique_oilVersion [ktable_size_goil_5F_lexique_oilVersion] = {
  C_unicode_lexique_table_entry (kUnicodeString_goil_5F_lexique_OIL_5F_VERSION, 11, C_Lexique_goil_5F_lexique::kToken_OIL_5F_VERSION)
} ;

int16_t C_Lexique_goil_5F_lexique::search_into_oilVersion (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_goil_5F_lexique_oilVersion, ktable_size_goil_5F_lexique_oilVersion) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                                      *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_goil_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_goil_5F_lexique * ptr = (const cTokenFor_goil_5F_lexique *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_idf:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("idf") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_att_5F_token) ;
      break ;
    case kToken_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_a_5F_string) ;
      break ;
    case kToken_g_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("g_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_a_5F_string) ;
      break ;
    case kToken_uint_5F_number:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("uint_number") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_integerNumber) ;
      break ;
    case kToken_float_5F_number:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("float_number") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatNumber) ;
      break ;
    case kToken_set_5F_start_5F_uint_5F_number:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("set_start_uint_number") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_integerNumber) ;
      break ;
    case kToken_command:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("command") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_att_5F_token) ;
      break ;
    case kToken_OIL_5F_VERSION:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("OIL_VERSION") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_IMPLEMENTATION:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("IMPLEMENTATION") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_CPU:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("CPU") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_UINT_33__32_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("UINT32") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_INT_33__32_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("INT32") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_UINT_36__34_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("UINT64") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_INT_36__34_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("INT64") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_FLOAT:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("FLOAT") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_ENUM:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("ENUM") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_STRING:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("STRING") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_BOOLEAN:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("BOOLEAN") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_IDENTIFIER:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("IDENTIFIER") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_STRUCT:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("STRUCT") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_WITH_5F_AUTO:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("WITH_AUTO") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_NO_5F_DEFAULT:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("NO_DEFAULT") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_AUTO:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("AUTO") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_FALSE:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("FALSE") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_TRUE:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("TRUE") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("..") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("include") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_includeifexists:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("includeifexists") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                                       *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                                                     *
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                                       *
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                                               *
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_goil_5F_lexique::parseLexicalToken (void) {
  cTokenFor_goil_5F_lexique token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_a_5F_string.setLengthToZero () ;
    token.mLexicalAttribute_att_5F_token.setLengthToZero () ;
    token.mLexicalAttribute_floatNumber = 0.0 ;
    token.mLexicalAttribute_integerNumber = 0 ;
    token.mLexicalAttribute_number.setLengthToZero () ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__2F__2F_, 2, true)) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__2F__2A_, 2, true)) {
        do {
          if (notTestForInputUTF32String (kUnicodeString_goil_5F_lexique__2A__2F_, 2, gLexicalMessage_goil_5F_lexique_unterminated_comment_error COMMA_LINE_AND_SOURCE_FILE)) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_att_5F_token, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_oilVersion (token.mLexicalAttribute_att_5F_token) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_oilDefinitions (token.mLexicalAttribute_att_5F_token) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_dataTypes (token.mLexicalAttribute_att_5F_token) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_miscSpecifiers (token.mLexicalAttribute_att_5F_token) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_boolean (token.mLexicalAttribute_att_5F_token) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_idf ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__2E__2E_, 2, true)) {
        token.mTokenCode = kToken__2E__2E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__3D_, 1, true)) {
        token.mTokenCode = kToken__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__3B_, 1, true)) {
        token.mTokenCode = kToken__3B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__2E_, 1, true)) {
        token.mTokenCode = kToken__2E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__2D_, 1, true)) {
        token.mTokenCode = kToken__2D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__2C_, 1, true)) {
        token.mTokenCode = kToken__2C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__2B_, 1, true)) {
        token.mTokenCode = kToken__2B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        do {
          if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_a_5F_string, TO_UNICODE ('\"')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_a_5F_string, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_a_5F_string, TO_UNICODE ('\n')) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_a_5F_string, TO_UNICODE ('\r')) ;
            }else{
              lexicalError (gLexicalMessage_goil_5F_lexique_illegalEscape COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_a_5F_string, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken_string ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_goil_5F_lexique_unterminatedLitteralString COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE ('=')) || testForInputUTF32CharRange (TO_UNICODE ('\?'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_a_5F_string, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('>'))) {
          token.mTokenCode = kToken_g_5F_string ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_goil_5F_lexique_unterminatedLitteralString COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32String (kUnicodeString_goil_5F_lexique__30_x, 2, true) || testForInputUTF32String (kUnicodeString_goil_5F_lexique__30_X, 2, true)) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt64 (*this, previousChar (), token.mLexicalAttribute_integerNumber, gLexicalMessage_goil_5F_lexique_decimalNumberTooLarge, gLexicalMessage_goil_5F_lexique_internalError) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_uint_5F_number ;
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_number, previousChar ()) ;
          ::scanner_routine_enterDigitIntoUInt64 (*this, previousChar (), token.mLexicalAttribute_integerNumber, gLexicalMessage_goil_5F_lexique_decimalNumberTooLarge, gLexicalMessage_goil_5F_lexique_internalError) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('.'))) {
          if (testForInputUTF32Char (TO_UNICODE ('.'))) {
            token.mTokenCode = kToken_set_5F_start_5F_uint_5F_number ;
            enterToken (token) ;
          }else{
            do {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_number, previousChar ()) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              }else{
                mLoop = false ;
              }
            }while (mLoop) ;
            mLoop = true ;
            ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_number, token.mLexicalAttribute_floatNumber, gLexicalMessage_goil_5F_lexique_unableToConvertToDouble) ;
            token.mTokenCode = kToken_float_5F_number ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken_uint_5F_number ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_att_5F_token, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_commands (token.mLexicalAttribute_att_5F_token) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_command ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
        token.mTokenCode = kToken_ ; // Empty string code
      }else{ // Unknown input character
        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if ((UNICODE_VALUE (mCurrentChar) == '\0') && (token.mTemplateStringBeforeToken.length () > 0)) {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                                      *
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_goil_5F_lexique::enterToken (const cTokenFor_goil_5F_lexique & inToken) {
  cTokenFor_goil_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_goil_5F_lexique ()) ;
  ptr->mTokenCode = inToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;
  ptr->mLexicalAttribute_a_5F_string = inToken.mLexicalAttribute_a_5F_string ;
  ptr->mLexicalAttribute_att_5F_token = inToken.mLexicalAttribute_att_5F_token ;
  ptr->mLexicalAttribute_floatNumber = inToken.mLexicalAttribute_floatNumber ;
  ptr->mLexicalAttribute_integerNumber = inToken.mLexicalAttribute_integerNumber ;
  ptr->mLexicalAttribute_number = inToken.mLexicalAttribute_number ;
  enterTokenFromPointer (ptr) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                                       *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_goil_5F_lexique::attributeValue_a_5F_string (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_a_5F_string ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_goil_5F_lexique::attributeValue_att_5F_token (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_att_5F_token ;
}

//----------------------------------------------------------------------------------------------------------------------

double C_Lexique_goil_5F_lexique::attributeValue_floatNumber (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_floatNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

uint64_t C_Lexique_goil_5F_lexique::attributeValue_integerNumber (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_integerNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_goil_5F_lexique::attributeValue_number (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_number ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_goil_5F_lexique::synthetizedAttribute_a_5F_string (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_goil_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_a_5F_string) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_goil_5F_lexique::synthetizedAttribute_att_5F_token (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_goil_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_att_5F_token) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_goil_5F_lexique::synthetizedAttribute_floatNumber (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_goil_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatNumber) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ C_Lexique_goil_5F_lexique::synthetizedAttribute_integerNumber (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_goil_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_integerNumber) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_goil_5F_lexique::synthetizedAttribute_number (void) const {
  cTokenFor_goil_5F_lexique * ptr = (cTokenFor_goil_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_goil_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_number) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                                                   *
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_goil_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("idf") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("g_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint_number") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("float_number") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("set_start_uint_number") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("command") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("OIL_VERSION") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("IMPLEMENTATION") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("CPU") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("UINT32") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("INT32") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("UINT64") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("INT64") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("FLOAT") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("ENUM") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("STRING") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("BOOLEAN") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("IDENTIFIER") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("STRUCT") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("WITH_AUTO") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("NO_DEFAULT") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("AUTO") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("FALSE") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("TRUE") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("includeifexists") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_goil_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.addObject ("goil_lexique:OILDelimiters") ;
  ioList.addObject ("goil_lexique:boolean") ;
  ioList.addObject ("goil_lexique:commands") ;
  ioList.addObject ("goil_lexique:dataTypes") ;
  ioList.addObject ("goil_lexique:miscSpecifiers") ;
  ioList.addObject ("goil_lexique:oilDefinitions") ;
  ioList.addObject ("goil_lexique:oilVersion") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_goil_5F_lexique (const C_String & inIdentifier,
                                                      bool & ioFound,
                                                      TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "goil_lexique:OILDelimiters") {
    ioFound = true ;
    ioList.addObject ("+") ;
    ioList.addObject (",") ;
    ioList.addObject ("-") ;
    ioList.addObject (".") ;
    ioList.addObject (":") ;
    ioList.addObject (";") ;
    ioList.addObject ("=") ;
    ioList.addObject ("[") ;
    ioList.addObject ("]") ;
    ioList.addObject ("{") ;
    ioList.addObject ("}") ;
    ioList.addObject ("..") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "goil_lexique:boolean") {
    ioFound = true ;
    ioList.addObject ("TRUE") ;
    ioList.addObject ("FALSE") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "goil_lexique:commands") {
    ioFound = true ;
    ioList.addObject ("include") ;
    ioList.addObject ("includeifexists") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "goil_lexique:dataTypes") {
    ioFound = true ;
    ioList.addObject ("ENUM") ;
    ioList.addObject ("FLOAT") ;
    ioList.addObject ("INT32") ;
    ioList.addObject ("INT64") ;
    ioList.addObject ("STRING") ;
    ioList.addObject ("STRUCT") ;
    ioList.addObject ("UINT32") ;
    ioList.addObject ("UINT64") ;
    ioList.addObject ("BOOLEAN") ;
    ioList.addObject ("IDENTIFIER") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "goil_lexique:miscSpecifiers") {
    ioFound = true ;
    ioList.addObject ("AUTO") ;
    ioList.addObject ("WITH_AUTO") ;
    ioList.addObject ("NO_DEFAULT") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "goil_lexique:oilDefinitions") {
    ioFound = true ;
    ioList.addObject ("CPU") ;
    ioList.addObject ("IMPLEMENTATION") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "goil_lexique:oilVersion") {
    ioFound = true ;
    ioList.addObject ("OIL_VERSION") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_goil_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_goil_5F_lexique, getKeywordsForIdentifier_goil_5F_lexique) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_goil_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [41] = {0,
    9 /* goil_lexique_1_comment */,
    2 /* goil_lexique_1_idf */,
    4 /* goil_lexique_1_string */,
    5 /* goil_lexique_1_g_5F_string */,
    6 /* goil_lexique_1_uint_5F_number */,
    7 /* goil_lexique_1_float_5F_number */,
    6 /* goil_lexique_1_set_5F_start_5F_uint_5F_number */,
    8 /* goil_lexique_1_command */,
    1 /* goil_lexique_1_OIL_5F_VERSION */,
    1 /* goil_lexique_1_IMPLEMENTATION */,
    1 /* goil_lexique_1_CPU */,
    1 /* goil_lexique_1_UINT_33__32_ */,
    1 /* goil_lexique_1_INT_33__32_ */,
    1 /* goil_lexique_1_UINT_36__34_ */,
    1 /* goil_lexique_1_INT_36__34_ */,
    1 /* goil_lexique_1_FLOAT */,
    1 /* goil_lexique_1_ENUM */,
    1 /* goil_lexique_1_STRING */,
    1 /* goil_lexique_1_BOOLEAN */,
    1 /* goil_lexique_1_IDENTIFIER */,
    1 /* goil_lexique_1_STRUCT */,
    1 /* goil_lexique_1_WITH_5F_AUTO */,
    1 /* goil_lexique_1_NO_5F_DEFAULT */,
    1 /* goil_lexique_1_AUTO */,
    1 /* goil_lexique_1_FALSE */,
    1 /* goil_lexique_1_TRUE */,
    3 /* goil_lexique_1__3B_ */,
    3 /* goil_lexique_1__3A_ */,
    3 /* goil_lexique_1__3D_ */,
    3 /* goil_lexique_1__7B_ */,
    3 /* goil_lexique_1__7D_ */,
    3 /* goil_lexique_1__2E__2E_ */,
    3 /* goil_lexique_1__5B_ */,
    3 /* goil_lexique_1__5D_ */,
    3 /* goil_lexique_1__2C_ */,
    3 /* goil_lexique_1__2E_ */,
    3 /* goil_lexique_1__2B_ */,
    3 /* goil_lexique_1__2D_ */,
    1 /* goil_lexique_1_include */,
    1 /* goil_lexique_1_includeifexists */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_goil_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 10) {
    static const char * kStyleArray [10] = {
      "",
      "keywordsStyle",
      "identifierStyle",
      "delimitersStyle",
      "stringStyle",
      "pathStyle",
      "integerStyle",
      "floatStyle",
      "commandStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType::GALGAS_dataType (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_void (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_uint_33__32_Number (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_uint_33__32_Number ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_sint_33__32_Number (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_sint_33__32_Number ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_uint_36__34_Number (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_uint_36__34_Number ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_sint_36__34_Number (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_sint_36__34_Number ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_floatNumber (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_floatNumber ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_string (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_string ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_enumeration (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_enumeration ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_boolean (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_boolean ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_identifier (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_identifier ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_objectType (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_objectType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::constructor_structType (UNUSED_LOCATION_ARGS) {
  GALGAS_dataType result ;
  result.mEnum = kEnum_structType ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_dataType [13] = {
  "(not built)",
  "void",
  "uint32Number",
  "sint32Number",
  "uint64Number",
  "sint64Number",
  "floatNumber",
  "string",
  "enumeration",
  "boolean",
  "identifier",
  "objectType",
  "structType"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isUint_33__32_Number (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uint_33__32_Number == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isSint_33__32_Number (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sint_33__32_Number == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isUint_36__34_Number (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uint_36__34_Number == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isSint_36__34_Number (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sint_36__34_Number == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isFloatNumber (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_floatNumber == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_string == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isEnumeration (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumeration == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isBoolean (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolean == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isIdentifier (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_identifier == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isObjectType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_objectType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dataType::getter_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dataType::description (C_String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString << "<enum @dataType: " << gEnumNameArrayFor_dataType [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dataType::objectCompare (const GALGAS_dataType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                   @dataType type                                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataType ("dataType",
                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dataType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dataType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dataType GALGAS_dataType::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_dataType result ;
  const GALGAS_dataType * p = (const GALGAS_dataType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@uint_33__32_List' list                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_uint_33__32_List : public cCollectionElement {
  public : GALGAS_uint_33__32_List_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_uint_33__32_List (const GALGAS_location & in_location,
                                                const GALGAS_uint & in_value
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_uint_33__32_List::cCollectionElement_uint_33__32_List (const GALGAS_location & in_location,
                                                                          const GALGAS_uint & in_value
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_location, in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_uint_33__32_List::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_uint_33__32_List::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_uint_33__32_List (mObject.mAttribute_location, mObject.mAttribute_value COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_uint_33__32_List::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "location" ":" ;
  mObject.mAttribute_location.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "value" ":" ;
  mObject.mAttribute_value.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_uint_33__32_List::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_uint_33__32_List * operand = (cCollectionElement_uint_33__32_List *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_uint_33__32_List) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List::GALGAS_uint_33__32_List (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List::GALGAS_uint_33__32_List (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List GALGAS_uint_33__32_List::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_uint_33__32_List result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List GALGAS_uint_33__32_List::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                            const GALGAS_uint & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_List result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_uint_33__32_List::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_location & in_location,
                                                         const GALGAS_uint & in_value
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_uint_33__32_List * p = NULL ;
  macroMyNew (p, cCollectionElement_uint_33__32_List (in_location,
                                                      in_value COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::addAssign_operation (const GALGAS_location & inOperand0,
                                                   const GALGAS_uint & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uint_33__32_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                    const GALGAS_uint inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uint_33__32_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                    GALGAS_uint & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_uint_33__32_List * p = (cCollectionElement_uint_33__32_List *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
      outOperand0 = p->mObject.mAttribute_location ;
      outOperand1 = p->mObject.mAttribute_value ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::setter_popFirst (GALGAS_location & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_33__32_List * p = (cCollectionElement_uint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::setter_popLast (GALGAS_location & outOperand0,
                                              GALGAS_uint & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_33__32_List * p = (cCollectionElement_uint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::method_first (GALGAS_location & outOperand0,
                                            GALGAS_uint & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_33__32_List * p = (cCollectionElement_uint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::method_last (GALGAS_location & outOperand0,
                                           GALGAS_uint & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_33__32_List * p = (cCollectionElement_uint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List GALGAS_uint_33__32_List::add_operation (const GALGAS_uint_33__32_List & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_33__32_List result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List GALGAS_uint_33__32_List::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_33__32_List result = GALGAS_uint_33__32_List::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List GALGAS_uint_33__32_List::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_33__32_List result = GALGAS_uint_33__32_List::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List GALGAS_uint_33__32_List::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uint_33__32_List result = GALGAS_uint_33__32_List::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_33__32_List::plusAssign_operation (const GALGAS_uint_33__32_List inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_uint_33__32_List::getter_locationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_33__32_List * p = (cCollectionElement_uint_33__32_List *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
    result = p->mObject.mAttribute_location ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_uint_33__32_List::getter_valueAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_33__32_List * p = (cCollectionElement_uint_33__32_List *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
    result = p->mObject.mAttribute_value ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_uint_33__32_List::cEnumerator_uint_33__32_List (const GALGAS_uint_33__32_List & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List_2D_element cEnumerator_uint_33__32_List::current (LOCATION_ARGS) const {
  const cCollectionElement_uint_33__32_List * p = (const cCollectionElement_uint_33__32_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_uint_33__32_List::current_location (LOCATION_ARGS) const {
  const cCollectionElement_uint_33__32_List * p = (const cCollectionElement_uint_33__32_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
  return p->mObject.mAttribute_location ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_uint_33__32_List::current_value (LOCATION_ARGS) const {
  const cCollectionElement_uint_33__32_List * p = (const cCollectionElement_uint_33__32_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_33__32_List) ;
  return p->mObject.mAttribute_value ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                  @uint32List type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_33__32_List ("uint32List",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_33__32_List::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_33__32_List ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_33__32_List::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_33__32_List (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_33__32_List GALGAS_uint_33__32_List::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint_33__32_List result ;
  const GALGAS_uint_33__32_List * p = (const GALGAS_uint_33__32_List *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_33__32_List *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint32List", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@uint_36__34_List' list                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_uint_36__34_List : public cCollectionElement {
  public : GALGAS_uint_36__34_List_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_uint_36__34_List (const GALGAS_location & in_location,
                                                const GALGAS_uint_36__34_ & in_value
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_uint_36__34_List::cCollectionElement_uint_36__34_List (const GALGAS_location & in_location,
                                                                          const GALGAS_uint_36__34_ & in_value
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_location, in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_uint_36__34_List::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_uint_36__34_List::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_uint_36__34_List (mObject.mAttribute_location, mObject.mAttribute_value COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_uint_36__34_List::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "location" ":" ;
  mObject.mAttribute_location.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "value" ":" ;
  mObject.mAttribute_value.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_uint_36__34_List::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_uint_36__34_List * operand = (cCollectionElement_uint_36__34_List *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_uint_36__34_List) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List::GALGAS_uint_36__34_List (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List::GALGAS_uint_36__34_List (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List GALGAS_uint_36__34_List::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_uint_36__34_List result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List GALGAS_uint_36__34_List::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                            const GALGAS_uint_36__34_ & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_List result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_uint_36__34_List::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_location & in_location,
                                                         const GALGAS_uint_36__34_ & in_value
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_uint_36__34_List * p = NULL ;
  macroMyNew (p, cCollectionElement_uint_36__34_List (in_location,
                                                      in_value COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::addAssign_operation (const GALGAS_location & inOperand0,
                                                   const GALGAS_uint_36__34_ & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uint_36__34_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                    const GALGAS_uint_36__34_ inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uint_36__34_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                    GALGAS_uint_36__34_ & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_uint_36__34_List * p = (cCollectionElement_uint_36__34_List *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
      outOperand0 = p->mObject.mAttribute_location ;
      outOperand1 = p->mObject.mAttribute_value ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::setter_popFirst (GALGAS_location & outOperand0,
                                               GALGAS_uint_36__34_ & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_List * p = (cCollectionElement_uint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::setter_popLast (GALGAS_location & outOperand0,
                                              GALGAS_uint_36__34_ & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_List * p = (cCollectionElement_uint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::method_first (GALGAS_location & outOperand0,
                                            GALGAS_uint_36__34_ & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_List * p = (cCollectionElement_uint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::method_last (GALGAS_location & outOperand0,
                                           GALGAS_uint_36__34_ & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_List * p = (cCollectionElement_uint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List GALGAS_uint_36__34_List::add_operation (const GALGAS_uint_36__34_List & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_List result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List GALGAS_uint_36__34_List::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_List result = GALGAS_uint_36__34_List::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List GALGAS_uint_36__34_List::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_List result = GALGAS_uint_36__34_List::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List GALGAS_uint_36__34_List::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_List result = GALGAS_uint_36__34_List::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_uint_36__34_List::plusAssign_operation (const GALGAS_uint_36__34_List inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_uint_36__34_List::getter_locationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_List * p = (cCollectionElement_uint_36__34_List *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
    result = p->mObject.mAttribute_location ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_ GALGAS_uint_36__34_List::getter_valueAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_List * p = (cCollectionElement_uint_36__34_List *) attributes.ptr () ;
  GALGAS_uint_36__34_ result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
    result = p->mObject.mAttribute_value ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_uint_36__34_List::cEnumerator_uint_36__34_List (const GALGAS_uint_36__34_List & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List_2D_element cEnumerator_uint_36__34_List::current (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_List * p = (const cCollectionElement_uint_36__34_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_uint_36__34_List::current_location (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_List * p = (const cCollectionElement_uint_36__34_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
  return p->mObject.mAttribute_location ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_ cEnumerator_uint_36__34_List::current_value (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_List * p = (const cCollectionElement_uint_36__34_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_List) ;
  return p->mObject.mAttribute_value ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                  @uint64List type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_List ("uint64List",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_36__34_List::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_List ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_36__34_List::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_List (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_List GALGAS_uint_36__34_List::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_List result ;
  const GALGAS_uint_36__34_List * p = (const GALGAS_uint_36__34_List *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_List *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64List", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@sint_33__32_List' list                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sint_33__32_List : public cCollectionElement {
  public : GALGAS_sint_33__32_List_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sint_33__32_List (const GALGAS_location & in_location,
                                                const GALGAS_sint & in_value
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sint_33__32_List::cCollectionElement_sint_33__32_List (const GALGAS_location & in_location,
                                                                          const GALGAS_sint & in_value
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_location, in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sint_33__32_List::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sint_33__32_List::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sint_33__32_List (mObject.mAttribute_location, mObject.mAttribute_value COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sint_33__32_List::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "location" ":" ;
  mObject.mAttribute_location.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "value" ":" ;
  mObject.mAttribute_value.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sint_33__32_List::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sint_33__32_List * operand = (cCollectionElement_sint_33__32_List *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sint_33__32_List) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List::GALGAS_sint_33__32_List (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List::GALGAS_sint_33__32_List (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List GALGAS_sint_33__32_List::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_sint_33__32_List result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List GALGAS_sint_33__32_List::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                            const GALGAS_sint & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32_List result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_sint_33__32_List::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_location & in_location,
                                                         const GALGAS_sint & in_value
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_sint_33__32_List * p = NULL ;
  macroMyNew (p, cCollectionElement_sint_33__32_List (in_location,
                                                      in_value COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::addAssign_operation (const GALGAS_location & inOperand0,
                                                   const GALGAS_sint & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sint_33__32_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                    const GALGAS_sint inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sint_33__32_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                    GALGAS_sint & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sint_33__32_List * p = (cCollectionElement_sint_33__32_List *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
      outOperand0 = p->mObject.mAttribute_location ;
      outOperand1 = p->mObject.mAttribute_value ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::setter_popFirst (GALGAS_location & outOperand0,
                                               GALGAS_sint & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_33__32_List * p = (cCollectionElement_sint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::setter_popLast (GALGAS_location & outOperand0,
                                              GALGAS_sint & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_33__32_List * p = (cCollectionElement_sint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::method_first (GALGAS_location & outOperand0,
                                            GALGAS_sint & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_33__32_List * p = (cCollectionElement_sint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::method_last (GALGAS_location & outOperand0,
                                           GALGAS_sint & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_33__32_List * p = (cCollectionElement_sint_33__32_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List GALGAS_sint_33__32_List::add_operation (const GALGAS_sint_33__32_List & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_33__32_List result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List GALGAS_sint_33__32_List::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sint_33__32_List result = GALGAS_sint_33__32_List::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List GALGAS_sint_33__32_List::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sint_33__32_List result = GALGAS_sint_33__32_List::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List GALGAS_sint_33__32_List::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sint_33__32_List result = GALGAS_sint_33__32_List::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_33__32_List::plusAssign_operation (const GALGAS_sint_33__32_List inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_sint_33__32_List::getter_locationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_33__32_List * p = (cCollectionElement_sint_33__32_List *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
    result = p->mObject.mAttribute_location ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_sint_33__32_List::getter_valueAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_33__32_List * p = (cCollectionElement_sint_33__32_List *) attributes.ptr () ;
  GALGAS_sint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
    result = p->mObject.mAttribute_value ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sint_33__32_List::cEnumerator_sint_33__32_List (const GALGAS_sint_33__32_List & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List_2D_element cEnumerator_sint_33__32_List::current (LOCATION_ARGS) const {
  const cCollectionElement_sint_33__32_List * p = (const cCollectionElement_sint_33__32_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_sint_33__32_List::current_location (LOCATION_ARGS) const {
  const cCollectionElement_sint_33__32_List * p = (const cCollectionElement_sint_33__32_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
  return p->mObject.mAttribute_location ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint cEnumerator_sint_33__32_List::current_value (LOCATION_ARGS) const {
  const cCollectionElement_sint_33__32_List * p = (const cCollectionElement_sint_33__32_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sint_33__32_List) ;
  return p->mObject.mAttribute_value ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                  @sint32List type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_33__32_List ("sint32List",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sint_33__32_List::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_33__32_List ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sint_33__32_List::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_33__32_List (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_33__32_List GALGAS_sint_33__32_List::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sint_33__32_List result ;
  const GALGAS_sint_33__32_List * p = (const GALGAS_sint_33__32_List *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_33__32_List *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint32List", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@sint_36__34_List' list                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sint_36__34_List : public cCollectionElement {
  public : GALGAS_sint_36__34_List_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sint_36__34_List (const GALGAS_location & in_location,
                                                const GALGAS_sint_36__34_ & in_value
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sint_36__34_List::cCollectionElement_sint_36__34_List (const GALGAS_location & in_location,
                                                                          const GALGAS_sint_36__34_ & in_value
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_location, in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sint_36__34_List::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sint_36__34_List::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sint_36__34_List (mObject.mAttribute_location, mObject.mAttribute_value COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sint_36__34_List::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "location" ":" ;
  mObject.mAttribute_location.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "value" ":" ;
  mObject.mAttribute_value.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sint_36__34_List::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sint_36__34_List * operand = (cCollectionElement_sint_36__34_List *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sint_36__34_List) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List::GALGAS_sint_36__34_List (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List::GALGAS_sint_36__34_List (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List GALGAS_sint_36__34_List::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_sint_36__34_List result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List GALGAS_sint_36__34_List::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                            const GALGAS_sint_36__34_ & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_List result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_sint_36__34_List::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_location & in_location,
                                                         const GALGAS_sint_36__34_ & in_value
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_sint_36__34_List * p = NULL ;
  macroMyNew (p, cCollectionElement_sint_36__34_List (in_location,
                                                      in_value COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::addAssign_operation (const GALGAS_location & inOperand0,
                                                   const GALGAS_sint_36__34_ & inOperand1
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sint_36__34_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                    const GALGAS_sint_36__34_ inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sint_36__34_List (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                    GALGAS_sint_36__34_ & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sint_36__34_List * p = (cCollectionElement_sint_36__34_List *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
      outOperand0 = p->mObject.mAttribute_location ;
      outOperand1 = p->mObject.mAttribute_value ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::setter_popFirst (GALGAS_location & outOperand0,
                                               GALGAS_sint_36__34_ & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_36__34_List * p = (cCollectionElement_sint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::setter_popLast (GALGAS_location & outOperand0,
                                              GALGAS_sint_36__34_ & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_36__34_List * p = (cCollectionElement_sint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::method_first (GALGAS_location & outOperand0,
                                            GALGAS_sint_36__34_ & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_36__34_List * p = (cCollectionElement_sint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::method_last (GALGAS_location & outOperand0,
                                           GALGAS_sint_36__34_ & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_36__34_List * p = (cCollectionElement_sint_36__34_List *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List GALGAS_sint_36__34_List::add_operation (const GALGAS_sint_36__34_List & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sint_36__34_List result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List GALGAS_sint_36__34_List::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_List result = GALGAS_sint_36__34_List::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List GALGAS_sint_36__34_List::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_List result = GALGAS_sint_36__34_List::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List GALGAS_sint_36__34_List::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_List result = GALGAS_sint_36__34_List::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sint_36__34_List::plusAssign_operation (const GALGAS_sint_36__34_List inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_sint_36__34_List::getter_locationAtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_36__34_List * p = (cCollectionElement_sint_36__34_List *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
    result = p->mObject.mAttribute_location ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_ GALGAS_sint_36__34_List::getter_valueAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sint_36__34_List * p = (cCollectionElement_sint_36__34_List *) attributes.ptr () ;
  GALGAS_sint_36__34_ result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
    result = p->mObject.mAttribute_value ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sint_36__34_List::cEnumerator_sint_36__34_List (const GALGAS_sint_36__34_List & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List_2D_element cEnumerator_sint_36__34_List::current (LOCATION_ARGS) const {
  const cCollectionElement_sint_36__34_List * p = (const cCollectionElement_sint_36__34_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_sint_36__34_List::current_location (LOCATION_ARGS) const {
  const cCollectionElement_sint_36__34_List * p = (const cCollectionElement_sint_36__34_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
  return p->mObject.mAttribute_location ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_ cEnumerator_sint_36__34_List::current_value (LOCATION_ARGS) const {
  const cCollectionElement_sint_36__34_List * p = (const cCollectionElement_sint_36__34_List *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sint_36__34_List) ;
  return p->mObject.mAttribute_value ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                  @sint64List type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_List ("sint64List",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sint_36__34_List::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_List ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sint_36__34_List::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_List (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_List GALGAS_sint_36__34_List::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_List result ;
  const GALGAS_sint_36__34_List * p = (const GALGAS_sint_36__34_List *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_List *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64List", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Class for element of '@floatList' list                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_floatList : public cCollectionElement {
  public : GALGAS_floatList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_floatList (const GALGAS_location & in_location,
                                         const GALGAS_double & in_value
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_floatList::cCollectionElement_floatList (const GALGAS_location & in_location,
                                                            const GALGAS_double & in_value
                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_location, in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_floatList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_floatList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_floatList (mObject.mAttribute_location, mObject.mAttribute_value COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_floatList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "location" ":" ;
  mObject.mAttribute_location.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "value" ":" ;
  mObject.mAttribute_value.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_floatList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_floatList * operand = (cCollectionElement_floatList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_floatList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList::GALGAS_floatList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList::GALGAS_floatList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList GALGAS_floatList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_floatList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList GALGAS_floatList::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                              const GALGAS_double & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_floatList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_floatList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GALGAS_location & in_location,
                                                  const GALGAS_double & in_value
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_floatList * p = NULL ;
  macroMyNew (p, cCollectionElement_floatList (in_location,
                                               in_value COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::addAssign_operation (const GALGAS_location & inOperand0,
                                            const GALGAS_double & inOperand1
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_floatList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                             const GALGAS_double inOperand1,
                                             const GALGAS_uint inInsertionIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_floatList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                             GALGAS_double & outOperand1,
                                             const GALGAS_uint inRemoveIndex,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_floatList * p = (cCollectionElement_floatList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_floatList) ;
      outOperand0 = p->mObject.mAttribute_location ;
      outOperand1 = p->mObject.mAttribute_value ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::setter_popFirst (GALGAS_location & outOperand0,
                                        GALGAS_double & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_floatList * p = (cCollectionElement_floatList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_floatList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::setter_popLast (GALGAS_location & outOperand0,
                                       GALGAS_double & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_floatList * p = (cCollectionElement_floatList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_floatList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::method_first (GALGAS_location & outOperand0,
                                     GALGAS_double & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_floatList * p = (cCollectionElement_floatList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_floatList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::method_last (GALGAS_location & outOperand0,
                                    GALGAS_double & outOperand1,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_floatList * p = (cCollectionElement_floatList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_floatList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList GALGAS_floatList::add_operation (const GALGAS_floatList & inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_floatList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList GALGAS_floatList::getter_subListWithRange (const GALGAS_range & inRange,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_floatList result = GALGAS_floatList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList GALGAS_floatList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_floatList result = GALGAS_floatList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList GALGAS_floatList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_floatList result = GALGAS_floatList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_floatList::plusAssign_operation (const GALGAS_floatList inOperand,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_floatList::getter_locationAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_floatList * p = (cCollectionElement_floatList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_floatList) ;
    result = p->mObject.mAttribute_location ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_double GALGAS_floatList::getter_valueAtIndex (const GALGAS_uint & inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_floatList * p = (cCollectionElement_floatList *) attributes.ptr () ;
  GALGAS_double result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_floatList) ;
    result = p->mObject.mAttribute_value ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_floatList::cEnumerator_floatList (const GALGAS_floatList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList_2D_element cEnumerator_floatList::current (LOCATION_ARGS) const {
  const cCollectionElement_floatList * p = (const cCollectionElement_floatList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_floatList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_floatList::current_location (LOCATION_ARGS) const {
  const cCollectionElement_floatList * p = (const cCollectionElement_floatList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_floatList) ;
  return p->mObject.mAttribute_location ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_double cEnumerator_floatList::current_value (LOCATION_ARGS) const {
  const cCollectionElement_floatList * p = (const cCollectionElement_floatList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_floatList) ;
  return p->mObject.mAttribute_value ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                   @floatList type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_floatList ("floatList",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_floatList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_floatList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_floatList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_floatList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_floatList GALGAS_floatList::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_floatList result ;
  const GALGAS_floatList * p = (const GALGAS_floatList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_floatList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("floatList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       Class for element of '@numberList' list                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_numberList : public cCollectionElement {
  public : GALGAS_numberList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_numberList (const GALGAS_location & in_location,
                                          const GALGAS_object_5F_t & in_value
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_numberList::cCollectionElement_numberList (const GALGAS_location & in_location,
                                                              const GALGAS_object_5F_t & in_value
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_location, in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_numberList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_numberList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_numberList (mObject.mAttribute_location, mObject.mAttribute_value COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_numberList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "location" ":" ;
  mObject.mAttribute_location.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "value" ":" ;
  mObject.mAttribute_value.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_numberList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_numberList * operand = (cCollectionElement_numberList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_numberList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList::GALGAS_numberList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList::GALGAS_numberList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList GALGAS_numberList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_numberList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList GALGAS_numberList::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                const GALGAS_object_5F_t & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_numberList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_numberList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_location & in_location,
                                                   const GALGAS_object_5F_t & in_value
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_numberList * p = NULL ;
  macroMyNew (p, cCollectionElement_numberList (in_location,
                                                in_value COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::addAssign_operation (const GALGAS_location & inOperand0,
                                             const GALGAS_object_5F_t & inOperand1
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_numberList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                              const GALGAS_object_5F_t inOperand1,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_numberList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                              GALGAS_object_5F_t & outOperand1,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_numberList * p = (cCollectionElement_numberList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_numberList) ;
      outOperand0 = p->mObject.mAttribute_location ;
      outOperand1 = p->mObject.mAttribute_value ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::setter_popFirst (GALGAS_location & outOperand0,
                                         GALGAS_object_5F_t & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_numberList * p = (cCollectionElement_numberList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_numberList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::setter_popLast (GALGAS_location & outOperand0,
                                        GALGAS_object_5F_t & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_numberList * p = (cCollectionElement_numberList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_numberList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::method_first (GALGAS_location & outOperand0,
                                      GALGAS_object_5F_t & outOperand1,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_numberList * p = (cCollectionElement_numberList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_numberList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::method_last (GALGAS_location & outOperand0,
                                     GALGAS_object_5F_t & outOperand1,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_numberList * p = (cCollectionElement_numberList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_numberList) ;
    outOperand0 = p->mObject.mAttribute_location ;
    outOperand1 = p->mObject.mAttribute_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList GALGAS_numberList::add_operation (const GALGAS_numberList & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_numberList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList GALGAS_numberList::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_numberList result = GALGAS_numberList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList GALGAS_numberList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_numberList result = GALGAS_numberList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList GALGAS_numberList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_numberList result = GALGAS_numberList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_numberList::plusAssign_operation (const GALGAS_numberList inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_numberList::getter_locationAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_numberList * p = (cCollectionElement_numberList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_numberList) ;
    result = p->mObject.mAttribute_location ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_object_5F_t GALGAS_numberList::getter_valueAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_numberList * p = (cCollectionElement_numberList *) attributes.ptr () ;
  GALGAS_object_5F_t result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_numberList) ;
    result = p->mObject.mAttribute_value ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_numberList::cEnumerator_numberList (const GALGAS_numberList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList_2D_element cEnumerator_numberList::current (LOCATION_ARGS) const {
  const cCollectionElement_numberList * p = (const cCollectionElement_numberList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_numberList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_numberList::current_location (LOCATION_ARGS) const {
  const cCollectionElement_numberList * p = (const cCollectionElement_numberList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_numberList) ;
  return p->mObject.mAttribute_location ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_object_5F_t cEnumerator_numberList::current_value (LOCATION_ARGS) const {
  const cCollectionElement_numberList * p = (const cCollectionElement_numberList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_numberList) ;
  return p->mObject.mAttribute_value ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                  @numberList type                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_numberList ("numberList",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_numberList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_numberList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_numberList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_numberList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_numberList GALGAS_numberList::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_numberList result ;
  const GALGAS_numberList * p = (const GALGAS_numberList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_numberList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("numberList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Class for element of '@locationList' list                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_locationList : public cCollectionElement {
  public : GALGAS_locationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_locationList (const GALGAS_location & in_location
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_locationList::cCollectionElement_locationList (const GALGAS_location & in_location
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_location) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_locationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_locationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_locationList (mObject.mAttribute_location COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_locationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "location" ":" ;
  mObject.mAttribute_location.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_locationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_locationList * operand = (cCollectionElement_locationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_locationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList::GALGAS_locationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList::GALGAS_locationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList GALGAS_locationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_locationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList GALGAS_locationList::constructor_listWithValue (const GALGAS_location & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_locationList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_locationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_location & in_location
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_locationList * p = NULL ;
  macroMyNew (p, cCollectionElement_locationList (in_location COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::addAssign_operation (const GALGAS_location & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_locationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_locationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_locationList * p = (cCollectionElement_locationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_locationList) ;
      outOperand0 = p->mObject.mAttribute_location ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::setter_popFirst (GALGAS_location & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_locationList * p = (cCollectionElement_locationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_locationList) ;
    outOperand0 = p->mObject.mAttribute_location ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::setter_popLast (GALGAS_location & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_locationList * p = (cCollectionElement_locationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_locationList) ;
    outOperand0 = p->mObject.mAttribute_location ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::method_first (GALGAS_location & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_locationList * p = (cCollectionElement_locationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_locationList) ;
    outOperand0 = p->mObject.mAttribute_location ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::method_last (GALGAS_location & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_locationList * p = (cCollectionElement_locationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_locationList) ;
    outOperand0 = p->mObject.mAttribute_location ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList GALGAS_locationList::add_operation (const GALGAS_locationList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_locationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList GALGAS_locationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_locationList result = GALGAS_locationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList GALGAS_locationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_locationList result = GALGAS_locationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList GALGAS_locationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_locationList result = GALGAS_locationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_locationList::plusAssign_operation (const GALGAS_locationList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_locationList::getter_locationAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_locationList * p = (cCollectionElement_locationList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_locationList) ;
    result = p->mObject.mAttribute_location ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_locationList::cEnumerator_locationList (const GALGAS_locationList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList_2D_element cEnumerator_locationList::current (LOCATION_ARGS) const {
  const cCollectionElement_locationList * p = (const cCollectionElement_locationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_locationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_locationList::current_location (LOCATION_ARGS) const {
  const cCollectionElement_locationList * p = (const cCollectionElement_locationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_locationList) ;
  return p->mObject.mAttribute_location ;
}




//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @locationList type                                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_locationList ("locationList",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_locationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_locationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_locationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_locationList GALGAS_locationList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_locationList result ;
  const GALGAS_locationList * p = (const GALGAS_locationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_locationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("locationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_implementationObjectMap::cMapElement_implementationObjectMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_impType & in_type
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_type (in_type) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_implementationObjectMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_type.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_implementationObjectMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_implementationObjectMap (mAttribute_lkey, mAttribute_type COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_implementationObjectMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mAttribute_type.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_implementationObjectMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_implementationObjectMap * operand = (cMapElement_implementationObjectMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (operand->mAttribute_type) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap::GALGAS_implementationObjectMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap::GALGAS_implementationObjectMap (const GALGAS_implementationObjectMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap & GALGAS_implementationObjectMap::operator = (const GALGAS_implementationObjectMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap GALGAS_implementationObjectMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_implementationObjectMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap GALGAS_implementationObjectMap::constructor_mapWithMapToOverride (const GALGAS_implementationObjectMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_implementationObjectMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap GALGAS_implementationObjectMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_implementationObjectMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementationObjectMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_impType & inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_implementationObjectMap * p = NULL ;
  macroMyNew (p, cMapElement_implementationObjectMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@implementationObjectMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementationObjectMap::setter_put (GALGAS_lstring inKey,
                                                 GALGAS_impType inArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_implementationObjectMap * p = NULL ;
  macroMyNew (p, cMapElement_implementationObjectMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "%K is duplicated in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_implementationObjectMap_get = "%K does not exists" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementationObjectMap::method_get (GALGAS_lstring inKey,
                                                 GALGAS_impType & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_implementationObjectMap * p = (const cMapElement_implementationObjectMap *) performSearch (inKey,
                                                                                                                 inCompiler,
                                                                                                                 kSearchErrorMessage_implementationObjectMap_get
                                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_implementationObjectMap) ;
    outArgument0 = p->mAttribute_type ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementationObjectMap::setter_del (GALGAS_lstring inKey,
                                                 GALGAS_impType & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "%K does not exists" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_implementationObjectMap * p = (cMapElement_implementationObjectMap *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_implementationObjectMap) ;
    outArgument0 = p->mAttribute_type ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impType GALGAS_implementationObjectMap::getter_typeForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_implementationObjectMap * p = (const cMapElement_implementationObjectMap *) attributes ;
  GALGAS_impType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_implementationObjectMap) ;
    result = p->mAttribute_type ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implementationObjectMap::setter_setTypeForKey (GALGAS_impType inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_implementationObjectMap * p = (cMapElement_implementationObjectMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_implementationObjectMap) ;
    p->mAttribute_type = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_implementationObjectMap * GALGAS_implementationObjectMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_implementationObjectMap * result = (cMapElement_implementationObjectMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_implementationObjectMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_implementationObjectMap::cEnumerator_implementationObjectMap (const GALGAS_implementationObjectMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap_2D_element cEnumerator_implementationObjectMap::current (LOCATION_ARGS) const {
  const cMapElement_implementationObjectMap * p = (const cMapElement_implementationObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_implementationObjectMap) ;
  return GALGAS_implementationObjectMap_2D_element (p->mAttribute_lkey, p->mAttribute_type) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_implementationObjectMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impType cEnumerator_implementationObjectMap::current_type (LOCATION_ARGS) const {
  const cMapElement_implementationObjectMap * p = (const cMapElement_implementationObjectMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_implementationObjectMap) ;
  return p->mAttribute_type ;
}



//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @implementationObjectMap type                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implementationObjectMap ("implementationObjectMap",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implementationObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implementationObjectMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implementationObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implementationObjectMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implementationObjectMap GALGAS_implementationObjectMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_implementationObjectMap result ;
  const GALGAS_implementationObjectMap * p = (const GALGAS_implementationObjectMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implementationObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implementationObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

