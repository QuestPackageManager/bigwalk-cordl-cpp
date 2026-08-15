#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SocketIdInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketIdInternal)
namespace Epic::OnlineServices::P2P {
struct SocketId;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SocketIdInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SocketIdInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SocketIdInternal, "Epic.OnlineServices.P2P", "SocketIdInternal");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SocketIdInternal
struct CORDL_TYPE SocketIdInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>*() ;

/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Get, addr 0x180533ba0, size 0x60, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::P2P::SocketId>  other) ;

/// @brief Method Set, addr 0x180533c00, size 0x3e0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::P2P::SocketId>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::SocketId>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__SocketId_() ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SocketId>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SocketId_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SocketIdInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SocketName", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SocketIdInternal(int32_t  m_ApiVersion, ::ArrayW<uint8_t>  m_SocketName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9602};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SocketName, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_SocketName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SocketIdInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SocketIdInternal, m_SocketName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SocketIdInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
