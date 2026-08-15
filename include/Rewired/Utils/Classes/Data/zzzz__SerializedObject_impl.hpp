#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/SerializedObject.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__IndexedDictionary_2_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IAddKeyValue_2_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IAddValue_1_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExportToJson_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExportToXml_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType::SerializedObject_ObjectType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType::SerializedObject_ObjectType()   {
}
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  Rewired::Utils::Classes::Data::SerializedObject_ObjectType::Object{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  Rewired::Utils::Classes::Data::SerializedObject_ObjectType::List{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions::SerializedObject_FieldOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions::SerializedObject_FieldOptions()   {
}
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  Rewired::Utils::Classes::Data::SerializedObject_FieldOptions::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  Rewired::Utils::Classes::Data::SerializedObject_FieldOptions::ExculdeFromXml{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::*)(::System::Type*, ::System::Object*, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions)>(&::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::_ctor)> {
  constexpr static std::size_t size = 0x9bb0;
  constexpr static std::size_t addrs = 0x180fb4d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA.YCotGxHDdWbqRUHJLatQKhizyXGS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::YCotGxHDdWbqRUHJLatQKhizyXGS)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181959140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::YCotGxHDdWbqRUHJLatQKhizyXGS()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "OVamNmXCXUboNRNDLhPcfFhJJELRA", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "dKmuhlDyWpOxoVZYKKayZUchraDx", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "mpcRoFFqKUaVvGkWCpkSwrDLHxjW", ty: "::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA(::System::Type*  OVamNmXCXUboNRNDLhPcfFhJJELRA, ::System::Object*  dKmuhlDyWpOxoVZYKKayZUchraDx, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  mpcRoFFqKUaVvGkWCpkSwrDLHxjW) noexcept  {
this->OVamNmXCXUboNRNDLhPcfFhJJELRA = OVamNmXCXUboNRNDLhPcfFhJJELRA;
this->dKmuhlDyWpOxoVZYKKayZUchraDx = dKmuhlDyWpOxoVZYKKayZUchraDx;
this->mpcRoFFqKUaVvGkWCpkSwrDLHxjW = mpcRoFFqKUaVvGkWCpkSwrDLHxjW;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Field._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_Field::*)(::StringW, ::System::Object*, ::System::Type*, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions)>(&::Rewired::Utils::Classes::Data::SerializedObject_Field::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181952510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Field>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Field.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject_Field::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_Field::ToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1819523b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Field>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Field>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::SerializedObject_Field::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Type*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Field>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject_Field::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Field>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "options", ty: "::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_Field::SerializedObject_Field(::StringW  name, ::System::Object*  value, ::System::Type*  type, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  options) noexcept  {
this->name = name;
this->value = value;
this->type = type;
this->options = options;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_Field::SerializedObject_Field()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR::*)()>(&::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR* Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum.doGFsGdYkNFLwvSdIzpSHbudzFXM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::*)()>(&::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::doGFsGdYkNFLwvSdIzpSHbudzFXM)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181951e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::*)()>(&::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_MoqWiacccBdtfzvYmfVmOmgBOLwp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoqWiacccBdtfzvYmfVmOmgBOLwp;
}
constexpr ::StringW const& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_MoqWiacccBdtfzvYmfVmOmgBOLwp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoqWiacccBdtfzvYmfVmOmgBOLwp;
}
constexpr void Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_set_MoqWiacccBdtfzvYmfVmOmgBOLwp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MoqWiacccBdtfzvYmfVmOmgBOLwp = value;
}
constexpr ::StringW& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_xiAeMznhhfCJObJPxQsGGQqeTAuB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xiAeMznhhfCJObJPxQsGGQqeTAuB;
}
constexpr ::StringW const& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_xiAeMznhhfCJObJPxQsGGQqeTAuB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xiAeMznhhfCJObJPxQsGGQqeTAuB;
}
constexpr void Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_set_xiAeMznhhfCJObJPxQsGGQqeTAuB(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xiAeMznhhfCJObJPxQsGGQqeTAuB = value;
}
constexpr ::StringW& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_XikMYYEhzWTAwDsKOgNRgbQoxfTI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XikMYYEhzWTAwDsKOgNRgbQoxfTI;
}
constexpr ::StringW const& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_XikMYYEhzWTAwDsKOgNRgbQoxfTI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XikMYYEhzWTAwDsKOgNRgbQoxfTI;
}
constexpr void Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_set_XikMYYEhzWTAwDsKOgNRgbQoxfTI(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XikMYYEhzWTAwDsKOgNRgbQoxfTI = value;
}
constexpr ::StringW& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_sfvuudZUcpMjvpyicimlkoeRpLgL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sfvuudZUcpMjvpyicimlkoeRpLgL;
}
constexpr ::StringW const& Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_get_sfvuudZUcpMjvpyicimlkoeRpLgL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sfvuudZUcpMjvpyicimlkoeRpLgL;
}
constexpr void Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::__cordl_internal_set_sfvuudZUcpMjvpyicimlkoeRpLgL(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sfvuudZUcpMjvpyicimlkoeRpLgL = value;
}
inline ::StringW Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::doGFsGdYkNFLwvSdIzpSHbudzFXM()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum* Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum::XmlInfo_SerializedObject_EIbzonhokcWItxlOhzMShqYbkqum()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo.get_attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>* (::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::get_attributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819590e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(),
                        {"get_attributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181959030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*& Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::__cordl_internal_get_rfvGthmhPcBYXNbBieTpjbCjsYAFA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rfvGthmhPcBYXNbBieTpjbCjsYAFA;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>* const& Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::__cordl_internal_get_rfvGthmhPcBYXNbBieTpjbCjsYAFA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rfvGthmhPcBYXNbBieTpjbCjsYAFA;
}
constexpr void Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::__cordl_internal_set_rfvGthmhPcBYXNbBieTpjbCjsYAFA(::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rfvGthmhPcBYXNbBieTpjbCjsYAFA = value;
}
inline ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>* Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::get_attributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(),
                        {"get_attributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::XmlInfo_SerializedObject_pdArFNlAFDEuXPMAnTRIYfiqnMBR*>*>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo::SerializedObject_XmlInfo()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1819520f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181951ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject_Field (::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805cab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819520b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181952060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::SerializedObject_Enumerator::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_Field Rewired::Utils::Classes::Data::SerializedObject_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject_Field>(*this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject_Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* Rewired::Utils::Classes::Data::SerializedObject_Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject_Enumerator::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_Enumerator>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr  Rewired::Utils::Classes::Data::SerializedObject_Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>* Rewired::Utils::Classes::Data::SerializedObject_Enumerator::i___System__Collections__Generic__IEnumerator_1___Rewired__Utils__Classes__Data__SerializedObject_Field_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::Utils::Classes::Data::SerializedObject_Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::SerializedObject_Enumerator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Data::SerializedObject_Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Data::SerializedObject_Enumerator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "uKbldhzWzObojxMbVwjlWwxtTCyb", ty: "::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "zJixmRTGEXvLuWaAdOltQEzauOcp", ty: "::Rewired::Utils::Classes::Data::SerializedObject_Field", modifiers: "", def_value: Some("{}") }, CppParam { name: "FeerKYsjNyYcyoRpfAblusousUmg", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::SerializedObject_Enumerator(::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*  uKbldhzWzObojxMbVwjlWwxtTCyb, ::Rewired::Utils::Classes::Data::SerializedObject_Field  zJixmRTGEXvLuWaAdOltQEzauOcp, ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>>*  FeerKYsjNyYcyoRpfAblusousUmg) noexcept  {
this->uKbldhzWzObojxMbVwjlWwxtTCyb = uKbldhzWzObojxMbVwjlWwxtTCyb;
this->zJixmRTGEXvLuWaAdOltQEzauOcp = zJixmRTGEXvLuWaAdOltQEzauOcp;
this->FeerKYsjNyYcyoRpfAblusousUmg = FeerKYsjNyYcyoRpfAblusousUmg;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_Enumerator::SerializedObject_Enumerator()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.RIiErasIBdwFqIqbfJThlVSOvAmf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)()>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::RIiErasIBdwFqIqbfJThlVSOvAmf)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818b5910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"RIiErasIBdwFqIqbfJThlVSOvAmf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.swZgejItMVMIEXfKpHGTewCHPuyi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)()>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::swZgejItMVMIEXfKpHGTewCHPuyi)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181959d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"swZgejItMVMIEXfKpHGTewCHPuyi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)(::StringW, ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*)>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181959a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.MSfPjQUqlxjvNqQQwTMDuZqimoSG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*)>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::MSfPjQUqlxjvNqQQwTMDuZqimoSG)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181959310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"MSfPjQUqlxjvNqQQwTMDuZqimoSG", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.fDaiythbuvPiHfwicmYwIwNRDmhF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)(::StringW, ::StringW)>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::fDaiythbuvPiHfwicmYwIwNRDmhF)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181959c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"fDaiythbuvPiHfwicmYwIwNRDmhF", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.NDsgvmxjAmPobiQIiBaFkquZtDVl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)(::StringW)>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::NDsgvmxjAmPobiQIiBaFkquZtDVl)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819593e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"NDsgvmxjAmPobiQIiBaFkquZtDVl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.OmXEQmfTTYCuOaQRibGrnEufjXwMA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)(::StringW)>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::OmXEQmfTTYCuOaQRibGrnEufjXwMA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819594b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"OmXEQmfTTYCuOaQRibGrnEufjXwMA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.dkRCanKooUYrZTUJfOgcFNIWuyAzA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)()>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::dkRCanKooUYrZTUJfOgcFNIWuyAzA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181959b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"dkRCanKooUYrZTUJfOgcFNIWuyAzA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.aFTbDdEAnCXIKBLvJPnqKhFrUCvFA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)()>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::aFTbDdEAnCXIKBLvJPnqKhFrUCvFA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181959b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA.PkSFxcJmOHnBUYWIrrqvEpKkqrzq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::*)(::StringW, int32_t)>(&::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::PkSFxcJmOHnBUYWIrrqvEpKkqrzq)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x181959560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"PkSFxcJmOHnBUYWIrrqvEpKkqrzq", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_TjskuIWdaDRUICVcUMKSoAXiiOIO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TjskuIWdaDRUICVcUMKSoAXiiOIO;
}
constexpr ::StringW const& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_TjskuIWdaDRUICVcUMKSoAXiiOIO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TjskuIWdaDRUICVcUMKSoAXiiOIO;
}
constexpr void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_set_TjskuIWdaDRUICVcUMKSoAXiiOIO(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TjskuIWdaDRUICVcUMKSoAXiiOIO = value;
}
constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_EQVfxIEEgojBKvDtULYRkmJOsuqJA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EQVfxIEEgojBKvDtULYRkmJOsuqJA;
}
constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* const& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_EQVfxIEEgojBKvDtULYRkmJOsuqJA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EQVfxIEEgojBKvDtULYRkmJOsuqJA;
}
constexpr void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_set_EQVfxIEEgojBKvDtULYRkmJOsuqJA(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EQVfxIEEgojBKvDtULYRkmJOsuqJA = value;
}
constexpr ::StringW& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_HdNdsoYAtrFSvdxCOcNJREpSvDyR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HdNdsoYAtrFSvdxCOcNJREpSvDyR;
}
constexpr ::StringW const& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_HdNdsoYAtrFSvdxCOcNJREpSvDyR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HdNdsoYAtrFSvdxCOcNJREpSvDyR;
}
constexpr void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_set_HdNdsoYAtrFSvdxCOcNJREpSvDyR(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HdNdsoYAtrFSvdxCOcNJREpSvDyR = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_tgcrVNGhozeXECdfPpgJCuUKhxVe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tgcrVNGhozeXECdfPpgJCuUKhxVe;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_tgcrVNGhozeXECdfPpgJCuUKhxVe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tgcrVNGhozeXECdfPpgJCuUKhxVe;
}
constexpr void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_set_tgcrVNGhozeXECdfPpgJCuUKhxVe(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tgcrVNGhozeXECdfPpgJCuUKhxVe = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>*& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_TxSLgmThmlctaMVOOrpNAkCRlprO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TxSLgmThmlctaMVOOrpNAkCRlprO;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>* const& Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_get_TxSLgmThmlctaMVOOrpNAkCRlprO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TxSLgmThmlctaMVOOrpNAkCRlprO;
}
constexpr void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::__cordl_internal_set_TxSLgmThmlctaMVOOrpNAkCRlprO(::System::Collections::Generic::List_1<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TxSLgmThmlctaMVOOrpNAkCRlprO = value;
}
inline int32_t Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::RIiErasIBdwFqIqbfJThlVSOvAmf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"RIiErasIBdwFqIqbfJThlVSOvAmf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::swZgejItMVMIEXfKpHGTewCHPuyi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"swZgejItMVMIEXfKpHGTewCHPuyi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::MSfPjQUqlxjvNqQQwTMDuZqimoSG(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"MSfPjQUqlxjvNqQQwTMDuZqimoSG", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::fDaiythbuvPiHfwicmYwIwNRDmhF(::StringW  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"fDaiythbuvPiHfwicmYwIwNRDmhF", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::NDsgvmxjAmPobiQIiBaFkquZtDVl(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"NDsgvmxjAmPobiQIiBaFkquZtDVl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::OmXEQmfTTYCuOaQRibGrnEufjXwMA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"OmXEQmfTTYCuOaQRibGrnEufjXwMA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Object* Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::dkRCanKooUYrZTUJfOgcFNIWuyAzA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"dkRCanKooUYrZTUJfOgcFNIWuyAzA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::aFTbDdEAnCXIKBLvJPnqKhFrUCvFA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::PkSFxcJmOHnBUYWIrrqvEpKkqrzq(::StringW  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(),
                        {"PkSFxcJmOHnBUYWIrrqvEpKkqrzq", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC.HaivsvpvLEIQpkpMzHwcEKOFkhdJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* (::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::HaivsvpvLEIQpkpMzHwcEKOFkhdJA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {"HaivsvpvLEIQpkpMzHwcEKOFkhdJA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC.aMzVdjmuhTtaZItzAOMgyLvSKRJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::aMzVdjmuhTtaZItzAOMgyLvSKRJA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180541a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {"aMzVdjmuhTtaZItzAOMgyLvSKRJA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::*)(::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181957500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC.dCpwnjByXBNKHqvSzjvtXagleMdx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::*)(::System::Xml::XmlReader*)>(&::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::dCpwnjByXBNKHqvSzjvtXagleMdx)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181957670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {"dCpwnjByXBNKHqvSzjvtXagleMdx", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC.ucIGQdKpkOLnVLgZhGUUDwANmjEkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::ucIGQdKpkOLnVLgZhGUUDwANmjEkA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181957930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*& Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::__cordl_internal_get_oKIwpuBxgwIczFJLAtxQTzDRuysN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oKIwpuBxgwIczFJLAtxQTzDRuysN;
}
constexpr ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* const& Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::__cordl_internal_get_oKIwpuBxgwIczFJLAtxQTzDRuysN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oKIwpuBxgwIczFJLAtxQTzDRuysN;
}
constexpr void Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::__cordl_internal_set_oKIwpuBxgwIczFJLAtxQTzDRuysN(::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oKIwpuBxgwIczFJLAtxQTzDRuysN = value;
}
inline ::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA* Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::HaivsvpvLEIQpkpMzHwcEKOFkhdJA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {"HaivsvpvLEIQpkpMzHwcEKOFkhdJA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::QonKKWwvAzsHtRhImDbiCQeumAyC_SerializedObject_pgIjpeCjaZIPofLXOTLwFWrjhzVIA*>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::aMzVdjmuhTtaZItzAOMgyLvSKRJA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {"aMzVdjmuhTtaZItzAOMgyLvSKRJA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::dCpwnjByXBNKHqvSzjvtXagleMdx(::System::Xml::XmlReader*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(),
                        {"dCpwnjByXBNKHqvSzjvtXagleMdx", {}, {::i2c::type_of<::System::Xml::XmlReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::ucIGQdKpkOLnVLgZhGUUDwANmjEkA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC* Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC::SerializedObject_QonKKWwvAzsHtRhImDbiCQeumAyC()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB.AGuFPibLwarbwjpkIQdRKKKPOLzOA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::*)(::System::Reflection::FieldInfo*)>(&::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::AGuFPibLwarbwjpkIQdRKKKPOLzOA)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181943e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"AGuFPibLwarbwjpkIQdRKKKPOLzOA", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB.zbwLvwPIjMAoLEASszYyiSsuypaW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::*)(::System::Reflection::FieldInfo*)>(&::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::zbwLvwPIjMAoLEASszYyiSsuypaW)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181943d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"zbwLvwPIjMAoLEASszYyiSsuypaW", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB.ZOYMkcsrZnjDdZRKsbFTndAhdPbJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::*)(::System::Reflection::PropertyInfo*)>(&::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::ZOYMkcsrZnjDdZRKsbFTndAhdPbJA)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181943c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"ZOYMkcsrZnjDdZRKsbFTndAhdPbJA", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB.jbCkxYYatPHzRMJngJWUgZayFhVk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::*)(::System::Reflection::PropertyInfo*)>(&::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::jbCkxYYatPHzRMJngJWUgZayFhVk)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181943d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"jbCkxYYatPHzRMJngJWUgZayFhVk", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::setStaticF___9(::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*, "<>9", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(std::forward<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(value));
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB* Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*, "<>9", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>();
}
inline void Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::setStaticF___9__63_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__63_0", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(std::forward<::System::Func_2<::System::Reflection::FieldInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::getStaticF___9__63_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__63_0", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>();
}
inline void Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::setStaticF___9__63_1(::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*, "<>9__63_1", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(std::forward<::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*,::StringW>* Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::getStaticF___9__63_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*,::StringW>*, "<>9__63_1", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>();
}
inline void Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::setStaticF___9__63_2(::System::Func_2<::System::Reflection::PropertyInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::PropertyInfo*,bool>*, "<>9__63_2", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(std::forward<::System::Func_2<::System::Reflection::PropertyInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::PropertyInfo*,bool>* Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::getStaticF___9__63_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::PropertyInfo*,bool>*, "<>9__63_2", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>();
}
inline void Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::setStaticF___9__63_3(::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>*, "<>9__63_3", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(std::forward<::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>* Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::getStaticF___9__63_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::PropertyInfo*,::StringW>*, "<>9__63_3", ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>();
}
inline void Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::AGuFPibLwarbwjpkIQdRKKKPOLzOA(::System::Reflection::FieldInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"AGuFPibLwarbwjpkIQdRKKKPOLzOA", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::zbwLvwPIjMAoLEASszYyiSsuypaW(::System::Reflection::FieldInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"zbwLvwPIjMAoLEASszYyiSsuypaW", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::ZOYMkcsrZnjDdZRKsbFTndAhdPbJA(::System::Reflection::PropertyInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"ZOYMkcsrZnjDdZRKsbFTndAhdPbJA", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::jbCkxYYatPHzRMJngJWUgZayFhVk(::System::Reflection::PropertyInfo*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>(),
                        {"jbCkxYYatPHzRMJngJWUgZayFhVk", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB* Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB::SerializedObject_IfzoBYvrtNyuCRIDQpKxVoebHMBB()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193a390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(int32_t)>(&::Rewired::Utils::Classes::Data::SerializedObject::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193a3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Type*, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType)>(&::Rewired::Utils::Classes::Data::SerializedObject::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Type*, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType, int32_t)>(&::Rewired::Utils::Classes::Data::SerializedObject::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18193a450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Type*, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType)>(&::Rewired::Utils::Classes::Data::SerializedObject::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18193a510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.LzhemtGfeNQftjwVUFjynVBQvPBmA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::LzhemtGfeNQftjwVUFjynVBQvPBmA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181939b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"LzhemtGfeNQftjwVUFjynVBQvPBmA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.get_objectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::get_objectType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_objectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.set_objectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType)>(&::Rewired::Utils::Classes::Data::SerializedObject::set_objectType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18193aa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"set_objectType", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::get_type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.get_xmlInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::get_xmlInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_xmlInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.set_xmlInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*)>(&::Rewired::Utils::Classes::Data::SerializedObject::set_xmlInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"set_xmlInfo", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::get_count)> {
  constexpr static std::size_t size = 0x5160;
  constexpr static std::size_t addrs = 0x180a0ad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject_Field (::Rewired::Utils::Classes::Data::SerializedObject::*)(int32_t)>(&::Rewired::Utils::Classes::Data::SerializedObject::get_Item)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193a780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Type*, ::StringW, ::System::Object*, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions)>(&::Rewired::Utils::Classes::Data::SerializedObject::Add)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181932db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Add", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW, ::System::Object*)>(&::Rewired::Utils::Classes::Data::SerializedObject::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181932f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject::Remove)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181939ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject::Contains)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181933080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.GetDataType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject::GetDataType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181933300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetDataType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.TryGetOriginalValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW, ::by_ref<::System::Object*>)>(&::Rewired::Utils::Classes::Data::SerializedObject::TryGetOriginalValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18193a1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"TryGetOriginalValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.GetEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject_Field (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject::GetEntry)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181933380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.GetOriginalValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject::GetOriginalValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181933420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetOriginalValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.GetOriginalValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::Classes::Data::SerializedObject::*)(int32_t)>(&::Rewired::Utils::Classes::Data::SerializedObject::GetOriginalValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819333f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetOriginalValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject::*)(bool)>(&::Rewired::Utils::Classes::Data::SerializedObject::ToXmlString)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181939f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"ToXmlString", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.ToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::ToJsonString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181930110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"ToJsonString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::ToString)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181939c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.CZNgpJIXHkqYYIbKQiszYlGeMoxJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Xml::XmlWriter*)>(&::Rewired::Utils::Classes::Data::SerializedObject::CZNgpJIXHkqYYIbKQiszYlGeMoxJ)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181932ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"CZNgpJIXHkqYYIbKQiszYlGeMoxJ", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.KqHsOeTlWRnIQnMQOdaKeXBQDgtjA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Xml::XmlWriter*)>(&::Rewired::Utils::Classes::Data::SerializedObject::KqHsOeTlWRnIQnMQOdaKeXBQDgtjA)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1819398a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"KqHsOeTlWRnIQnMQOdaKeXBQDgtjA", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.AYsuUgSjEQHxEsLKkIMPPINBuiFC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::AYsuUgSjEQHxEsLKkIMPPINBuiFC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"AYsuUgSjEQHxEsLKkIMPPINBuiFC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.tqIQMsqdoBUCJZqfvAOuZBkChCBC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Xml::XmlWriter*)>(&::Rewired::Utils::Classes::Data::SerializedObject::tqIQMsqdoBUCJZqfvAOuZBkChCBC)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181932ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"tqIQMsqdoBUCJZqfvAOuZBkChCBC", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.hCdBdHAocweorjLTeOobuZnUMwMdA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Text::StringBuilder*, ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*)>(&::Rewired::Utils::Classes::Data::SerializedObject::hCdBdHAocweorjLTeOobuZnUMwMdA)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18193a810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"hCdBdHAocweorjLTeOobuZnUMwMdA", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.YTudIHGfTUhWrJilLMhbYgtsqPD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::System::Object*)>(&::Rewired::Utils::Classes::Data::SerializedObject::YTudIHGfTUhWrJilLMhbYgtsqPD)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193a270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"YTudIHGfTUhWrJilLMhbYgtsqPD", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.nlSaixTdBVnhiedckGmgYKxvAhGR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::SerializedObject::*)(::StringW, ::System::Object*)>(&::Rewired::Utils::Classes::Data::SerializedObject::nlSaixTdBVnhiedckGmgYKxvAhGR)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181932f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"nlSaixTdBVnhiedckGmgYKxvAhGR", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.System_Collections_Generic_IEnumerable_Rewired_Utils_Classes_Data_SerializedObject_Field__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>* (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::System_Collections_Generic_IEnumerable_Rewired_Utils_Classes_Data_SerializedObject_Field__GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181939c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.Utils.Classes.Data.SerializedObject.Field>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::Utils::Classes::Data::SerializedObject::*)()>(&::Rewired::Utils::Classes::Data::SerializedObject::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181939c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.JJYbNHkQIICPWIlUUQxdTAuamUeCb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Object*, ::by_ref<::System::Object*>, ::System::Globalization::NumberStyles, ::System::Globalization::CultureInfo*)>(&::Rewired::Utils::Classes::Data::SerializedObject::JJYbNHkQIICPWIlUUQxdTAuamUeCb)> {
  constexpr static std::size_t size = 0x6440;
  constexpr static std::size_t addrs = 0x181933460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"JJYbNHkQIICPWIlUUQxdTAuamUeCb", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.zOYBedUtfdakcplgwWvhtzcbDkDE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::Rewired::Utils::Classes::Data::SerializedObject*, ::by_ref<::System::Object*>, ::System::Globalization::NumberStyles, ::System::Globalization::CultureInfo*)>(&::Rewired::Utils::Classes::Data::SerializedObject::zOYBedUtfdakcplgwWvhtzcbDkDE)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x18193aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"zOYBedUtfdakcplgwWvhtzcbDkDE", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (*)(::System::Type*, ::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject::FromJson)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819330e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"FromJson", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::SerializedObject.FromXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (*)(::System::Type*, ::StringW)>(&::Rewired::Utils::Classes::Data::SerializedObject::FromXml)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181933190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"FromXml", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_JlJsXaBeSVKtJAabkqthUtMzkZir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JlJsXaBeSVKtJAabkqthUtMzkZir;
}
constexpr ::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>* const& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_JlJsXaBeSVKtJAabkqthUtMzkZir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JlJsXaBeSVKtJAabkqthUtMzkZir;
}
constexpr void Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_set_JlJsXaBeSVKtJAabkqthUtMzkZir(::Rewired::Utils::Classes::Data::IndexedDictionary_2<::StringW,::Rewired::Utils::Classes::Data::SerializedObject_dCzgkoqCBPABJqqLiGjLhUagaSkiA>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JlJsXaBeSVKtJAabkqthUtMzkZir = value;
}
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_HzvMZZQMIIGOxIBFQaEcqkvTJGts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HzvMZZQMIIGOxIBFQaEcqkvTJGts;
}
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* const& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_HzvMZZQMIIGOxIBFQaEcqkvTJGts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HzvMZZQMIIGOxIBFQaEcqkvTJGts;
}
constexpr void Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_set_HzvMZZQMIIGOxIBFQaEcqkvTJGts(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HzvMZZQMIIGOxIBFQaEcqkvTJGts = value;
}
constexpr ::System::Type*& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_LIJtDXrCtpniwJyypfrOOQsHKHLj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LIJtDXrCtpniwJyypfrOOQsHKHLj;
}
constexpr ::System::Type* const& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_LIJtDXrCtpniwJyypfrOOQsHKHLj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LIJtDXrCtpniwJyypfrOOQsHKHLj;
}
constexpr void Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_set_LIJtDXrCtpniwJyypfrOOQsHKHLj(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LIJtDXrCtpniwJyypfrOOQsHKHLj = value;
}
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_ULFDgFTlDvNTIvWQlJlytpsgyzSC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ULFDgFTlDvNTIvWQlJlytpsgyzSC;
}
constexpr ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType const& Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_get_ULFDgFTlDvNTIvWQlJlytpsgyzSC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ULFDgFTlDvNTIvWQlJlytpsgyzSC;
}
constexpr void Rewired::Utils::Classes::Data::SerializedObject::__cordl_internal_set_ULFDgFTlDvNTIvWQlJlytpsgyzSC(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ULFDgFTlDvNTIvWQlJlytpsgyzSC = value;
}
inline void Rewired::Utils::Classes::Data::SerializedObject::setStaticF_IXlXrfnpbJRAxZGzflKOTKgDEgfO(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>*, "IXlXrfnpbJRAxZGzflKOTKgDEgfO", ::Rewired::Utils::Classes::Data::SerializedObject*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>* Rewired::Utils::Classes::Data::SerializedObject::getStaticF_IXlXrfnpbJRAxZGzflKOTKgDEgfO()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*>*, "IXlXrfnpbJRAxZGzflKOTKgDEgfO", ::Rewired::Utils::Classes::Data::SerializedObject*>();
}
inline void Rewired::Utils::Classes::Data::SerializedObject::setStaticF_VXeCNNwfoBgzLijxlaEzBuNeRoMkb(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>*, "VXeCNNwfoBgzLijxlaEzBuNeRoMkb", ::Rewired::Utils::Classes::Data::SerializedObject*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>* Rewired::Utils::Classes::Data::SerializedObject::getStaticF_VXeCNNwfoBgzLijxlaEzBuNeRoMkb()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::PropertyInfo*>*>*, "VXeCNNwfoBgzLijxlaEzBuNeRoMkb", ::Rewired::Utils::Classes::Data::SerializedObject*>();
}
inline void Rewired::Utils::Classes::Data::SerializedObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject::LzhemtGfeNQftjwVUFjynVBQvPBmA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"LzhemtGfeNQftjwVUFjynVBQvPBmA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType Rewired::Utils::Classes::Data::SerializedObject::get_objectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_objectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::set_objectType(::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"set_objectType", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_ObjectType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* Rewired::Utils::Classes::Data::SerializedObject::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* Rewired::Utils::Classes::Data::SerializedObject::get_xmlInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_xmlInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::set_xmlInfo(::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"set_xmlInfo", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Utils::Classes::Data::SerializedObject::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_Field Rewired::Utils::Classes::Data::SerializedObject::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject_Field>(this, ___internal_method, index);
}
template<typename T>
inline void Rewired::Utils::Classes::Data::SerializedObject::Add(::StringW  fieldName, T  value, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"Add", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldName, value, options);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::Add(::System::Type*  type, ::StringW  fieldName, ::System::Object*  value, ::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Add", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, fieldName, value, options);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::Add(::StringW  fieldName, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldName, value);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject::Remove(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldName);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject::Contains(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldName);
}
inline ::System::Type* Rewired::Utils::Classes::Data::SerializedObject::GetDataType(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetDataType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, fieldName);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject::TryGetOriginalValue(::StringW  fieldName, ::by_ref<::System::Object*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"TryGetOriginalValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldName, value);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject_Field Rewired::Utils::Classes::Data::SerializedObject::GetEntry(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject_Field>(this, ___internal_method, fieldName);
}
inline ::System::Object* Rewired::Utils::Classes::Data::SerializedObject::GetOriginalValue(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetOriginalValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, fieldName);
}
inline ::System::Object* Rewired::Utils::Classes::Data::SerializedObject::GetOriginalValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"GetOriginalValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
template<typename T>
inline T Rewired::Utils::Classes::Data::SerializedObject::GetOriginalValue(::StringW  fieldName)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"GetOriginalValue", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, fieldName);
}
template<typename T>
inline T Rewired::Utils::Classes::Data::SerializedObject::GetOriginalValue(int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"GetOriginalValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline bool Rewired::Utils::Classes::Data::SerializedObject::TryGetDeserializedValue(::StringW  fieldName, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"TryGetDeserializedValue", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldName, value);
}
template<typename T>
inline bool Rewired::Utils::Classes::Data::SerializedObject::TryGetDeserializedValue(int32_t  index, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"TryGetDeserializedValue", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
template<typename T>
inline bool Rewired::Utils::Classes::Data::SerializedObject::TryGetDeserializedValueByRef(::StringW  fieldName, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"TryGetDeserializedValueByRef", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldName, value);
}
template<typename T>
inline bool Rewired::Utils::Classes::Data::SerializedObject::TryGetDeserializedValueByRef(int32_t  index, ::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"TryGetDeserializedValueByRef", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject::ToXmlString(bool  writeDocumentTag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"ToXmlString", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, writeDocumentTag);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject::ToJsonString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"ToJsonString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Utils::Classes::Data::SerializedObject::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::CZNgpJIXHkqYYIbKQiszYlGeMoxJ(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"CZNgpJIXHkqYYIbKQiszYlGeMoxJ", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::KqHsOeTlWRnIQnMQOdaKeXBQDgtjA(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"KqHsOeTlWRnIQnMQOdaKeXBQDgtjA", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject::AYsuUgSjEQHxEsLKkIMPPINBuiFC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"AYsuUgSjEQHxEsLKkIMPPINBuiFC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::tqIQMsqdoBUCJZqfvAOuZBkChCBC(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"tqIQMsqdoBUCJZqfvAOuZBkChCBC", {}, {::i2c::type_of<::System::Xml::XmlWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::hCdBdHAocweorjLTeOobuZnUMwMdA(::System::Text::StringBuilder*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"hCdBdHAocweorjLTeOobuZnUMwMdA", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::YTudIHGfTUhWrJilLMhbYgtsqPD(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"YTudIHGfTUhWrJilLMhbYgtsqPD", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::SerializedObject::nlSaixTdBVnhiedckGmgYKxvAhGR(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"nlSaixTdBVnhiedckGmgYKxvAhGR", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>* Rewired::Utils::Classes::Data::SerializedObject::System_Collections_Generic_IEnumerable_Rewired_Utils_Classes_Data_SerializedObject_Field__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.Utils.Classes.Data.SerializedObject.Field>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::SerializedObject::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename >
inline bool Rewired::Utils::Classes::Data::SerializedObject::cCCdgGEEwCOvgbDkFtVCxVhFXtYp(::System::Object*  _cordl_fixed_empty_name_whitespace, ::by_ref<>  _cordl_fixed_empty_name_whitespace_param_1, ::System::Globalization::NumberStyles  _cordl_fixed_empty_name_whitespace_param_2, ::System::Globalization::CultureInfo*  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                    {"cCCdgGEEwCOvgbDkFtVCxVhFXtYp", {::i2c::class_of<>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject::JJYbNHkQIICPWIlUUQxdTAuamUeCb(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_2, ::System::Globalization::NumberStyles  _cordl_fixed_empty_name_whitespace_param_3, ::System::Globalization::CultureInfo*  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"JJYbNHkQIICPWIlUUQxdTAuamUeCb", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline bool Rewired::Utils::Classes::Data::SerializedObject::zOYBedUtfdakcplgwWvhtzcbDkDE(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_2, ::System::Globalization::NumberStyles  _cordl_fixed_empty_name_whitespace_param_3, ::System::Globalization::CultureInfo*  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"zOYBedUtfdakcplgwWvhtzcbDkDE", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::Utils::Classes::Data::SerializedObject::FromJson(::System::Type*  type, ::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"FromJson", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(nullptr, ___internal_method, type, jsonString);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::Utils::Classes::Data::SerializedObject::FromXml(::System::Type*  type, ::StringW  xmlString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::SerializedObject*>(),
                        {"FromXml", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(nullptr, ___internal_method, type, xmlString);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::Utils::Classes::Data::SerializedObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject*>());
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::Utils::Classes::Data::SerializedObject::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::Utils::Classes::Data::SerializedObject::New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::Utils::Classes::Data::SerializedObject::New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::Utils::Classes::Data::SerializedObject::New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Utils::Classes::Data::SerializedObject_ObjectType  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::SerializedObject*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr  Rewired::Utils::Classes::Data::SerializedObject::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>* Rewired::Utils::Classes::Data::SerializedObject::i___System__Collections__Generic__IEnumerable_1___Rewired__Utils__Classes__Data__SerializedObject_Field_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::Utils::Classes::Data::SerializedObject_Field>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::Utils::Classes::Data::SerializedObject::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::Utils::Classes::Data::SerializedObject::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExportToXml"
constexpr  Rewired::Utils::Classes::Data::SerializedObject::operator ::Rewired::Utils::Interfaces::IExportToXml*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExportToXml*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IExportToXml"
constexpr ::Rewired::Utils::Interfaces::IExportToXml* Rewired::Utils::Classes::Data::SerializedObject::i___Rewired__Utils__Interfaces__IExportToXml() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExportToXml*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExportToJson"
constexpr  Rewired::Utils::Classes::Data::SerializedObject::operator ::Rewired::Utils::Interfaces::IExportToJson*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExportToJson*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IExportToJson"
constexpr ::Rewired::Utils::Interfaces::IExportToJson* Rewired::Utils::Classes::Data::SerializedObject::i___Rewired__Utils__Interfaces__IExportToJson() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IExportToJson*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>"
constexpr  Rewired::Utils::Classes::Data::SerializedObject::operator ::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>"
constexpr ::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>* Rewired::Utils::Classes::Data::SerializedObject::i___Rewired__Utils__Interfaces__IAddValue_1___System__Object__() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IAddValue_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>"
constexpr  Rewired::Utils::Classes::Data::SerializedObject::operator ::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>"
constexpr ::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>* Rewired::Utils::Classes::Data::SerializedObject::i___Rewired__Utils__Interfaces__IAddKeyValue_2___StringW___System__Object__() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IAddKeyValue_2<::StringW,::System::Object*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::SerializedObject::SerializedObject()   {
}
