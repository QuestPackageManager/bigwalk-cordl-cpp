#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ForLodInput.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ForLodInput_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ForLodInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ForLodInput::*)(::System::Type*, ::WaveHarmonic::Crest::LodInputMode)>(&::WaveHarmonic::Crest::ForLodInput::_ctor)> {
  constexpr static std::size_t size = 0x4250;
  constexpr static std::size_t addrs = 0x180c3ff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ForLodInput*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::WaveHarmonic::Crest::LodInputMode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& WaveHarmonic::Crest::ForLodInput::__cordl_internal_get__Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr ::System::Type* const& WaveHarmonic::Crest::ForLodInput::__cordl_internal_get__Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr void WaveHarmonic::Crest::ForLodInput::__cordl_internal_set__Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type = value;
}
constexpr ::WaveHarmonic::Crest::LodInputMode& WaveHarmonic::Crest::ForLodInput::__cordl_internal_get__Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr ::WaveHarmonic::Crest::LodInputMode const& WaveHarmonic::Crest::ForLodInput::__cordl_internal_get__Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr void WaveHarmonic::Crest::ForLodInput::__cordl_internal_set__Mode(::WaveHarmonic::Crest::LodInputMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mode = value;
}
inline void WaveHarmonic::Crest::ForLodInput::_ctor(::System::Type*  type, ::WaveHarmonic::Crest::LodInputMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ForLodInput*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::WaveHarmonic::Crest::LodInputMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, mode);
}
inline ::WaveHarmonic::Crest::ForLodInput* WaveHarmonic::Crest::ForLodInput::New_ctor(::System::Type*  type, ::WaveHarmonic::Crest::LodInputMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ForLodInput*>(type, mode));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ForLodInput::ForLodInput()   {
}
