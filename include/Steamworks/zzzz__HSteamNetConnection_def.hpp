#pragma once
// IWYU pragma private; include "Steamworks/HSteamNetConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HSteamNetConnection)
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
struct HSteamNetConnection;
}
// Write type traits
MARK_VAL_T(::Steamworks::HSteamNetConnection);
DEFINE_IL2CPP_CLASS(::Steamworks::HSteamNetConnection, "Steamworks", "HSteamNetConnection");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HSteamNetConnection
struct CORDL_TYPE HSteamNetConnection {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::HSteamNetConnection  Invalid;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HSteamNetConnection>"
constexpr operator  ::System::IComparable_1<::Steamworks::HSteamNetConnection>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HSteamNetConnection>"
constexpr operator  ::System::IEquatable_1<::Steamworks::HSteamNetConnection>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::HSteamNetConnection  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::HSteamNetConnection  other) ;

/// @brief Method Equals, addr 0x1805aa1a0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8320, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

static inline ::Steamworks::HSteamNetConnection getStaticF_Invalid() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::HSteamNetConnection>"
constexpr ::System::IComparable_1<::Steamworks::HSteamNetConnection>* i___System__IComparable_1___Steamworks__HSteamNetConnection_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::HSteamNetConnection>"
constexpr ::System::IEquatable_1<::Steamworks::HSteamNetConnection>* i___System__IEquatable_1___Steamworks__HSteamNetConnection_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::HSteamNetConnection  x, ::Steamworks::HSteamNetConnection  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamNetConnection op_Explicit___Steamworks__HSteamNetConnection(uint32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Steamworks::HSteamNetConnection  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::HSteamNetConnection  x, ::Steamworks::HSteamNetConnection  y) ;

static inline void setStaticF_Invalid(::Steamworks::HSteamNetConnection  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HSteamNetConnection() ;

// Ctor Parameters [CppParam { name: "m_HSteamNetConnection", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HSteamNetConnection(uint32_t  m_HSteamNetConnection) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_HSteamNetConnection, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_HSteamNetConnection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::HSteamNetConnection, m_HSteamNetConnection) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HSteamNetConnection) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
