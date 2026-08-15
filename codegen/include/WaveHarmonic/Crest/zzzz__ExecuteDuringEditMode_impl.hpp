#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ExecuteDuringEditMode.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ExecuteDuringEditMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ExecuteDuringEditMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include::ExecuteDuringEditMode_Include(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include::ExecuteDuringEditMode_Include()   {
}
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  WaveHarmonic::Crest::ExecuteDuringEditMode_Include::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  WaveHarmonic::Crest::ExecuteDuringEditMode_Include::PrefabStage{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  WaveHarmonic::Crest::ExecuteDuringEditMode_Include::BuildPipeline{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  WaveHarmonic::Crest::ExecuteDuringEditMode_Include::All{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::WaveHarmonic::Crest::ExecuteDuringEditMode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ExecuteDuringEditMode::*)(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include)>(&::WaveHarmonic::Crest::ExecuteDuringEditMode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ExecuteDuringEditMode*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::ExecuteDuringEditMode_Include>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include& WaveHarmonic::Crest::ExecuteDuringEditMode::__cordl_internal_get__Including()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Including;
}
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include const& WaveHarmonic::Crest::ExecuteDuringEditMode::__cordl_internal_get__Including() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Including;
}
constexpr void WaveHarmonic::Crest::ExecuteDuringEditMode::__cordl_internal_set__Including(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Including = value;
}
inline void WaveHarmonic::Crest::ExecuteDuringEditMode::_ctor(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  including)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ExecuteDuringEditMode*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::ExecuteDuringEditMode_Include>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, including);
}
inline ::WaveHarmonic::Crest::ExecuteDuringEditMode* WaveHarmonic::Crest::ExecuteDuringEditMode::New_ctor(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  including)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ExecuteDuringEditMode*>(including));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode::ExecuteDuringEditMode()   {
}
