#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.get_Null
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)()>(&::UnityEngine::Playables::PlayableHandle::get_Null)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822819b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"get_Null", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Playables::PlayableHandle::*)(int32_t)>(&::UnityEngine::Playables::PlayableHandle::GetInput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822815e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInput", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Playables::PlayableHandle::*)(int32_t)>(&::UnityEngine::Playables::PlayableHandle::GetOutput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182281700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetOutput", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.SetInputWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableHandle::*)(int32_t, float_t)>(&::UnityEngine::Playables::PlayableHandle::SetInputWeight)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822818b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetInputWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::Destroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182281350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Playables::PlayableHandle::op_Equality)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182281440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableHandle::*)(::System::Object*)>(&::UnityEngine::Playables::PlayableHandle::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822813b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                    {::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableHandle::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Playables::PlayableHandle::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182281440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182281510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                    {::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.CompareVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableHandle, ::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Playables::PlayableHandle::CompareVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180bbb1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"CompareVersion", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.CheckInputBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableHandle::*)(int32_t)>(&::UnityEngine::Playables::PlayableHandle::CheckInputBounds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822811f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"CheckInputBounds", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.CheckInputBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableHandle::*)(int32_t, bool)>(&::UnityEngine::Playables::PlayableHandle::CheckInputBounds)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182281210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"CheckInputBounds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822817f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetPlayableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetPlayableType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetPlayableType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetJobType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetJobType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetJobType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.SetScriptInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)(::System::Object*)>(&::UnityEngine::Playables::PlayableHandle::SetScriptInstance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetScriptInstance", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::Play)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::Pause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetSpeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822817b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.SetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)(double_t)>(&::UnityEngine::Playables::PlayableHandle::SetSpeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetSpeed", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822817d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.SetTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)(double_t)>(&::UnityEngine::Playables::PlayableHandle::SetTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.SetDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)(double_t)>(&::UnityEngine::Playables::PlayableHandle::SetDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetDuration", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetGraph)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822814b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetInputCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetInputCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInputCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.SetInputCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)(int32_t)>(&::UnityEngine::Playables::PlayableHandle::SetInputCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetInputCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetJobData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetJobData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetJobData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetScriptInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Playables::PlayableHandle::*)()>(&::UnityEngine::Playables::PlayableHandle::GetScriptInstance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetScriptInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetInputHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Playables::PlayableHandle::*)(int32_t)>(&::UnityEngine::Playables::PlayableHandle::GetInputHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182281580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInputHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetOutputHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Playables::PlayableHandle::*)(int32_t)>(&::UnityEngine::Playables::PlayableHandle::GetOutputHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822816a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetOutputHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.SetInputWeightFromIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableHandle::*)(int32_t, float_t)>(&::UnityEngine::Playables::PlayableHandle::SetInputWeightFromIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetInputWeightFromIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetGraph_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::by_ref<::UnityEngine::Playables::PlayableGraph>)>(&::UnityEngine::Playables::PlayableHandle::GetGraph_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822814a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetGraph_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetInputHandle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Playables::PlayableHandle::GetInputHandle_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182281570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInputHandle_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableHandle.GetOutputHandle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Playables::PlayableHandle::GetOutputHandle_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182281690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetOutputHandle_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Playables::PlayableHandle::setStaticF_m_Null(::UnityEngine::Playables::PlayableHandle  value)  {
::cordl_internals::setStaticField<::UnityEngine::Playables::PlayableHandle, "m_Null", ::UnityEngine::Playables::PlayableHandle>(std::forward<::UnityEngine::Playables::PlayableHandle>(value));
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableHandle::getStaticF_m_Null()  {
return ::cordl_internals::getStaticField<::UnityEngine::Playables::PlayableHandle, "m_Null", ::UnityEngine::Playables::PlayableHandle>();
}
template<typename T>
inline T UnityEngine::Playables::PlayableHandle::GetObject()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                    {"GetObject", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Playables::PlayableHandle::IsPlayableOfType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                    {"IsPlayableOfType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableHandle::get_Null()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"get_Null", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableHandle::GetInput(int32_t  inputPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInput", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(*this, ___internal_method, inputPort);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableHandle::GetOutput(int32_t  outputPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetOutput", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(*this, ___internal_method, outputPort);
}
inline bool UnityEngine::Playables::PlayableHandle::SetInputWeight(int32_t  inputIndex, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetInputWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, inputIndex, weight);
}
inline void UnityEngine::Playables::PlayableHandle::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableHandle::op_Equality(::UnityEngine::Playables::PlayableHandle  x, ::UnityEngine::Playables::PlayableHandle  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool UnityEngine::Playables::PlayableHandle::Equals(::System::Object*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, p);
}
inline bool UnityEngine::Playables::PlayableHandle::Equals(::UnityEngine::Playables::PlayableHandle  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Playables::PlayableHandle::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableHandle::CompareVersion(::UnityEngine::Playables::PlayableHandle  lhs, ::UnityEngine::Playables::PlayableHandle  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"CompareVersion", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Playables::PlayableHandle::CheckInputBounds(int32_t  inputIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"CheckInputBounds", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, inputIndex);
}
inline bool UnityEngine::Playables::PlayableHandle::CheckInputBounds(int32_t  inputIndex, bool  acceptAny)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"CheckInputBounds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, inputIndex, acceptAny);
}
inline bool UnityEngine::Playables::PlayableHandle::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Type* UnityEngine::Playables::PlayableHandle::GetPlayableType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetPlayableType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline ::System::Type* UnityEngine::Playables::PlayableHandle::GetJobType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetJobType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableHandle::SetScriptInstance(::System::Object*  scriptInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetScriptInstance", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, scriptInstance);
}
inline void UnityEngine::Playables::PlayableHandle::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableHandle::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline double_t UnityEngine::Playables::PlayableHandle::GetSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableHandle::SetSpeed(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetSpeed", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableHandle::GetTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableHandle::SetTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableHandle::SetDuration(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetDuration", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableHandle::GetGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(*this, ___internal_method);
}
inline int32_t UnityEngine::Playables::PlayableHandle::GetInputCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInputCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableHandle::SetInputCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetInputCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableHandle::GetJobData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetJobData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::Playables::PlayableHandle::GetScriptInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetScriptInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableHandle::GetInputHandle(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInputHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method, index);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableHandle::GetOutputHandle(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetOutputHandle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method, index);
}
inline void UnityEngine::Playables::PlayableHandle::SetInputWeightFromIndex(int32_t  index, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"SetInputWeightFromIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, weight);
}
inline void UnityEngine::Playables::PlayableHandle::GetGraph_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetGraph_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Playables::PlayableHandle::GetInputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetInputHandle_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline void UnityEngine::Playables::PlayableHandle::GetOutputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableHandle>(),
                        {"GetOutputHandle_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
constexpr  UnityEngine::Playables::PlayableHandle::operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>* UnityEngine::Playables::PlayableHandle::i___System__IEquatable_1___UnityEngine__Playables__PlayableHandle_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableHandle::PlayableHandle(::System::IntPtr  m_Handle, uint32_t  m_Version) noexcept  {
this->m_Handle = m_Handle;
this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableHandle::PlayableHandle()   {
}
