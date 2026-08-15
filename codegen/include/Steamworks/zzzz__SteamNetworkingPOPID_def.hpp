#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingPOPID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingPOPID)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
struct SteamNetworkingPOPID;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingPOPID);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingPOPID, "Steamworks", "SteamNetworkingPOPID");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingPOPID
struct CORDL_TYPE SteamNetworkingPOPID {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::SteamNetworkingPOPID>"
constexpr operator  ::System::IComparable_1<::Steamworks::SteamNetworkingPOPID>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingPOPID>"
constexpr operator  ::System::IEquatable_1<::Steamworks::SteamNetworkingPOPID>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::SteamNetworkingPOPID  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::SteamNetworkingPOPID  other) ;

/// @brief Method Equals, addr 0x1805b50b0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8320, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::SteamNetworkingPOPID>"
constexpr ::System::IComparable_1<::Steamworks::SteamNetworkingPOPID>* i___System__IComparable_1___Steamworks__SteamNetworkingPOPID_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingPOPID>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingPOPID>* i___System__IEquatable_1___Steamworks__SteamNetworkingPOPID_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::SteamNetworkingPOPID  x, ::Steamworks::SteamNetworkingPOPID  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::SteamNetworkingPOPID op_Explicit___Steamworks__SteamNetworkingPOPID(uint32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Steamworks::SteamNetworkingPOPID  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::SteamNetworkingPOPID  x, ::Steamworks::SteamNetworkingPOPID  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingPOPID() ;

// Ctor Parameters [CppParam { name: "m_SteamNetworkingPOPID", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SteamNetworkingPOPID(uint32_t  m_SteamNetworkingPOPID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16444};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_SteamNetworkingPOPID, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_SteamNetworkingPOPID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingPOPID, m_SteamNetworkingPOPID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingPOPID) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
