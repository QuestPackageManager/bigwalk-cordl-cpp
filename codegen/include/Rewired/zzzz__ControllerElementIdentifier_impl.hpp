#pragma once
// IWYU pragma private; include "Rewired/ControllerElementIdentifier.hpp"
#include "Rewired/zzzz__CompoundControllerElementType_impl.hpp"
#include "Rewired/zzzz__ControllerElementType_impl.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "GlobalNamespace/zzzz__GpCuHKfXoRqwihcmEJUyWJhkNthK_def.hpp"
#include "GlobalNamespace/zzzz__JarUttPZRYFOEJIFSBWmBVxuYbQN_def.hpp"
#include "GlobalNamespace/zzzz__KlcNeaFZiwoAzlYmohbMFFSmhxYd_def.hpp"
#include "GlobalNamespace/zzzz__SGZfJCNLInnIUumEtCtBXYlOQhsU_def.hpp"
#include "GlobalNamespace/zzzz__TGbAqoAgqxsdeSiwLvSpgroOIkcib_def.hpp"
#include "GlobalNamespace/zzzz__TlnDQDJutNeXhSxuqvmVfatGcyhTA_def.hpp"
#include "GlobalNamespace/zzzz__aaIrhkVuamEdkpKYgMrcawdVREgJ_def.hpp"
#include "GlobalNamespace/zzzz__eGmImcKGyEsJPJCQSUkoCBhwzSsD_def.hpp"
#include "GlobalNamespace/zzzz__ilReClayUpFdClpKxnBeDJuNJPBMA_def.hpp"
#include "GlobalNamespace/zzzz__ouWSVQLKLBsyPFpWqrcklvMHMGEv_def.hpp"
#include "GlobalNamespace/zzzz__pdxFodpYBVlInXmvyarVvjZQMTER_def.hpp"
#include "GlobalNamespace/zzzz__szsTBbiGxmpHSDpmkXmdItruKKbl_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerElementIdentifierCommon_Internal_def.hpp"
#include "Rewired/Internal/Localization/zzzz__DeviceLocalizationInfo_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__CompoundControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::*)()>(&::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_positiveName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveName;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_positiveName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveName;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_positiveName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positiveName = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_negativeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeName;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_negativeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeName;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_negativeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___negativeName = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_positiveKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveKey;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_positiveKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveKey;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_positiveKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positiveKey = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_negativeKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeKey;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_negativeKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeKey;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_negativeKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___negativeKey = value;
}
constexpr ::Rewired::ControllerElementType& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_elementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementType;
}
constexpr ::Rewired::ControllerElementType const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_elementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementType;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_elementType(::Rewired::ControllerElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementType = value;
}
constexpr ::Rewired::CompoundControllerElementType& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_compoundElementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElementType;
}
constexpr ::Rewired::CompoundControllerElementType const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_compoundElementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElementType;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_compoundElementType(::Rewired::CompoundControllerElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compoundElementType = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_role()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___role;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_get_role() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___role;
}
constexpr void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::__cordl_internal_set_role(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___role = value;
}
inline void Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC* Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>());
}
// Ctor Parameters []
constexpr ::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC()   {
}
//  Writing Method size for method: ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::*)()>(&::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD.YDWMeJItzwYaOcUNsfvikUoRYzlI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::*)(::Rewired::ControllerElementIdentifier*, ::Rewired::ControllerElementIdentifier*)>(&::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::YDWMeJItzwYaOcUNsfvikUoRYzlI)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18199a900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>(),
                        {"YDWMeJItzwYaOcUNsfvikUoRYzlI", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::setStaticF___9(::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*  value)  {
::cordl_internals::setStaticField<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*, "<>9", ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>(std::forward<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>(value));
}
inline ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD* Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*, "<>9", ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>();
}
inline void Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::setStaticF___9__4_0(::System::Func_3<::Rewired::ControllerElementIdentifier*,::Rewired::ControllerElementIdentifier*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Rewired::ControllerElementIdentifier*,::Rewired::ControllerElementIdentifier*,bool>*, "<>9__4_0", ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>(std::forward<::System::Func_3<::Rewired::ControllerElementIdentifier*,::Rewired::ControllerElementIdentifier*,bool>*>(value));
}
inline ::System::Func_3<::Rewired::ControllerElementIdentifier*,::Rewired::ControllerElementIdentifier*,bool>* Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Rewired::ControllerElementIdentifier*,::Rewired::ControllerElementIdentifier*,bool>*, "<>9__4_0", ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>();
}
inline void Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::YDWMeJItzwYaOcUNsfvikUoRYzlI(::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>(),
                        {"YDWMeJItzwYaOcUNsfvikUoRYzlI", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD* Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD*>());
}
// Ctor Parameters []
constexpr ::Rewired::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD::xBhulLhulVPgkuxEZtLlrRMLsmSk_ControllerElementIdentifier_xOiZUDLVAAmpRmEoEAyUeYycwuaD()   {
}
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk.BnREpPhQshhuzapVDJsdYecjQbDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk* (*)()>(&::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::BnREpPhQshhuzapVDJsdYecjQbDs)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18199a430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"BnREpPhQshhuzapVDJsdYecjQbDs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::*)()>(&::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18199a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk.lOTUEnHnVAHihuzhgdyIqemtslzp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::*)()>(&::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::lOTUEnHnVAHihuzhgdyIqemtslzp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18199a890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"lOTUEnHnVAHihuzhgdyIqemtslzp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk.WXlVgSwsJoKaNKRgfaqbZLwGVYzB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::*)()>(&::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::WXlVgSwsJoKaNKRgfaqbZLwGVYzB)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18199a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"WXlVgSwsJoKaNKRgfaqbZLwGVYzB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk.fwIboaHEcwMHBTjDRkLFcmxBUNip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (*)(::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::Rewired::ControllerElementIdentifier*)>(&::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::fwIboaHEcwMHBTjDRkLFcmxBUNip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18199a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"fwIboaHEcwMHBTjDRkLFcmxBUNip", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk.FssFRAlRQgDrDCKJHLoBpTnYqEQNA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::Rewired::ControllerElementIdentifier*, ::by_ref<::Rewired::ControllerElementIdentifier*>)>(&::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::FssFRAlRQgDrDCKJHLoBpTnYqEQNA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18199a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"FssFRAlRQgDrDCKJHLoBpTnYqEQNA", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<::by_ref<::Rewired::ControllerElementIdentifier*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk.HESsXEPExdQWsDBBChphRvTXskke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::Rewired::ControllerElementIdentifier*)>(&::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::HESsXEPExdQWsDBBChphRvTXskke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18199a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"HESsXEPExdQWsDBBChphRvTXskke", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GpCuHKfXoRqwihcmEJUyWJhkNthK<::Rewired::ControllerElementIdentifier*>*& Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::__cordl_internal_get_eLoYCBfohJJyHRotbTYUrFNKkLCm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eLoYCBfohJJyHRotbTYUrFNKkLCm;
}
constexpr ::GlobalNamespace::GpCuHKfXoRqwihcmEJUyWJhkNthK<::Rewired::ControllerElementIdentifier*>* const& Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::__cordl_internal_get_eLoYCBfohJJyHRotbTYUrFNKkLCm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eLoYCBfohJJyHRotbTYUrFNKkLCm;
}
constexpr void Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::__cordl_internal_set_eLoYCBfohJJyHRotbTYUrFNKkLCm(::GlobalNamespace::GpCuHKfXoRqwihcmEJUyWJhkNthK<::Rewired::ControllerElementIdentifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eLoYCBfohJJyHRotbTYUrFNKkLCm = value;
}
inline void Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::setStaticF_MDBUccVBhtfwcSqyyXfkCkzTqGfW(::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*  value)  {
::cordl_internals::setStaticField<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*, "MDBUccVBhtfwcSqyyXfkCkzTqGfW", ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(std::forward<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(value));
}
inline ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk* Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::getStaticF_MDBUccVBhtfwcSqyyXfkCkzTqGfW()  {
return ::cordl_internals::getStaticField<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*, "MDBUccVBhtfwcSqyyXfkCkzTqGfW", ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>();
}
inline ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk* Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::BnREpPhQshhuzapVDJsdYecjQbDs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"BnREpPhQshhuzapVDJsdYecjQbDs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(nullptr, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::lOTUEnHnVAHihuzhgdyIqemtslzp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"lOTUEnHnVAHihuzhgdyIqemtslzp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::WXlVgSwsJoKaNKRgfaqbZLwGVYzB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"WXlVgSwsJoKaNKRgfaqbZLwGVYzB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::fwIboaHEcwMHBTjDRkLFcmxBUNip(::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"fwIboaHEcwMHBTjDRkLFcmxBUNip", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::FssFRAlRQgDrDCKJHLoBpTnYqEQNA(::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::ControllerElementIdentifier*>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"FssFRAlRQgDrDCKJHLoBpTnYqEQNA", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<::by_ref<::Rewired::ControllerElementIdentifier*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::HESsXEPExdQWsDBBChphRvTXskke(::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>(),
                        {"HESsXEPExdQWsDBBChphRvTXskke", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk* Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk*>());
}
// Ctor Parameters []
constexpr ::Rewired::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk::ControllerElementIdentifier_xBhulLhulVPgkuxEZtLlrRMLsmSk()   {
}
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV.vadtvZuEoEXMekoveZSKVMUwgsUhA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::*)()>(&::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::vadtvZuEoEXMekoveZSKVMUwgsUhA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"vadtvZuEoEXMekoveZSKVMUwgsUhA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV.zJNysyElkVwzngNuklQzDRmDdLsN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::*)(::StringW)>(&::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::zJNysyElkVwzngNuklQzDRmDdLsN)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"zJNysyElkVwzngNuklQzDRmDdLsN", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV.GGEFwBLnKOnjjBjaCloXuYzjHqMo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::*)()>(&::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::GGEFwBLnKOnjjBjaCloXuYzjHqMo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"GGEFwBLnKOnjjBjaCloXuYzjHqMo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV.YdFHaTiufSAqZBLQgeiawLALjXssA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::*)(::StringW)>(&::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::YdFHaTiufSAqZBLQgeiawLALjXssA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"YdFHaTiufSAqZBLQgeiawLALjXssA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::*)()>(&::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::*)(::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*)>(&::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18199a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::__cordl_internal_get_FOwIakyIcBsJqhDHwEhourMSgLZp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FOwIakyIcBsJqhDHwEhourMSgLZp;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::__cordl_internal_get_FOwIakyIcBsJqhDHwEhourMSgLZp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FOwIakyIcBsJqhDHwEhourMSgLZp;
}
constexpr void Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::__cordl_internal_set_FOwIakyIcBsJqhDHwEhourMSgLZp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FOwIakyIcBsJqhDHwEhourMSgLZp = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::__cordl_internal_get_HnqybNJxXvougSWCcCXfJSsFHtWE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HnqybNJxXvougSWCcCXfJSsFHtWE;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::__cordl_internal_get_HnqybNJxXvougSWCcCXfJSsFHtWE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HnqybNJxXvougSWCcCXfJSsFHtWE;
}
constexpr void Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::__cordl_internal_set_HnqybNJxXvougSWCcCXfJSsFHtWE(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HnqybNJxXvougSWCcCXfJSsFHtWE = value;
}
inline ::StringW Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::vadtvZuEoEXMekoveZSKVMUwgsUhA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"vadtvZuEoEXMekoveZSKVMUwgsUhA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::zJNysyElkVwzngNuklQzDRmDdLsN(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"zJNysyElkVwzngNuklQzDRmDdLsN", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::GGEFwBLnKOnjjBjaCloXuYzjHqMo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"GGEFwBLnKOnjjBjaCloXuYzjHqMo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::YdFHaTiufSAqZBLQgeiawLALjXssA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {"YdFHaTiufSAqZBLQgeiawLALjXssA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::_ctor(::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV* Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>());
}
inline ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV* Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::New_ctor(::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV()   {
}
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_name)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181984a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::set_name)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181984ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_positiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_positiveName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181984ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_positiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.set_positiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::set_positiveName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_positiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_negativeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_negativeName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181984bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_negativeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.set_negativeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::set_negativeName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_negativeName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetCompoundElementSpecialName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::GetCompoundElementSpecialName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819836a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetCompoundElementSpecialName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_elementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_compoundElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::CompoundControllerElementType (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_compoundElementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180e25b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_compoundElementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_glyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_glyph)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819849e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_glyph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_positiveGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_positiveGlyph)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_positiveGlyph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_negativeGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_negativeGlyph)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_negativeGlyph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.YETimSpSQGYEWlYFNvXumNNVrhzU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::YETimSpSQGYEWlYFNvXumNNVrhzU)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"YETimSpSQGYEWlYFNvXumNNVrhzU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.ocxzvbttbhonouqunMaqJqNgwArs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::ocxzvbttbhonouqunMaqJqNgwArs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"ocxzvbttbhonouqunMaqJqNgwArs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.nJWanyDVybJXNnTSjNIzBdCArQoDc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::nJWanyDVybJXNnTSjNIzBdCArQoDc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"nJWanyDVybJXNnTSjNIzBdCArQoDc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetCompoundElementSpecialGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::GetCompoundElementSpecialGlyph)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181983600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetCompoundElementSpecialGlyph", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetCompoundElementSpecialFinalGlyphKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::GetCompoundElementSpecialFinalGlyphKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181983560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetCompoundElementSpecialFinalGlyphKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_nonLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_nonLocalizedName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_nonLocalizedName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.set_nonLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::set_nonLocalizedName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181984ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_nonLocalizedName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_nonLocalizedPositiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_nonLocalizedPositiveName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_nonLocalizedPositiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.set_nonLocalizedPositiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::set_nonLocalizedPositiveName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_nonLocalizedPositiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_nonLocalizedNegativeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_nonLocalizedNegativeName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_nonLocalizedNegativeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.set_nonLocalizedNegativeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::set_nonLocalizedNegativeName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181984f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_nonLocalizedNegativeName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_positiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_positiveKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_positiveKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_negativeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_negativeKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_negativeKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_role
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_role)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_role", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_isCompoundElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::get_isCompoundElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181984a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_isCompoundElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_nonLocalizedName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedPositiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedPositiveName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_nonLocalizedPositiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedNegativeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedNegativeName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_nonLocalizedNegativeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_GetSpecialElementNonLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_GetSpecialElementNonLocalizedName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181983fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.GetSpecialElementNonLocalizedName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNonLocalizedPositiveNameAutoGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNonLocalizedPositiveNameAutoGenerated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181984080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isNonLocalizedPositiveNameAutoGenerated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNonLocalizedNegativeNameAutoGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNonLocalizedNegativeNameAutoGenerated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181984070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isNonLocalizedNegativeNameAutoGenerated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isPositiveKeyAutoGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isPositiveKeyAutoGenerated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181984090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isPositiveKeyAutoGenerated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNegativeKeyAutoGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNegativeKeyAutoGenerated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181984060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isNegativeKeyAutoGenerated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_positiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_positiveKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_positiveKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_negativeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_negativeKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_negativeKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_GetSpecialElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_GetSpecialElementKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181983f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.GetSpecialElementKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_deviceLocalizationInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::Localization::DeviceLocalizationInfo* (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_deviceLocalizationInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_deviceLocalizationInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::Rewired::ControllerElementIdentifier*)>(&::Rewired::ControllerElementIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181984620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*)>(&::Rewired::ControllerElementIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181984530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(int32_t, ::StringW, ::StringW, ::StringW, ::Rewired::ControllerElementType, ::Rewired::CompoundControllerElementType, bool)>(&::Rewired::ControllerElementIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181984810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::CompoundControllerElementType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(int32_t, ::StringW, ::StringW, ::StringW, ::Rewired::ControllerElementType, bool)>(&::Rewired::ControllerElementIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1819843c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::Rewired::ControllerElementIdentifier*, bool, ::Rewired::ControllerElementType)>(&::Rewired::ControllerElementIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819845f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819832a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(::Rewired::ControllerElementType, ::Rewired::AxisRange)>(&::Rewired::ControllerElementIdentifier::GetDisplayName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181983750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetDisplayName", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(::Rewired::AxisRange)>(&::Rewired::ControllerElementIdentifier::GetDisplayName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1819838b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetDisplayName", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerElementIdentifier::*)(::Rewired::ControllerElementType, ::Rewired::AxisRange)>(&::Rewired::ControllerElementIdentifier::GetGlyph)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181983e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerElementIdentifier::*)(::Rewired::AxisRange)>(&::Rewired::ControllerElementIdentifier::GetGlyph)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181983cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetFinalGlyphKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(::Rewired::ControllerElementType, ::Rewired::AxisRange)>(&::Rewired::ControllerElementIdentifier::GetFinalGlyphKey)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181983b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetFinalGlyphKey", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.GetFinalGlyphKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(::Rewired::AxisRange)>(&::Rewired::ControllerElementIdentifier::GetFinalGlyphKey)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181983a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetFinalGlyphKey", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_elementType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181984030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_useEditorElementTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_useEditorElementTypeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_useEditorElementTypeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_editorElementTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_editorElementTypeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_editorElementTypeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.uZgfHxCVIzmoJonwRtmslhRNCTEn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::uZgfHxCVIzmoJonwRtmslhRNCTEn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181985060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"uZgfHxCVIzmoJonwRtmslhRNCTEn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.FinishRuntimeSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::Rewired::ControllerType)>(&::Rewired::ControllerElementIdentifier::FinishRuntimeSetup)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1819832e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"FinishRuntimeSetup", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.get_BlankReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (*)()>(&::Rewired::ControllerElementIdentifier::get_BlankReadOnly)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181984970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_BlankReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.ToElementNameLocalizerTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::ControllerElementType, ::Rewired::CompoundControllerElementType, ::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_lyYnxgykwvOmykWBuGmMtGqjBdhI>, ::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_EWxchajkJYNDVizpEuMvllCvRLYQ>)>(&::Rewired::ControllerElementIdentifier::ToElementNameLocalizerTypes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819842e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"ToElementNameLocalizerTypes", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::CompoundControllerElementType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_lyYnxgykwvOmykWBuGmMtGqjBdhI>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_EWxchajkJYNDVizpEuMvllCvRLYQ>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_INameLocalizerSource_get_keyCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_keyCategory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181919f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_keyCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_INameLocalizerSource_get_scriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_scriptingName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_scriptingName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_INameLocalizerSource_get_nonLocalizedDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_nonLocalizedDescriptiveName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_nonLocalizedDescriptiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_INameLocalizerSource_set_nonLocalizedDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_set_nonLocalizedDescriptiveName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181984210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.set_nonLocalizedDescriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_get_nonLocalizedPositiveDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_nonLocalizedPositiveDescriptiveName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_nonLocalizedPositiveDescriptiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_set_nonLocalizedPositiveDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_nonLocalizedPositiveDescriptiveName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819841e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_nonLocalizedPositiveDescriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_get_nonLocalizedNegativeDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_nonLocalizedNegativeDescriptiveName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_nonLocalizedNegativeDescriptiveName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_set_nonLocalizedNegativeDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_nonLocalizedNegativeDescriptiveName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819841b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_nonLocalizedNegativeDescriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_INameLocalizerSource_get_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_get_positiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_positiveKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_positiveKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_set_positiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_positiveKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819840d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_positiveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_get_negativeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_negativeKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_negativeKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_IAxisNameLocalizerSource_set_negativeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_negativeKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819840a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_negativeKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_INameLocalizerSource_get_autoGeneratedValueFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_autoGeneratedValueFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_autoGeneratedValueFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_INameLocalizerSource_set_autoGeneratedValueFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_set_autoGeneratedValueFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.set_autoGeneratedValueFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_GetSpecialElementNonLocalizedDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_GetSpecialElementNonLocalizedDescriptiveName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181984240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.GetSpecialElementNonLocalizedDescriptiveName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_SetSpecialElementNonLocalizedDescriptiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(int32_t, ::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_SetSpecialElementNonLocalizedDescriptiveName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181984290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.SetSpecialElementNonLocalizedDescriptiveName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_GetSpecialElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_GetSpecialElementKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181984110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.GetSpecialElementKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_SetSpecialElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(int32_t, ::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_SetSpecialElementKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181984160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.SetSpecialElementKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IGlyphKeySource_get_keyCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_get_keyCategory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181984100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.get_keyCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IGlyphKeySource_get_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_get_key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.get_key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IGlyphKeySource_get_autoGeneratedValueFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_get_autoGeneratedValueFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.get_autoGeneratedValueFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IGlyphKeySource_set_autoGeneratedValueFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_set_autoGeneratedValueFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.set_autoGeneratedValueFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IAxisGlyphKeySource_get_positiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_get_positiveKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.get_positiveKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IAxisGlyphKeySource_set_positiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_set_positiveKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819840d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.set_positiveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IAxisGlyphKeySource_get_negativeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)()>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_get_negativeKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.get_negativeKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_IAxisGlyphKeySource_set_negativeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_set_negativeKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819840a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.set_negativeKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_ISpecialElementGlyphKeySource_GetSpecialElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerElementIdentifier::*)(int32_t)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_ISpecialElementGlyphKeySource_GetSpecialElementKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181984110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.ISpecialElementGlyphKeySource.GetSpecialElementKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerElementIdentifier.Rewired_Internal_Glyphs_ISpecialElementGlyphKeySource_SetSpecialElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerElementIdentifier::*)(int32_t, ::StringW)>(&::Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_ISpecialElementGlyphKeySource_SetSpecialElementKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181984160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.ISpecialElementGlyphKeySource.SetSpecialElementKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerElementIdentifier::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr int32_t const& Rewired::ControllerElementIdentifier::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier::__cordl_internal_get__positiveName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveName;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier::__cordl_internal_get__positiveName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveName;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__positiveName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positiveName = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier::__cordl_internal_get__negativeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeName;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier::__cordl_internal_get__negativeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeName;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__negativeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____negativeName = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier::__cordl_internal_get__key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier::__cordl_internal_get__key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____key = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier::__cordl_internal_get__positiveKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveKey;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier::__cordl_internal_get__positiveKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positiveKey;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__positiveKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positiveKey = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier::__cordl_internal_get__negativeKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeKey;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier::__cordl_internal_get__negativeKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negativeKey;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__negativeKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____negativeKey = value;
}
constexpr ::Rewired::ControllerElementType& Rewired::ControllerElementIdentifier::__cordl_internal_get__elementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr ::Rewired::ControllerElementType const& Rewired::ControllerElementIdentifier::__cordl_internal_get__elementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__elementType(::Rewired::ControllerElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementType = value;
}
constexpr ::Rewired::CompoundControllerElementType& Rewired::ControllerElementIdentifier::__cordl_internal_get__compoundElementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compoundElementType;
}
constexpr ::Rewired::CompoundControllerElementType const& Rewired::ControllerElementIdentifier::__cordl_internal_get__compoundElementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compoundElementType;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__compoundElementType(::Rewired::CompoundControllerElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compoundElementType = value;
}
constexpr ::StringW& Rewired::ControllerElementIdentifier::__cordl_internal_get__role()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____role;
}
constexpr ::StringW const& Rewired::ControllerElementIdentifier::__cordl_internal_get__role() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____role;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set__role(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____role = value;
}
constexpr bool& Rewired::ControllerElementIdentifier::__cordl_internal_get_PbwfowBIMiEzicwrHAGdBCWUIUoeA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PbwfowBIMiEzicwrHAGdBCWUIUoeA;
}
constexpr bool const& Rewired::ControllerElementIdentifier::__cordl_internal_get_PbwfowBIMiEzicwrHAGdBCWUIUoeA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PbwfowBIMiEzicwrHAGdBCWUIUoeA;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_PbwfowBIMiEzicwrHAGdBCWUIUoeA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PbwfowBIMiEzicwrHAGdBCWUIUoeA = value;
}
constexpr ::GlobalNamespace::ouWSVQLKLBsyPFpWqrcklvMHMGEv*& Rewired::ControllerElementIdentifier::__cordl_internal_get_NLcWJIgytXokJDvoYwVahBTEgvrM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NLcWJIgytXokJDvoYwVahBTEgvrM;
}
constexpr ::GlobalNamespace::ouWSVQLKLBsyPFpWqrcklvMHMGEv* const& Rewired::ControllerElementIdentifier::__cordl_internal_get_NLcWJIgytXokJDvoYwVahBTEgvrM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NLcWJIgytXokJDvoYwVahBTEgvrM;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_NLcWJIgytXokJDvoYwVahBTEgvrM(::GlobalNamespace::ouWSVQLKLBsyPFpWqrcklvMHMGEv*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NLcWJIgytXokJDvoYwVahBTEgvrM = value;
}
constexpr ::GlobalNamespace::JarUttPZRYFOEJIFSBWmBVxuYbQN*& Rewired::ControllerElementIdentifier::__cordl_internal_get_DSKuARWyOVwokFHRWrZUpjPjlQIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DSKuARWyOVwokFHRWrZUpjPjlQIK;
}
constexpr ::GlobalNamespace::JarUttPZRYFOEJIFSBWmBVxuYbQN* const& Rewired::ControllerElementIdentifier::__cordl_internal_get_DSKuARWyOVwokFHRWrZUpjPjlQIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DSKuARWyOVwokFHRWrZUpjPjlQIK;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_DSKuARWyOVwokFHRWrZUpjPjlQIK(::GlobalNamespace::JarUttPZRYFOEJIFSBWmBVxuYbQN*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DSKuARWyOVwokFHRWrZUpjPjlQIK = value;
}
constexpr ::GlobalNamespace::TlnDQDJutNeXhSxuqvmVfatGcyhTA*& Rewired::ControllerElementIdentifier::__cordl_internal_get_QUGYOTKXFoGyoZTJpdsoXyZkFmlL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QUGYOTKXFoGyoZTJpdsoXyZkFmlL;
}
constexpr ::GlobalNamespace::TlnDQDJutNeXhSxuqvmVfatGcyhTA* const& Rewired::ControllerElementIdentifier::__cordl_internal_get_QUGYOTKXFoGyoZTJpdsoXyZkFmlL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QUGYOTKXFoGyoZTJpdsoXyZkFmlL;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_QUGYOTKXFoGyoZTJpdsoXyZkFmlL(::GlobalNamespace::TlnDQDJutNeXhSxuqvmVfatGcyhTA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QUGYOTKXFoGyoZTJpdsoXyZkFmlL = value;
}
constexpr ::GlobalNamespace::TGbAqoAgqxsdeSiwLvSpgroOIkcib*& Rewired::ControllerElementIdentifier::__cordl_internal_get_tiVwGNVwMSWRKghFfmTwGcCWFRfbA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiVwGNVwMSWRKghFfmTwGcCWFRfbA;
}
constexpr ::GlobalNamespace::TGbAqoAgqxsdeSiwLvSpgroOIkcib* const& Rewired::ControllerElementIdentifier::__cordl_internal_get_tiVwGNVwMSWRKghFfmTwGcCWFRfbA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiVwGNVwMSWRKghFfmTwGcCWFRfbA;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_tiVwGNVwMSWRKghFfmTwGcCWFRfbA(::GlobalNamespace::TGbAqoAgqxsdeSiwLvSpgroOIkcib*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiVwGNVwMSWRKghFfmTwGcCWFRfbA = value;
}
constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo*& Rewired::ControllerElementIdentifier::__cordl_internal_get_aFuEbQFJZusPGsAUvbTjLzBOIWNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aFuEbQFJZusPGsAUvbTjLzBOIWNr;
}
constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo* const& Rewired::ControllerElementIdentifier::__cordl_internal_get_aFuEbQFJZusPGsAUvbTjLzBOIWNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aFuEbQFJZusPGsAUvbTjLzBOIWNr;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_aFuEbQFJZusPGsAUvbTjLzBOIWNr(::Rewired::Internal::Localization::DeviceLocalizationInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aFuEbQFJZusPGsAUvbTjLzBOIWNr = value;
}
constexpr int32_t& Rewired::ControllerElementIdentifier::__cordl_internal_get_PWjdFZIsDictTJmTwKlXziAlsDLVA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PWjdFZIsDictTJmTwKlXziAlsDLVA;
}
constexpr int32_t const& Rewired::ControllerElementIdentifier::__cordl_internal_get_PWjdFZIsDictTJmTwKlXziAlsDLVA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PWjdFZIsDictTJmTwKlXziAlsDLVA;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_PWjdFZIsDictTJmTwKlXziAlsDLVA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PWjdFZIsDictTJmTwKlXziAlsDLVA = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>*& Rewired::ControllerElementIdentifier::__cordl_internal_get_MzDmBivTDYYrSlCPOIgTqpNtdBwl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MzDmBivTDYYrSlCPOIgTqpNtdBwl;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>* const& Rewired::ControllerElementIdentifier::__cordl_internal_get_MzDmBivTDYYrSlCPOIgTqpNtdBwl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MzDmBivTDYYrSlCPOIgTqpNtdBwl;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_MzDmBivTDYYrSlCPOIgTqpNtdBwl(::System::Collections::Generic::List_1<::Rewired::ControllerElementIdentifier_laPkaqHbPAwkqoExcdrxQXtKDzXV*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MzDmBivTDYYrSlCPOIgTqpNtdBwl = value;
}
constexpr ::Rewired::ControllerType& Rewired::ControllerElementIdentifier::__cordl_internal_get_rxFsonVUKlBMMfQAgbiUwOeOfOc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rxFsonVUKlBMMfQAgbiUwOeOfOc;
}
constexpr ::Rewired::ControllerType const& Rewired::ControllerElementIdentifier::__cordl_internal_get_rxFsonVUKlBMMfQAgbiUwOeOfOc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rxFsonVUKlBMMfQAgbiUwOeOfOc;
}
constexpr void Rewired::ControllerElementIdentifier::__cordl_internal_set_rxFsonVUKlBMMfQAgbiUwOeOfOc(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rxFsonVUKlBMMfQAgbiUwOeOfOc = value;
}
inline void Rewired::ControllerElementIdentifier::setStaticF_cXaOIbNYISiDOrokNpbJnMcMFgzy(::Rewired::ControllerElementIdentifier*  value)  {
::cordl_internals::setStaticField<::Rewired::ControllerElementIdentifier*, "cXaOIbNYISiDOrokNpbJnMcMFgzy", ::Rewired::ControllerElementIdentifier*>(std::forward<::Rewired::ControllerElementIdentifier*>(value));
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::getStaticF_cXaOIbNYISiDOrokNpbJnMcMFgzy()  {
return ::cordl_internals::getStaticField<::Rewired::ControllerElementIdentifier*, "cXaOIbNYISiDOrokNpbJnMcMFgzy", ::Rewired::ControllerElementIdentifier*>();
}
inline int32_t Rewired::ControllerElementIdentifier::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_positiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_positiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::set_positiveName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_positiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_negativeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_negativeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::set_negativeName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_negativeName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::GetCompoundElementSpecialName(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetCompoundElementSpecialName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::Rewired::ControllerElementType Rewired::ControllerElementIdentifier::get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method);
}
inline ::Rewired::CompoundControllerElementType Rewired::ControllerElementIdentifier::get_compoundElementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_compoundElementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::CompoundControllerElementType>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerElementIdentifier::get_glyph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_glyph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerElementIdentifier::get_positiveGlyph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_positiveGlyph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerElementIdentifier::get_negativeGlyph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_negativeGlyph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::YETimSpSQGYEWlYFNvXumNNVrhzU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"YETimSpSQGYEWlYFNvXumNNVrhzU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::ocxzvbttbhonouqunMaqJqNgwArs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"ocxzvbttbhonouqunMaqJqNgwArs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::nJWanyDVybJXNnTSjNIzBdCArQoDc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"nJWanyDVybJXNnTSjNIzBdCArQoDc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerElementIdentifier::GetCompoundElementSpecialGlyph(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetCompoundElementSpecialGlyph", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline ::StringW Rewired::ControllerElementIdentifier::GetCompoundElementSpecialFinalGlyphKey(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetCompoundElementSpecialFinalGlyphKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_nonLocalizedName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_nonLocalizedName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::set_nonLocalizedName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_nonLocalizedName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_nonLocalizedPositiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_nonLocalizedPositiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::set_nonLocalizedPositiveName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_nonLocalizedPositiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_nonLocalizedNegativeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_nonLocalizedNegativeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::set_nonLocalizedNegativeName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"set_nonLocalizedNegativeName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_positiveKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_positiveKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_negativeKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_negativeKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::get_role()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_role", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::ControllerElementIdentifier::get_isCompoundElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_isCompoundElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_nonLocalizedName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedPositiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_nonLocalizedPositiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_nonLocalizedNegativeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_nonLocalizedNegativeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_GetSpecialElementNonLocalizedName(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.GetSpecialElementNonLocalizedName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline bool Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNonLocalizedPositiveNameAutoGenerated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isNonLocalizedPositiveNameAutoGenerated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNonLocalizedNegativeNameAutoGenerated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isNonLocalizedNegativeNameAutoGenerated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isPositiveKeyAutoGenerated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isPositiveKeyAutoGenerated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_isNegativeKeyAutoGenerated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_isNegativeKeyAutoGenerated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_positiveKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_positiveKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_negativeKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_negativeKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_GetSpecialElementKey(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.GetSpecialElementKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_deviceLocalizationInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_deviceLocalizationInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::_ctor(::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerElementIdentifier::_ctor(::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerElementIdentifier::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::CompoundControllerElementType  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::CompoundControllerElementType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Rewired::ControllerElementIdentifier::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void Rewired::ControllerElementIdentifier::_ctor(::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::GetDisplayName(::Rewired::ControllerElementType  actualElementType, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetDisplayName", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, actualElementType, axisRange);
}
inline ::StringW Rewired::ControllerElementIdentifier::GetDisplayName(::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetDisplayName", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, axisRange);
}
inline ::System::Object* Rewired::ControllerElementIdentifier::GetGlyph(::Rewired::ControllerElementType  actualElementType, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, actualElementType, axisRange);
}
inline ::System::Object* Rewired::ControllerElementIdentifier::GetGlyph(::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, axisRange);
}
inline ::StringW Rewired::ControllerElementIdentifier::GetFinalGlyphKey(::Rewired::ControllerElementType  actualElementType, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetFinalGlyphKey", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, actualElementType, axisRange);
}
inline ::StringW Rewired::ControllerElementIdentifier::GetFinalGlyphKey(::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"GetFinalGlyphKey", {}, {::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, axisRange);
}
inline ::System::Object* Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_useEditorElementTypeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_useEditorElementTypeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerElementType Rewired::ControllerElementIdentifier::Rewired_Interfaces_IControllerElementIdentifierCommon_Internal_get_editorElementTypeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Interfaces.IControllerElementIdentifierCommon_Internal.get_editorElementTypeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::uZgfHxCVIzmoJonwRtmslhRNCTEn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"uZgfHxCVIzmoJonwRtmslhRNCTEn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::FinishRuntimeSetup(::Rewired::Internal::Localization::DeviceLocalizationInfo*  deviceLocalizationInfo, ::Rewired::ControllerType  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"FinishRuntimeSetup", {}, {::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceLocalizationInfo, controllerType);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::get_BlankReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"get_BlankReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(nullptr, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::ToElementNameLocalizerTypes(::Rewired::ControllerElementType  type, ::Rewired::CompoundControllerElementType  compoundType, ::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_lyYnxgykwvOmykWBuGmMtGqjBdhI>  resultElementType, ::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_EWxchajkJYNDVizpEuMvllCvRLYQ>  resultCompoundElementType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"ToElementNameLocalizerTypes", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::CompoundControllerElementType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_lyYnxgykwvOmykWBuGmMtGqjBdhI>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::KlcNeaFZiwoAzlYmohbMFFSmhxYd_EWxchajkJYNDVizpEuMvllCvRLYQ>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, compoundType, resultElementType, resultCompoundElementType);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_keyCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_keyCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_scriptingName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_scriptingName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_nonLocalizedDescriptiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_nonLocalizedDescriptiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_set_nonLocalizedDescriptiveName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.set_nonLocalizedDescriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_nonLocalizedPositiveDescriptiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_nonLocalizedPositiveDescriptiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_nonLocalizedPositiveDescriptiveName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_nonLocalizedPositiveDescriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_nonLocalizedNegativeDescriptiveName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_nonLocalizedNegativeDescriptiveName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_nonLocalizedNegativeDescriptiveName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_nonLocalizedNegativeDescriptiveName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_positiveKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_positiveKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_positiveKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_positiveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_get_negativeKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.get_negativeKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_IAxisNameLocalizerSource_set_negativeKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.IAxisNameLocalizerSource.set_negativeKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_get_autoGeneratedValueFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.get_autoGeneratedValueFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_INameLocalizerSource_set_autoGeneratedValueFlags(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.INameLocalizerSource.set_autoGeneratedValueFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_GetSpecialElementNonLocalizedDescriptiveName(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.GetSpecialElementNonLocalizedDescriptiveName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_SetSpecialElementNonLocalizedDescriptiveName(int32_t  index, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.SetSpecialElementNonLocalizedDescriptiveName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_GetSpecialElementKey(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.GetSpecialElementKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Localization_ISpecialElementNameLocalizerSource_SetSpecialElementKey(int32_t  index, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Localization.ISpecialElementNameLocalizerSource.SetSpecialElementKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_get_keyCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.get_keyCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_get_key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.get_key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_get_autoGeneratedValueFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.get_autoGeneratedValueFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IGlyphKeySource_set_autoGeneratedValueFlags(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IGlyphKeySource.set_autoGeneratedValueFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_get_positiveKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.get_positiveKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_set_positiveKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.set_positiveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_get_negativeKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.get_negativeKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_IAxisGlyphKeySource_set_negativeKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.IAxisGlyphKeySource.set_negativeKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_ISpecialElementGlyphKeySource_GetSpecialElementKey(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.ISpecialElementGlyphKeySource.GetSpecialElementKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void Rewired::ControllerElementIdentifier::Rewired_Internal_Glyphs_ISpecialElementGlyphKeySource_SetSpecialElementKey(int32_t  index, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerElementIdentifier*>(),
                        {"Rewired.Internal.Glyphs.ISpecialElementGlyphKeySource.SetSpecialElementKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier*>());
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::New_ctor(::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::New_ctor(::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::CompoundControllerElementType  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6));
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5));
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerElementIdentifier::New_ctor(::Rewired::ControllerElementIdentifier*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerElementIdentifier*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr  Rewired::ControllerElementIdentifier::operator ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired::ControllerElementIdentifier::i___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::aaIrhkVuamEdkpKYgMrcawdVREgJ"
constexpr  Rewired::ControllerElementIdentifier::operator ::GlobalNamespace::aaIrhkVuamEdkpKYgMrcawdVREgJ*() noexcept {
return static_cast<::GlobalNamespace::aaIrhkVuamEdkpKYgMrcawdVREgJ*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::aaIrhkVuamEdkpKYgMrcawdVREgJ"
constexpr ::GlobalNamespace::aaIrhkVuamEdkpKYgMrcawdVREgJ* Rewired::ControllerElementIdentifier::i___GlobalNamespace__aaIrhkVuamEdkpKYgMrcawdVREgJ() noexcept {
return static_cast<::GlobalNamespace::aaIrhkVuamEdkpKYgMrcawdVREgJ*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ilReClayUpFdClpKxnBeDJuNJPBMA"
constexpr  Rewired::ControllerElementIdentifier::operator ::GlobalNamespace::ilReClayUpFdClpKxnBeDJuNJPBMA*() noexcept {
return static_cast<::GlobalNamespace::ilReClayUpFdClpKxnBeDJuNJPBMA*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ilReClayUpFdClpKxnBeDJuNJPBMA"
constexpr ::GlobalNamespace::ilReClayUpFdClpKxnBeDJuNJPBMA* Rewired::ControllerElementIdentifier::i___GlobalNamespace__ilReClayUpFdClpKxnBeDJuNJPBMA() noexcept {
return static_cast<::GlobalNamespace::ilReClayUpFdClpKxnBeDJuNJPBMA*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::szsTBbiGxmpHSDpmkXmdItruKKbl"
constexpr  Rewired::ControllerElementIdentifier::operator ::GlobalNamespace::szsTBbiGxmpHSDpmkXmdItruKKbl*() noexcept {
return static_cast<::GlobalNamespace::szsTBbiGxmpHSDpmkXmdItruKKbl*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::szsTBbiGxmpHSDpmkXmdItruKKbl"
constexpr ::GlobalNamespace::szsTBbiGxmpHSDpmkXmdItruKKbl* Rewired::ControllerElementIdentifier::i___GlobalNamespace__szsTBbiGxmpHSDpmkXmdItruKKbl() noexcept {
return static_cast<::GlobalNamespace::szsTBbiGxmpHSDpmkXmdItruKKbl*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::SGZfJCNLInnIUumEtCtBXYlOQhsU"
constexpr  Rewired::ControllerElementIdentifier::operator ::GlobalNamespace::SGZfJCNLInnIUumEtCtBXYlOQhsU*() noexcept {
return static_cast<::GlobalNamespace::SGZfJCNLInnIUumEtCtBXYlOQhsU*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SGZfJCNLInnIUumEtCtBXYlOQhsU"
constexpr ::GlobalNamespace::SGZfJCNLInnIUumEtCtBXYlOQhsU* Rewired::ControllerElementIdentifier::i___GlobalNamespace__SGZfJCNLInnIUumEtCtBXYlOQhsU() noexcept {
return static_cast<::GlobalNamespace::SGZfJCNLInnIUumEtCtBXYlOQhsU*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::eGmImcKGyEsJPJCQSUkoCBhwzSsD"
constexpr  Rewired::ControllerElementIdentifier::operator ::GlobalNamespace::eGmImcKGyEsJPJCQSUkoCBhwzSsD*() noexcept {
return static_cast<::GlobalNamespace::eGmImcKGyEsJPJCQSUkoCBhwzSsD*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::eGmImcKGyEsJPJCQSUkoCBhwzSsD"
constexpr ::GlobalNamespace::eGmImcKGyEsJPJCQSUkoCBhwzSsD* Rewired::ControllerElementIdentifier::i___GlobalNamespace__eGmImcKGyEsJPJCQSUkoCBhwzSsD() noexcept {
return static_cast<::GlobalNamespace::eGmImcKGyEsJPJCQSUkoCBhwzSsD*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::pdxFodpYBVlInXmvyarVvjZQMTER"
constexpr  Rewired::ControllerElementIdentifier::operator ::GlobalNamespace::pdxFodpYBVlInXmvyarVvjZQMTER*() noexcept {
return static_cast<::GlobalNamespace::pdxFodpYBVlInXmvyarVvjZQMTER*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::pdxFodpYBVlInXmvyarVvjZQMTER"
constexpr ::GlobalNamespace::pdxFodpYBVlInXmvyarVvjZQMTER* Rewired::ControllerElementIdentifier::i___GlobalNamespace__pdxFodpYBVlInXmvyarVvjZQMTER() noexcept {
return static_cast<::GlobalNamespace::pdxFodpYBVlInXmvyarVvjZQMTER*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerElementIdentifier::ControllerElementIdentifier()   {
}
