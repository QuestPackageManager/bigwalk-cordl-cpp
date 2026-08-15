#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioBasicReverb.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioBasicReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioBasicReverb_def.hpp"
#include "GlobalNamespace/zzzz__BasicReverbZone_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb_SortByPriority.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioBasicReverb_SortByPriority::*)(::GlobalNamespace::BasicReverbZone*, ::GlobalNamespace::BasicReverbZone*)>(&::GlobalNamespace::AudioBasicReverb_SortByPriority::Compare)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180482d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb_SortByPriority*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::BasicReverbZone*>(), ::i2c::type_of<::GlobalNamespace::BasicReverbZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb_SortByPriority._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb_SortByPriority::*)()>(&::GlobalNamespace::AudioBasicReverb_SortByPriority::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb_SortByPriority*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::AudioBasicReverb_SortByPriority::Compare(::GlobalNamespace::BasicReverbZone*  x, ::GlobalNamespace::BasicReverbZone*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb_SortByPriority*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::BasicReverbZone*>(), ::i2c::type_of<::GlobalNamespace::BasicReverbZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void GlobalNamespace::AudioBasicReverb_SortByPriority::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb_SortByPriority*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioBasicReverb_SortByPriority* GlobalNamespace::AudioBasicReverb_SortByPriority::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioBasicReverb_SortByPriority*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>"
constexpr  GlobalNamespace::AudioBasicReverb_SortByPriority::operator ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>* GlobalNamespace::AudioBasicReverb_SortByPriority::i___System__Collections__Generic__IComparer_1___UnityW___GlobalNamespace__BasicReverbZone__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioBasicReverb_SortByPriority::AudioBasicReverb_SortByPriority()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_Mixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_Mixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Mixer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_Mixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(::UnityEngine::Audio::AudioMixer*)>(&::GlobalNamespace::AudioBasicReverb::set_Mixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Mixer", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_DryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_DryLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_DryLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_DryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_DryLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_DryLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_Room)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Room", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_Room)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Room", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_RoomHF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_RoomHF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_RoomHF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_RoomHF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_RoomHF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_RoomHF", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_RoomLF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_RoomLF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_RoomLF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_RoomLF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_RoomLF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_RoomLF", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_DecayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_DecayTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_DecayTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_DecayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_DecayTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_DecayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_DecayHFRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_DecayHFRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_DecayHFRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_DecayHFRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_DecayHFRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_DecayHFRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_Reflections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_Reflections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Reflections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_Reflections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_Reflections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Reflections", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_ReflectDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_ReflectDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_ReflectDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_ReflectDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_ReflectDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_ReflectDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_Reverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_Reverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Reverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_Reverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_Reverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Reverb", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_ReverbDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_ReverbDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_ReverbDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_ReverbDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_ReverbDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_ReverbDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_HFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_HFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_HFReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_HFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_HFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_HFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_LFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_LFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_LFReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_LFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_LFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_LFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_Diffusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_Diffusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Diffusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_Diffusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_Diffusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Diffusion", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.get_Density
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::get_Density)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Density", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.set_Density
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(float_t)>(&::GlobalNamespace::AudioBasicReverb::set_Density)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Density", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(::UnityEngine::Audio::AudioMixer*)>(&::GlobalNamespace::AudioBasicReverb::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.UpdateReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::UpdateReverb)> {
  constexpr static std::size_t size = 0xbe0;
  constexpr static std::size_t addrs = 0x18046ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"UpdateReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.EnterReverbZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(::GlobalNamespace::BasicReverbZone*)>(&::GlobalNamespace::AudioBasicReverb::EnterReverbZone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18046ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"EnterReverbZone", {}, {::i2c::type_of<::GlobalNamespace::BasicReverbZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb.ExitReverbZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)(::GlobalNamespace::BasicReverbZone*)>(&::GlobalNamespace::AudioBasicReverb::ExitReverbZone)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18046ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"ExitReverbZone", {}, {::i2c::type_of<::GlobalNamespace::BasicReverbZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBasicReverb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBasicReverb::*)()>(&::GlobalNamespace::AudioBasicReverb::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18046fa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioBasicReverb::__cordl_internal_get_Bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bypass;
}
constexpr bool const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get_Bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bypass;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set_Bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bypass = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Mixer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Mixer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__Mixer_k__BackingField(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mixer_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__DryLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DryLevel_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__DryLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DryLevel_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__DryLevel_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DryLevel_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Room_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Room_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Room_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Room_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__Room_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Room_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__RoomHF_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomHF_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__RoomHF_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomHF_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__RoomHF_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomHF_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__RoomLF_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomLF_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__RoomLF_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomLF_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__RoomLF_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomLF_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__DecayTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DecayTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__DecayTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DecayTime_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__DecayTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DecayTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__DecayHFRatio_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DecayHFRatio_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__DecayHFRatio_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DecayHFRatio_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__DecayHFRatio_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DecayHFRatio_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Reflections_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reflections_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Reflections_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reflections_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__Reflections_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reflections_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__ReflectDelay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectDelay_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__ReflectDelay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReflectDelay_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__ReflectDelay_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReflectDelay_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Reverb_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reverb_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Reverb_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reverb_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__Reverb_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reverb_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__ReverbDelay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverbDelay_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__ReverbDelay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverbDelay_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__ReverbDelay_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReverbDelay_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__HFReference_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HFReference_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__HFReference_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HFReference_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__HFReference_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HFReference_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__LFReference_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LFReference_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__LFReference_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LFReference_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__LFReference_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LFReference_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Diffusion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Diffusion_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Diffusion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Diffusion_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__Diffusion_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Diffusion_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Density_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Density_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__Density_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Density_k__BackingField;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__Density_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Density_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__reverbZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>* const& GlobalNamespace::AudioBasicReverb::__cordl_internal_get__reverbZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbZones;
}
constexpr void GlobalNamespace::AudioBasicReverb::__cordl_internal_set__reverbZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BasicReverbZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverbZones = value;
}
inline void GlobalNamespace::AudioBasicReverb::setStaticF_s_sort(::GlobalNamespace::AudioBasicReverb_SortByPriority*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AudioBasicReverb_SortByPriority*, "s_sort", ::GlobalNamespace::AudioBasicReverb*>(std::forward<::GlobalNamespace::AudioBasicReverb_SortByPriority*>(value));
}
inline ::GlobalNamespace::AudioBasicReverb_SortByPriority* GlobalNamespace::AudioBasicReverb::getStaticF_s_sort()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AudioBasicReverb_SortByPriority*, "s_sort", ::GlobalNamespace::AudioBasicReverb*>();
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> GlobalNamespace::AudioBasicReverb::get_Mixer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Mixer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_Mixer(::UnityEngine::Audio::AudioMixer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Mixer", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_DryLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_DryLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_DryLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_DryLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_Room()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Room", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_Room(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Room", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_RoomHF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_RoomHF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_RoomHF(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_RoomHF", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_RoomLF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_RoomLF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_RoomLF(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_RoomLF", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_DecayTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_DecayTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_DecayTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_DecayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_DecayHFRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_DecayHFRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_DecayHFRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_DecayHFRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_Reflections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Reflections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_Reflections(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Reflections", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_ReflectDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_ReflectDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_ReflectDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_ReflectDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_Reverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Reverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_Reverb(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Reverb", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_ReverbDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_ReverbDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_ReverbDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_ReverbDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_HFReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_HFReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_HFReference(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_HFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_LFReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_LFReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_LFReference(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_LFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_Diffusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Diffusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_Diffusion(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Diffusion", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioBasicReverb::get_Density()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"get_Density", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::set_Density(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"set_Density", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioBasicReverb::Initialize(::UnityEngine::Audio::AudioMixer*  mixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer);
}
inline void GlobalNamespace::AudioBasicReverb::UpdateReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"UpdateReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBasicReverb::EnterReverbZone(::GlobalNamespace::BasicReverbZone*  reverbZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"EnterReverbZone", {}, {::i2c::type_of<::GlobalNamespace::BasicReverbZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverbZone);
}
inline void GlobalNamespace::AudioBasicReverb::ExitReverbZone(::GlobalNamespace::BasicReverbZone*  reverbZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {"ExitReverbZone", {}, {::i2c::type_of<::GlobalNamespace::BasicReverbZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverbZone);
}
inline void GlobalNamespace::AudioBasicReverb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBasicReverb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioBasicReverb* GlobalNamespace::AudioBasicReverb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioBasicReverb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioBasicReverb::AudioBasicReverb()   {
}
