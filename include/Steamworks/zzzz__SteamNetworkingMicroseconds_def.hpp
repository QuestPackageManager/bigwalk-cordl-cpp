#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingMicroseconds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingMicroseconds)
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
struct SteamNetworkingMicroseconds;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkingMicroseconds);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingMicroseconds, "Steamworks", "SteamNetworkingMicroseconds");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkingMicroseconds
struct CORDL_TYPE SteamNetworkingMicroseconds {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::SteamNetworkingMicroseconds>"
constexpr operator  ::System::IComparable_1<::Steamworks::SteamNetworkingMicroseconds>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingMicroseconds>"
constexpr operator  ::System::IEquatable_1<::Steamworks::SteamNetworkingMicroseconds>*() ;

/// @brief Method CompareTo, addr 0x1805b4fe0, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::SteamNetworkingMicroseconds  other) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::SteamNetworkingMicroseconds  other) ;

/// @brief Method Equals, addr 0x1805b5000, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805b5070, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805b5090, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::SteamNetworkingMicroseconds>"
constexpr ::System::IComparable_1<::Steamworks::SteamNetworkingMicroseconds>* i___System__IComparable_1___Steamworks__SteamNetworkingMicroseconds_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingMicroseconds>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingMicroseconds>* i___System__IEquatable_1___Steamworks__SteamNetworkingMicroseconds_() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::SteamNetworkingMicroseconds  x, ::Steamworks::SteamNetworkingMicroseconds  y) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::SteamNetworkingMicroseconds op_Explicit___Steamworks__SteamNetworkingMicroseconds(int64_t  value) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline int64_t op_Explicit_int64_t(::Steamworks::SteamNetworkingMicroseconds  that) ;

/// @brief Method op_Inequality, addr 0x1805a8810, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::SteamNetworkingMicroseconds  x, ::Steamworks::SteamNetworkingMicroseconds  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingMicroseconds() ;

// Ctor Parameters [CppParam { name: "m_SteamNetworkingMicroseconds", ty: "int64_t", modifiers: "", def_value: None }]
constexpr SteamNetworkingMicroseconds(int64_t  m_SteamNetworkingMicroseconds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16443};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_SteamNetworkingMicroseconds, offset: 0x0, size: 0x8, def value: None
 int64_t  m_SteamNetworkingMicroseconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkingMicroseconds, m_SteamNetworkingMicroseconds) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkingMicroseconds) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
