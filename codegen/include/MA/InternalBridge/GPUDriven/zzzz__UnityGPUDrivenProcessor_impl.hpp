#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenProcessor_def.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenLODGroupDataCallback_def.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenProcessor_def.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPURendererDataCallback_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenProcessor_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0._DispatchLODGroupData_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::*)(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::_DispatchLODGroupData_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ecdd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0*>(),
                        {"<DispatchLODGroupData>b__0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*& MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback* const& MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::__cordl_internal_set_callback(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::_DispatchLODGroupData_b__0(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>  lodGroupData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0*>(),
                        {"<DispatchLODGroupData>b__0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodGroupData);
}
inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0* MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0::UnityGPUDrivenProcessor___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.get_enablePartialRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::get_enablePartialRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"get_enablePartialRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.set_enablePartialRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)(bool)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::set_enablePartialRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"set_enablePartialRendering", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.get_enableMaterialFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::get_enableMaterialFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"get_enableMaterialFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.set_enableMaterialFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)(bool)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::set_enableMaterialFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"set_enableMaterialFilters", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.EnableGPUDrivenRenderingAndDispatchRendererData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)(::System::ReadOnlySpan_1<::UnityEngine::EntityId>, ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::EnableGPUDrivenRenderingAndDispatchRendererData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ece250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"EnableGPUDrivenRenderingAndDispatchRendererData", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.DisableGPUDrivenRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)(::System::ReadOnlySpan_1<::UnityEngine::EntityId>)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::DisableGPUDrivenRendering)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ece170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"DisableGPUDrivenRendering", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.DispatchLODGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)(::System::ReadOnlySpan_1<::UnityEngine::EntityId>, ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::DispatchLODGroupData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ece1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"DispatchLODGroupData", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor.OnRenderGroupDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)(::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::OnRenderGroupDataChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ece2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"OnRenderGroupDataChanged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ece3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::__cordl_internal_get_m_GPUDrivenProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GPUDrivenProcessor;
}
constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::__cordl_internal_get_m_GPUDrivenProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GPUDrivenProcessor;
}
constexpr void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::__cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GPUDrivenProcessor = value;
}
constexpr ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*& MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::__cordl_internal_get_m_Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Callback;
}
constexpr ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback* const& MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::__cordl_internal_get_m_Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Callback;
}
constexpr void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::__cordl_internal_set_m_Callback(::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Callback = value;
}
inline bool MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::get_enablePartialRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"get_enablePartialRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::set_enablePartialRendering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"set_enablePartialRendering", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::get_enableMaterialFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"get_enableMaterialFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::set_enableMaterialFilters(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"set_enableMaterialFilters", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::EnableGPUDrivenRenderingAndDispatchRendererData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  renderersID, ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"EnableGPUDrivenRenderingAndDispatchRendererData", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderersID, callback);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::DisableGPUDrivenRendering(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  renderersID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"DisableGPUDrivenRendering", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderersID);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::DispatchLODGroupData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  lodGroupID, ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"DispatchLODGroupData", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodGroupID, callback);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::OnRenderGroupDataChanged(::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*  materials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {"OnRenderGroupDataChanged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererData, meshes, materials);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor* MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor::UnityGPUDrivenProcessor()   {
}
