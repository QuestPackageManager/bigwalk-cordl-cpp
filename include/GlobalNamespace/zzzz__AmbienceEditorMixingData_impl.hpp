#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceEditorMixingData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AmbienceEditorMixingData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceEditorMixingData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceEditorMixingData::*)()>(&::GlobalNamespace::AmbienceEditorMixingData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180316900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEditorMixingData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_get_Mute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mute;
}
constexpr bool const& GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_get_Mute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mute;
}
constexpr void GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_set_Mute(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mute = value;
}
constexpr bool& GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_get_Solo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Solo;
}
constexpr bool const& GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_get_Solo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Solo;
}
constexpr void GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_set_Solo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Solo = value;
}
constexpr float_t& GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_get_Intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Intensity;
}
constexpr float_t const& GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_get_Intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Intensity;
}
constexpr void GlobalNamespace::AmbienceEditorMixingData::__cordl_internal_set_Intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Intensity = value;
}
inline void GlobalNamespace::AmbienceEditorMixingData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceEditorMixingData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AmbienceEditorMixingData* GlobalNamespace::AmbienceEditorMixingData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbienceEditorMixingData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceEditorMixingData::AmbienceEditorMixingData()   {
}
