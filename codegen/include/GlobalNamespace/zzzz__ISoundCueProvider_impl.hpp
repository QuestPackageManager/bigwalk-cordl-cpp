#pragma once
// IWYU pragma private; include "GlobalNamespace/ISoundCueProvider.hpp"
#include "GlobalNamespace/zzzz__ISoundCueProvider_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISoundCueProvider.GetCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::ISoundCueProvider::*)()>(&::GlobalNamespace::ISoundCueProvider::GetCue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ISoundCueProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::ISoundCueProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISoundCueProvider.GetAllCues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* (::GlobalNamespace::ISoundCueProvider::*)()>(&::GlobalNamespace::ISoundCueProvider::GetAllCues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ISoundCueProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::ISoundCueProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::ISoundCueProvider::GetCue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ISoundCueProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* GlobalNamespace::ISoundCueProvider::GetAllCues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ISoundCueProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>*>(this, ___internal_method);
}
