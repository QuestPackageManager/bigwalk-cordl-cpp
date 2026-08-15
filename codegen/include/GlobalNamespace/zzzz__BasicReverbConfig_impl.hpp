#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicReverbConfig.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__BasicReverbConfig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicReverbConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicReverbConfig::*)()>(&::GlobalNamespace::BasicReverbConfig::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18049c480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_DryLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryLevel;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_DryLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DryLevel;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_DryLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DryLevel = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Room()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Room;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Room() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Room;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_Room(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Room = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_RoomHF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomHF;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_RoomHF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomHF;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_RoomHF(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomHF = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_RoomLF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLF;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_RoomLF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLF;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_RoomLF(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomLF = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_DecayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayTime;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_DecayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayTime;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_DecayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DecayTime = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_DecayHFRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayHFRatio;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_DecayHFRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecayHFRatio;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_DecayHFRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DecayHFRatio = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Reflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reflections;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Reflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reflections;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_Reflections(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Reflections = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_ReflectDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectDelay;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_ReflectDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectDelay;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_ReflectDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReflectDelay = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Reverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverb;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Reverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverb;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_Reverb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Reverb = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_ReverbDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbDelay;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_ReverbDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbDelay;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_ReverbDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReverbDelay = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_HFReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HFReference;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_HFReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HFReference;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_HFReference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HFReference = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_LFReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LFReference;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_LFReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LFReference;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_LFReference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LFReference = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Diffusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Diffusion;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Diffusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Diffusion;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_Diffusion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Diffusion = value;
}
constexpr float_t& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Density;
}
constexpr float_t const& GlobalNamespace::BasicReverbConfig::__cordl_internal_get_Density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Density;
}
constexpr void GlobalNamespace::BasicReverbConfig::__cordl_internal_set_Density(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Density = value;
}
inline void GlobalNamespace::BasicReverbConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicReverbConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicReverbConfig* GlobalNamespace::BasicReverbConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicReverbConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicReverbConfig::BasicReverbConfig()   {
}
