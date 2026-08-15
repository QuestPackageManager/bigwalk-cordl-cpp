#pragma once
// IWYU pragma private; include "Enviro/EnviroAudio.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroAudio_def.hpp"
#include "Enviro/zzzz__EnviroAudioClip_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAudio::*)()>(&::Enviro::EnviroAudio::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805fda30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*& Enviro::EnviroAudio::__cordl_internal_get_ambientClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientClips;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>* const& Enviro::EnviroAudio::__cordl_internal_get_ambientClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientClips;
}
constexpr void Enviro::EnviroAudio::__cordl_internal_set_ambientClips(::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientClips = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*& Enviro::EnviroAudio::__cordl_internal_get_weatherClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherClips;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>* const& Enviro::EnviroAudio::__cordl_internal_get_weatherClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherClips;
}
constexpr void Enviro::EnviroAudio::__cordl_internal_set_weatherClips(::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherClips = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*& Enviro::EnviroAudio::__cordl_internal_get_thunderClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thunderClips;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>* const& Enviro::EnviroAudio::__cordl_internal_get_thunderClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thunderClips;
}
constexpr void Enviro::EnviroAudio::__cordl_internal_set_thunderClips(::System::Collections::Generic::List_1<::Enviro::EnviroAudioClip*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thunderClips = value;
}
constexpr float_t& Enviro::EnviroAudio::__cordl_internal_get_ambientMasterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientMasterVolume;
}
constexpr float_t const& Enviro::EnviroAudio::__cordl_internal_get_ambientMasterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientMasterVolume;
}
constexpr void Enviro::EnviroAudio::__cordl_internal_set_ambientMasterVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientMasterVolume = value;
}
constexpr float_t& Enviro::EnviroAudio::__cordl_internal_get_weatherMasterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMasterVolume;
}
constexpr float_t const& Enviro::EnviroAudio::__cordl_internal_get_weatherMasterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMasterVolume;
}
constexpr void Enviro::EnviroAudio::__cordl_internal_set_weatherMasterVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherMasterVolume = value;
}
constexpr float_t& Enviro::EnviroAudio::__cordl_internal_get_thunderMasterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thunderMasterVolume;
}
constexpr float_t const& Enviro::EnviroAudio::__cordl_internal_get_thunderMasterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thunderMasterVolume;
}
constexpr void Enviro::EnviroAudio::__cordl_internal_set_thunderMasterVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thunderMasterVolume = value;
}
inline void Enviro::EnviroAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroAudio* Enviro::EnviroAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroAudio*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroAudio::EnviroAudio()   {
}
