#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableGraph.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorUpdateMode_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::PlayableGraph::*)(int32_t)>(&::UnityEngine::Playables::PlayableGraph::GetOutput)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182281090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetOutput", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::Evaluate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182281040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Evaluate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (*)()>(&::UnityEngine::Playables::PlayableGraph::Create)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182280d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (*)(::StringW)>(&::UnityEngine::Playables::PlayableGraph::Create)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182280da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::Destroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182280fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182281170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::IsDone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::Play)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::Stop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822811d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(float_t)>(&::UnityEngine::Playables::PlayableGraph::Evaluate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182281030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetTimeUpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorUpdateMode (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::GetTimeUpdateMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182281140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetTimeUpdateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.SetTimeUpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::DirectorUpdateMode)>(&::UnityEngine::Playables::PlayableGraph::SetTimeUpdateMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822811c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"SetTimeUpdateMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.SetResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::IExposedPropertyTable*)>(&::UnityEngine::Playables::PlayableGraph::SetResolver)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822811a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"SetResolver", {}, {::i2c::type_of<::UnityEngine::IExposedPropertyTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetOutputCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::GetOutputCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetOutputCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreatePlayableHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Playables::PlayableGraph::*)()>(&::UnityEngine::Playables::PlayableGraph::CreatePlayableHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182280bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreatePlayableHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreateScriptOutputInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)(::StringW, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(&::UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182280c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreateScriptOutputInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DestroyOutputInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::PlayableOutputHandle)>(&::UnityEngine::Playables::PlayableGraph::DestroyOutputInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182280ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyOutputInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.GetOutputInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)(int32_t, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(&::UnityEngine::Playables::PlayableGraph::GetOutputInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182281070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetOutputInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.ConnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::PlayableHandle, int32_t, ::UnityEngine::Playables::PlayableHandle, int32_t)>(&::UnityEngine::Playables::PlayableGraph::ConnectInternal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182280b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"ConnectInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DisconnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::PlayableHandle, int32_t)>(&::UnityEngine::Playables::PlayableGraph::DisconnectInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182280ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DisconnectInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DestroyPlayableInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Playables::PlayableGraph::DestroyPlayableInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182280f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyPlayableInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DestroySubgraphInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableGraph::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Playables::PlayableGraph::DestroySubgraphInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182280f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroySubgraphInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.Create_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Playables::PlayableGraph>)>(&::UnityEngine::Playables::PlayableGraph::Create_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Create_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreatePlayableHandle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreatePlayableHandle_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.CreateScriptOutputInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(&::UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreateScriptOutputInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DestroyOutputInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>)>(&::UnityEngine::Playables::PlayableGraph::DestroyOutputInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyOutputInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.ConnectInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t, ::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"ConnectInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DisconnectInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>, int32_t)>(&::UnityEngine::Playables::PlayableGraph::DisconnectInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DisconnectInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DestroyPlayableInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Playables::PlayableGraph::DestroyPlayableInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyPlayableInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableGraph.DestroySubgraphInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Playables::PlayableGraph::DestroySubgraphInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroySubgraphInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename U,typename V>
inline bool UnityEngine::Playables::PlayableGraph::Connect(U  source, int32_t  sourceOutputPort, V  destination, int32_t  destinationInputPort)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                    {"Connect", {::i2c::class_of<U>(), ::i2c::class_of<V>()}, {::i2c::type_of<U>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<V>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, source, sourceOutputPort, destination, destinationInputPort);
}
template<typename U>
inline void UnityEngine::Playables::PlayableGraph::Disconnect(U  input, int32_t  inputPort)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                    {"Disconnect", {::i2c::class_of<U>()}, {::i2c::type_of<U>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input, inputPort);
}
template<typename U>
inline void UnityEngine::Playables::PlayableGraph::DestroyPlayable(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                    {"DestroyPlayable", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableGraph::DestroySubgraph(U  playable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                    {"DestroySubgraph", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playable);
}
template<typename U>
inline void UnityEngine::Playables::PlayableGraph::DestroyOutput(U  output)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                    {"DestroyOutput", {::i2c::class_of<U>()}, {::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableGraph::GetOutput(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetOutput", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(*this, ___internal_method, index);
}
inline void UnityEngine::Playables::PlayableGraph::Evaluate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Evaluate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableGraph::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(nullptr, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableGraph::Create(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Playables::PlayableGraph::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableGraph::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableGraph::IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableGraph::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableGraph::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableGraph::Evaluate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deltaTime);
}
inline ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::PlayableGraph::GetTimeUpdateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetTimeUpdateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorUpdateMode>(*this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableGraph::SetTimeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"SetTimeUpdateMode", {}, {::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableGraph::SetResolver(::UnityEngine::IExposedPropertyTable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"SetResolver", {}, {::i2c::type_of<::UnityEngine::IExposedPropertyTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Playables::PlayableGraph::GetOutputCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetOutputCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::PlayableGraph::CreatePlayableHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreatePlayableHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal(::StringW  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreateScriptOutputInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name, handle);
}
inline void UnityEngine::Playables::PlayableGraph::DestroyOutputInternal(::UnityEngine::Playables::PlayableOutputHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyOutputInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline bool UnityEngine::Playables::PlayableGraph::GetOutputInternal(int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"GetOutputInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index, handle);
}
inline bool UnityEngine::Playables::PlayableGraph::ConnectInternal(::UnityEngine::Playables::PlayableHandle  source, int32_t  sourceOutputPort, ::UnityEngine::Playables::PlayableHandle  destination, int32_t  destinationInputPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"ConnectInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, source, sourceOutputPort, destination, destinationInputPort);
}
inline void UnityEngine::Playables::PlayableGraph::DisconnectInternal(::UnityEngine::Playables::PlayableHandle  playable, int32_t  inputPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DisconnectInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playable, inputPort);
}
inline void UnityEngine::Playables::PlayableGraph::DestroyPlayableInternal(::UnityEngine::Playables::PlayableHandle  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyPlayableInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playable);
}
inline void UnityEngine::Playables::PlayableGraph::DestroySubgraphInternal(::UnityEngine::Playables::PlayableHandle  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroySubgraphInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playable);
}
inline void UnityEngine::Playables::PlayableGraph::Create_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Playables::PlayableGraph>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"Create_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
inline void UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreatePlayableHandle_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"CreateScriptOutputInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name, handle);
}
inline void UnityEngine::Playables::PlayableGraph::DestroyOutputInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyOutputInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, handle);
}
inline bool UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  source, int32_t  sourceOutputPort, ::by_ref<::UnityEngine::Playables::PlayableHandle>  destination, int32_t  destinationInputPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"ConnectInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, source, sourceOutputPort, destination, destinationInputPort);
}
inline void UnityEngine::Playables::PlayableGraph::DisconnectInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  playable, int32_t  inputPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DisconnectInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, playable, inputPort);
}
inline void UnityEngine::Playables::PlayableGraph::DestroyPlayableInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroyPlayableInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, playable);
}
inline void UnityEngine::Playables::PlayableGraph::DestroySubgraphInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::PlayableGraph>(),
                        {"DestroySubgraphInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, playable);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::PlayableGraph::PlayableGraph(::System::IntPtr  m_Handle, uint32_t  m_Version) noexcept  {
this->m_Handle = m_Handle;
this->m_Version = m_Version;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableGraph::PlayableGraph()   {
}
