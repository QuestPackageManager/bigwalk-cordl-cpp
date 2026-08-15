#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/GenerateAPI.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Getter_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Setter_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__GenerateAPI_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Getter_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Setter_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::GenerateAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::GenerateAPI::*)(::WaveHarmonic::Crest::Getter, ::WaveHarmonic::Crest::Setter, ::StringW, ::StringW)>(&::WaveHarmonic::Crest::GenerateAPI::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181651a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::GenerateAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::Getter>(), ::i2c::type_of<::WaveHarmonic::Crest::Setter>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::GenerateAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::GenerateAPI::*)(::WaveHarmonic::Crest::Setter, ::StringW, ::StringW)>(&::WaveHarmonic::Crest::GenerateAPI::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182567840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::GenerateAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::Setter>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::Getter& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__Getter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Getter;
}
constexpr ::WaveHarmonic::Crest::Getter const& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__Getter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Getter;
}
constexpr void WaveHarmonic::Crest::GenerateAPI::__cordl_internal_set__Getter(::WaveHarmonic::Crest::Getter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Getter = value;
}
constexpr ::WaveHarmonic::Crest::Setter& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__Setter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Setter;
}
constexpr ::WaveHarmonic::Crest::Setter const& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__Setter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Setter;
}
constexpr void WaveHarmonic::Crest::GenerateAPI::__cordl_internal_set__Setter(::WaveHarmonic::Crest::Setter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Setter = value;
}
constexpr ::StringW& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name;
}
constexpr ::StringW const& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name;
}
constexpr void WaveHarmonic::Crest::GenerateAPI::__cordl_internal_set__Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name = value;
}
constexpr ::StringW& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__ScriptingSymbol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptingSymbol;
}
constexpr ::StringW const& WaveHarmonic::Crest::GenerateAPI::__cordl_internal_get__ScriptingSymbol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptingSymbol;
}
constexpr void WaveHarmonic::Crest::GenerateAPI::__cordl_internal_set__ScriptingSymbol(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScriptingSymbol = value;
}
inline void WaveHarmonic::Crest::GenerateAPI::_ctor(::WaveHarmonic::Crest::Getter  getter, ::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::GenerateAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::Getter>(), ::i2c::type_of<::WaveHarmonic::Crest::Setter>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getter, setter, name, symbol);
}
inline void WaveHarmonic::Crest::GenerateAPI::_ctor(::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::GenerateAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::Setter>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setter, name, symbol);
}
inline ::WaveHarmonic::Crest::GenerateAPI* WaveHarmonic::Crest::GenerateAPI::New_ctor(::WaveHarmonic::Crest::Getter  getter, ::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::GenerateAPI*>(getter, setter, name, symbol));
}
inline ::WaveHarmonic::Crest::GenerateAPI* WaveHarmonic::Crest::GenerateAPI::New_ctor(::WaveHarmonic::Crest::Setter  setter, ::StringW  name, ::StringW  symbol)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::GenerateAPI*>(setter, name, symbol));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::GenerateAPI::GenerateAPI()   {
}
