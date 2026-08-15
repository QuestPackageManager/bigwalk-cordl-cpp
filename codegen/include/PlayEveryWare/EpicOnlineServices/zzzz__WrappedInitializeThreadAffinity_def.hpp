#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WrappedInitializeThreadAffinity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__InitializeThreadAffinity_def.hpp"
#include "PlayEveryWare/Common/zzzz__Wrapped_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WrappedInitializeThreadAffinity)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class WrappedInitializeThreadAffinity;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity*, "PlayEveryWare.EpicOnlineServices", "WrappedInitializeThreadAffinity");
// Dependencies Epic.OnlineServices.Platform.InitializeThreadAffinity, PlayEveryWare.Common.Wrapped`1<T>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.WrappedInitializeThreadAffinity
class CORDL_TYPE WrappedInitializeThreadAffinity : public ::PlayEveryWare::Common::Wrapped_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity> {
public:
// Declarations
 __declspec(property(get=get_EmbeddedOverlayMainThread, put=set_EmbeddedOverlayMainThread)) uint64_t  EmbeddedOverlayMainThread;

 __declspec(property(get=get_EmbeddedOverlayWorkerThreads, put=set_EmbeddedOverlayWorkerThreads)) uint64_t  EmbeddedOverlayWorkerThreads;

 __declspec(property(get=get_HttpRequestIo, put=set_HttpRequestIo)) uint64_t  HttpRequestIo;

 __declspec(property(get=get_NetworkWork, put=set_NetworkWork)) uint64_t  NetworkWork;

 __declspec(property(get=get_P2PIo, put=set_P2PIo)) uint64_t  P2PIo;

 __declspec(property(get=get_RTCIo, put=set_RTCIo)) uint64_t  RTCIo;

 __declspec(property(get=get_StorageIo, put=set_StorageIo)) uint64_t  StorageIo;

 __declspec(property(get=get_WebSocketIo, put=set_WebSocketIo)) uint64_t  WebSocketIo;

static inline ::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EmbeddedOverlayMainThread, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_EmbeddedOverlayMainThread() ;

/// @brief Method get_EmbeddedOverlayWorkerThreads, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_EmbeddedOverlayWorkerThreads() ;

/// @brief Method get_HttpRequestIo, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_HttpRequestIo() ;

/// @brief Method get_NetworkWork, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_NetworkWork() ;

/// @brief Method get_P2PIo, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_P2PIo() ;

/// @brief Method get_RTCIo, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_RTCIo() ;

/// @brief Method get_StorageIo, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_StorageIo() ;

/// @brief Method get_WebSocketIo, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_WebSocketIo() ;

/// @brief Method set_EmbeddedOverlayMainThread, addr 0x1804f6730, size 0x10, virtual false, abstract: false, final false
inline void set_EmbeddedOverlayMainThread(uint64_t  value) ;

/// @brief Method set_EmbeddedOverlayWorkerThreads, addr 0x180511520, size 0x10, virtual false, abstract: false, final false
inline void set_EmbeddedOverlayWorkerThreads(uint64_t  value) ;

/// @brief Method set_HttpRequestIo, addr 0x1803c8fa0, size 0x10, virtual false, abstract: false, final false
inline void set_HttpRequestIo(uint64_t  value) ;

/// @brief Method set_NetworkWork, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_NetworkWork(uint64_t  value) ;

/// @brief Method set_P2PIo, addr 0x1804f6720, size 0x10, virtual false, abstract: false, final false
inline void set_P2PIo(uint64_t  value) ;

/// @brief Method set_RTCIo, addr 0x1803c8fb0, size 0x10, virtual false, abstract: false, final false
inline void set_RTCIo(uint64_t  value) ;

/// @brief Method set_StorageIo, addr 0x1803bda70, size 0x10, virtual false, abstract: false, final false
inline void set_StorageIo(uint64_t  value) ;

/// @brief Method set_WebSocketIo, addr 0x1804f6740, size 0x10, virtual false, abstract: false, final false
inline void set_WebSocketIo(uint64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WrappedInitializeThreadAffinity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WrappedInitializeThreadAffinity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WrappedInitializeThreadAffinity(WrappedInitializeThreadAffinity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WrappedInitializeThreadAffinity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WrappedInitializeThreadAffinity(WrappedInitializeThreadAffinity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18891};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::WrappedInitializeThreadAffinity) == 0x58, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
