#pragma once
// IWYU pragma private; include "MA/Flora/InstanceContext.hpp"
#include "MA/Flora/zzzz__CullingGrid_impl.hpp"
#include "MA/Flora/zzzz__DrawManager_impl.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__NativeData_1_impl.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_impl.hpp"
#include "MA/Flora/zzzz__TemplateManager_impl.hpp"
#include "MA/Flora/zzzz__TerrainManager_impl.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__DrawManager_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_def.hpp"
#include "MA/Flora/zzzz__TemplateManager_def.hpp"
#include "MA/Flora/zzzz__TerrainManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ff710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_InstanceManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_InstanceManager)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181481fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_InstanceManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_CullingGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_CullingGrid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181481f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_CullingGrid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_DrawManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager> (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_DrawManager)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181481f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_DrawManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_TemplateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager> (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_TemplateManager)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181482060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_TemplateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_InstanceBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer> (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_InstanceBuffer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181481fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_InstanceBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_StreamingManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager> (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_StreamingManager)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181482020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_StreamingManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.get_TerrainManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::TerrainManager> (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::get_TerrainManager)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814820a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_TerrainManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceContext::*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::InstanceContext::_ctor)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181481c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceContext::*)()>(&::MA::Flora::InstanceContext::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181481c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::InstanceContext::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> MA::Flora::InstanceContext::get_InstanceManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_InstanceManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> MA::Flora::InstanceContext::get_CullingGrid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_CullingGrid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager> MA::Flora::InstanceContext::get_DrawManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_DrawManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager> MA::Flora::InstanceContext::get_TemplateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_TemplateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer> MA::Flora::InstanceContext::get_InstanceBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_InstanceBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager> MA::Flora::InstanceContext::get_StreamingManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_StreamingManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>>(*this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::TerrainManager> MA::Flora::InstanceContext::get_TerrainManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"get_TerrainManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::TerrainManager>>(*this, ___internal_method);
}
inline void MA::Flora::InstanceContext::_ctor(::MA::Flora::FloraRuntimeResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resources);
}
inline void MA::Flora::InstanceContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceContext>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::InstanceContext::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::InstanceContext::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CullingGrid", ty: "::MA::Flora::NativeData_1<::MA::Flora::CullingGrid>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DrawManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::DrawManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TemplateManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::TemplateManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceBuffer", ty: "::MA::Flora::NativeData_1<::MA::Flora::InstanceBuffer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StreamingManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::StreamingSphereManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TerrainManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::TerrainManager>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceContext::InstanceContext(::MA::Flora::NativeData_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeData_1<::MA::Flora::CullingGrid>  m_CullingGrid, ::MA::Flora::NativeData_1<::MA::Flora::DrawManager>  m_DrawManager, ::MA::Flora::NativeData_1<::MA::Flora::TemplateManager>  m_TemplateManager, ::MA::Flora::NativeData_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer, ::MA::Flora::NativeData_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager, ::MA::Flora::NativeData_1<::MA::Flora::TerrainManager>  m_TerrainManager) noexcept  {
this->m_InstanceManager = m_InstanceManager;
this->m_CullingGrid = m_CullingGrid;
this->m_DrawManager = m_DrawManager;
this->m_TemplateManager = m_TemplateManager;
this->m_InstanceBuffer = m_InstanceBuffer;
this->m_StreamingManager = m_StreamingManager;
this->m_TerrainManager = m_TerrainManager;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceContext::InstanceContext()   {
}
