#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/InitializeThreadAffinityInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeThreadAffinityInternal)
namespace Epic::OnlineServices::Platform {
struct InitializeThreadAffinity;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct InitializeThreadAffinityInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, "Epic.OnlineServices.Platform", "InitializeThreadAffinityInternal");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.InitializeThreadAffinityInternal
struct CORDL_TYPE InitializeThreadAffinityInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f7de0, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__InitializeThreadAffinity_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InitializeThreadAffinityInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NetworkWork", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_StorageIo", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_WebSocketIo", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_P2PIo", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_HttpRequestIo", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_RTCIo", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_EmbeddedOverlayMainThread", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_EmbeddedOverlayWorkerThreads", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_CryptographyWork", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr InitializeThreadAffinityInternal(int32_t  m_ApiVersion, uint64_t  m_NetworkWork, uint64_t  m_StorageIo, uint64_t  m_WebSocketIo, uint64_t  m_P2PIo, uint64_t  m_HttpRequestIo, uint64_t  m_RTCIo, uint64_t  m_EmbeddedOverlayMainThread, uint64_t  m_EmbeddedOverlayWorkerThreads, uint64_t  m_CryptographyWork) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_NetworkWork, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_NetworkWork;

/// @brief Field m_StorageIo, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_StorageIo;

/// @brief Field m_WebSocketIo, offset: 0x18, size: 0x8, def value: None
 uint64_t  m_WebSocketIo;

/// @brief Field m_P2PIo, offset: 0x20, size: 0x8, def value: None
 uint64_t  m_P2PIo;

/// @brief Field m_HttpRequestIo, offset: 0x28, size: 0x8, def value: None
 uint64_t  m_HttpRequestIo;

/// @brief Field m_RTCIo, offset: 0x30, size: 0x8, def value: None
 uint64_t  m_RTCIo;

/// @brief Field m_EmbeddedOverlayMainThread, offset: 0x38, size: 0x8, def value: None
 uint64_t  m_EmbeddedOverlayMainThread;

/// @brief Field m_EmbeddedOverlayWorkerThreads, offset: 0x40, size: 0x8, def value: None
 uint64_t  m_EmbeddedOverlayWorkerThreads;

/// @brief Field m_CryptographyWork, offset: 0x48, size: 0x8, def value: None
 uint64_t  m_CryptographyWork;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_NetworkWork) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_StorageIo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_WebSocketIo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_P2PIo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_HttpRequestIo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_RTCIo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_EmbeddedOverlayMainThread) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_EmbeddedOverlayWorkerThreads) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal, m_CryptographyWork) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
