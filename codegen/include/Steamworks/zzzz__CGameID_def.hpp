#pragma once
// IWYU pragma private; include "Steamworks/CGameID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CGameID)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CGameID_EGameIDType;
}
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
struct CGameID_EGameIDType;
}
namespace Steamworks {
struct CGameID;
}
// Write type traits
MARK_VAL_T(::Steamworks::CGameID_EGameIDType);
MARK_VAL_T(::Steamworks::CGameID);
DEFINE_IL2CPP_CLASS(::Steamworks::CGameID_EGameIDType, "Steamworks", "CGameID/EGameIDType");
DEFINE_IL2CPP_CLASS(::Steamworks::CGameID, "Steamworks", "CGameID");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.CGameID/EGameIDType
struct CORDL_TYPE CGameID_EGameIDType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CGameID_EGameIDType_Unwrapped
enum struct __CGameID_EGameIDType_Unwrapped : int32_t {
__E_k_EGameIDTypeApp = static_cast<int32_t>(0x0),
__E_k_EGameIDTypeGameMod = static_cast<int32_t>(0x1),
__E_k_EGameIDTypeShortcut = static_cast<int32_t>(0x2),
__E_k_EGameIDTypeP2P = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CGameID_EGameIDType_Unwrapped () const noexcept {
return static_cast<__CGameID_EGameIDType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CGameID_EGameIDType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CGameID_EGameIDType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16401};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EGameIDTypeApp value: I32(0)
static ::Steamworks::CGameID_EGameIDType const k_EGameIDTypeApp;

/// @brief Field k_EGameIDTypeGameMod value: I32(1)
static ::Steamworks::CGameID_EGameIDType const k_EGameIDTypeGameMod;

/// @brief Field k_EGameIDTypeP2P value: I32(3)
static ::Steamworks::CGameID_EGameIDType const k_EGameIDTypeP2P;

/// @brief Field k_EGameIDTypeShortcut value: I32(2)
static ::Steamworks::CGameID_EGameIDType const k_EGameIDTypeShortcut;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::CGameID_EGameIDType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CGameID_EGameIDType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.CGameID
struct CORDL_TYPE CGameID {
public:
// Declarations
using EGameIDType = ::Steamworks::CGameID_EGameIDType;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::CGameID>"
constexpr operator  ::System::IComparable_1<::Steamworks::CGameID>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::CGameID>"
constexpr operator  ::System::IEquatable_1<::Steamworks::CGameID>*() ;

/// @brief Method AppID, addr 0x1805a8450, size 0x20, virtual false, abstract: false, final false
inline ::Steamworks::AppId_t AppID() ;

/// @brief Method CompareTo, addr 0x1805a8470, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::CGameID  other) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::CGameID  other) ;

/// @brief Method Equals, addr 0x1805a8490, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8520, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsMod, addr 0x1805a8540, size 0x20, virtual false, abstract: false, final false
inline bool IsMod() ;

/// @brief Method IsP2PFile, addr 0x1805a8560, size 0x20, virtual false, abstract: false, final false
inline bool IsP2PFile() ;

/// @brief Method IsShortcut, addr 0x1805a8580, size 0x20, virtual false, abstract: false, final false
inline bool IsShortcut() ;

/// @brief Method IsSteamApp, addr 0x1805a85a0, size 0x20, virtual false, abstract: false, final false
inline bool IsSteamApp() ;

/// @brief Method IsValid, addr 0x1805a85c0, size 0x110, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ModID, addr 0x1805a86d0, size 0x20, virtual false, abstract: false, final false
inline uint32_t ModID() ;

/// @brief Method Reset, addr 0x18035d7d0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Set, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void Set(uint64_t  GameID) ;

/// @brief Method SetAppID, addr 0x1805a86f0, size 0x30, virtual false, abstract: false, final false
inline void SetAppID(::Steamworks::AppId_t  other) ;

/// @brief Method SetModID, addr 0x1805a8720, size 0x20, virtual false, abstract: false, final false
inline void SetModID(uint32_t  other) ;

/// @brief Method SetType, addr 0x1805a8740, size 0x30, virtual false, abstract: false, final false
inline void SetType(::Steamworks::CGameID_EGameIDType  other) ;

/// @brief Method ToString, addr 0x1805a8770, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Type, addr 0x1805a8790, size 0x20, virtual false, abstract: false, final false
inline ::Steamworks::CGameID_EGameIDType Type() ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t  GameID) ;

/// @brief Method .ctor, addr 0x1805a87e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::AppId_t  nAppID) ;

/// @brief Method .ctor, addr 0x1805a87b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::AppId_t  nAppID, uint32_t  nModID) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::CGameID>"
constexpr ::System::IComparable_1<::Steamworks::CGameID>* i___System__IComparable_1___Steamworks__CGameID_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::CGameID>"
constexpr ::System::IEquatable_1<::Steamworks::CGameID>* i___System__IEquatable_1___Steamworks__CGameID_() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::CGameID  x, ::Steamworks::CGameID  y) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::CGameID op_Explicit___Steamworks__CGameID(uint64_t  value) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::Steamworks::CGameID  that) ;

/// @brief Method op_Inequality, addr 0x1805a8810, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::CGameID  x, ::Steamworks::CGameID  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr CGameID() ;

// Ctor Parameters [CppParam { name: "m_GameID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr CGameID(uint64_t  m_GameID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16402};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_GameID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_GameID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::CGameID, m_GameID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CGameID) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
