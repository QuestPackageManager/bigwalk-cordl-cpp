#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/InitializeThreadAffinity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeThreadAffinity)
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct InitializeThreadAffinity;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::InitializeThreadAffinity);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::InitializeThreadAffinity, "Epic.OnlineServices.Platform", "InitializeThreadAffinity");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.InitializeThreadAffinity
struct CORDL_TYPE InitializeThreadAffinity {
public:
// Declarations
 __declspec(property(get=get_CryptographyWork, put=set_CryptographyWork)) uint64_t  CryptographyWork;

 __declspec(property(get=get_EmbeddedOverlayMainThread, put=set_EmbeddedOverlayMainThread)) uint64_t  EmbeddedOverlayMainThread;

 __declspec(property(get=get_EmbeddedOverlayWorkerThreads, put=set_EmbeddedOverlayWorkerThreads)) uint64_t  EmbeddedOverlayWorkerThreads;

 __declspec(property(get=get_HttpRequestIo, put=set_HttpRequestIo)) uint64_t  HttpRequestIo;

 __declspec(property(get=get_NetworkWork, put=set_NetworkWork)) uint64_t  NetworkWork;

 __declspec(property(get=get_P2PIo, put=set_P2PIo)) uint64_t  P2PIo;

 __declspec(property(get=get_RTCIo, put=set_RTCIo)) uint64_t  RTCIo;

 __declspec(property(get=get_StorageIo, put=set_StorageIo)) uint64_t  StorageIo;

 __declspec(property(get=get_WebSocketIo, put=set_WebSocketIo)) uint64_t  WebSocketIo;

/// @brief Method get_CryptographyWork, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_CryptographyWork() ;

/// @brief Method get_EmbeddedOverlayMainThread, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_EmbeddedOverlayMainThread() ;

/// @brief Method get_EmbeddedOverlayWorkerThreads, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_EmbeddedOverlayWorkerThreads() ;

/// @brief Method get_HttpRequestIo, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_HttpRequestIo() ;

/// @brief Method get_NetworkWork, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_NetworkWork() ;

/// @brief Method get_P2PIo, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_P2PIo() ;

/// @brief Method get_RTCIo, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_RTCIo() ;

/// @brief Method get_StorageIo, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_StorageIo() ;

/// @brief Method get_WebSocketIo, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_WebSocketIo() ;

/// @brief Method set_CryptographyWork, addr 0x1804f6730, size 0x10, virtual false, abstract: false, final false
inline void set_CryptographyWork(uint64_t  value) ;

/// @brief Method set_EmbeddedOverlayMainThread, addr 0x1803c8fa0, size 0x10, virtual false, abstract: false, final false
inline void set_EmbeddedOverlayMainThread(uint64_t  value) ;

/// @brief Method set_EmbeddedOverlayWorkerThreads, addr 0x1803c8fb0, size 0x10, virtual false, abstract: false, final false
inline void set_EmbeddedOverlayWorkerThreads(uint64_t  value) ;

/// @brief Method set_HttpRequestIo, addr 0x1804f6740, size 0x10, virtual false, abstract: false, final false
inline void set_HttpRequestIo(uint64_t  value) ;

/// @brief Method set_NetworkWork, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_NetworkWork(uint64_t  value) ;

/// @brief Method set_P2PIo, addr 0x1803bda70, size 0x10, virtual false, abstract: false, final false
inline void set_P2PIo(uint64_t  value) ;

/// @brief Method set_RTCIo, addr 0x1804f6720, size 0x10, virtual false, abstract: false, final false
inline void set_RTCIo(uint64_t  value) ;

/// @brief Method set_StorageIo, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_StorageIo(uint64_t  value) ;

/// @brief Method set_WebSocketIo, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_WebSocketIo(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InitializeThreadAffinity() ;

// Ctor Parameters [CppParam { name: "_NetworkWork_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_StorageIo_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_WebSocketIo_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_P2PIo_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_HttpRequestIo_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_RTCIo_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_EmbeddedOverlayMainThread_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_EmbeddedOverlayWorkerThreads_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_CryptographyWork_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr InitializeThreadAffinity(uint64_t  _NetworkWork_k__BackingField, uint64_t  _StorageIo_k__BackingField, uint64_t  _WebSocketIo_k__BackingField, uint64_t  _P2PIo_k__BackingField, uint64_t  _HttpRequestIo_k__BackingField, uint64_t  _RTCIo_k__BackingField, uint64_t  _EmbeddedOverlayMainThread_k__BackingField, uint64_t  _EmbeddedOverlayWorkerThreads_k__BackingField, uint64_t  _CryptographyWork_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8352};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <NetworkWork>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _NetworkWork_k__BackingField;

/// @brief Field <StorageIo>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _StorageIo_k__BackingField;

/// @brief Field <WebSocketIo>k__BackingField, offset: 0x10, size: 0x8, def value: None
 uint64_t  _WebSocketIo_k__BackingField;

/// @brief Field <P2PIo>k__BackingField, offset: 0x18, size: 0x8, def value: None
 uint64_t  _P2PIo_k__BackingField;

/// @brief Field <HttpRequestIo>k__BackingField, offset: 0x20, size: 0x8, def value: None
 uint64_t  _HttpRequestIo_k__BackingField;

/// @brief Field <RTCIo>k__BackingField, offset: 0x28, size: 0x8, def value: None
 uint64_t  _RTCIo_k__BackingField;

/// @brief Field <EmbeddedOverlayMainThread>k__BackingField, offset: 0x30, size: 0x8, def value: None
 uint64_t  _EmbeddedOverlayMainThread_k__BackingField;

/// @brief Field <EmbeddedOverlayWorkerThreads>k__BackingField, offset: 0x38, size: 0x8, def value: None
 uint64_t  _EmbeddedOverlayWorkerThreads_k__BackingField;

/// @brief Field <CryptographyWork>k__BackingField, offset: 0x40, size: 0x8, def value: None
 uint64_t  _CryptographyWork_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _NetworkWork_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _StorageIo_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _WebSocketIo_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _P2PIo_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _HttpRequestIo_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _RTCIo_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _EmbeddedOverlayMainThread_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _EmbeddedOverlayWorkerThreads_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinity, _CryptographyWork_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::InitializeThreadAffinity) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
