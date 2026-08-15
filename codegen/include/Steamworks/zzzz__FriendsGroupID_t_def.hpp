#pragma once
// IWYU pragma private; include "Steamworks/FriendsGroupID_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsGroupID_t)
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
struct FriendsGroupID_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FriendsGroupID_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FriendsGroupID_t, "Steamworks", "FriendsGroupID_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FriendsGroupID_t
struct CORDL_TYPE FriendsGroupID_t {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::FriendsGroupID_t  Invalid;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::FriendsGroupID_t>"
constexpr operator  ::System::IComparable_1<::Steamworks::FriendsGroupID_t>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::FriendsGroupID_t>"
constexpr operator  ::System::IEquatable_1<::Steamworks::FriendsGroupID_t>*() ;

/// @brief Method CompareTo, addr 0x1805a9cd0, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::FriendsGroupID_t  other) ;

/// @brief Method Equals, addr 0x1805a9cf0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::FriendsGroupID_t  other) ;

/// @brief Method Equals, addr 0x1805a9d10, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a9d80, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a9da0, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x18052caa0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int16_t  value) ;

static inline ::Steamworks::FriendsGroupID_t getStaticF_Invalid() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::FriendsGroupID_t>"
constexpr ::System::IComparable_1<::Steamworks::FriendsGroupID_t>* i___System__IComparable_1___Steamworks__FriendsGroupID_t_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::FriendsGroupID_t>"
constexpr ::System::IEquatable_1<::Steamworks::FriendsGroupID_t>* i___System__IEquatable_1___Steamworks__FriendsGroupID_t_() ;

/// @brief Method op_Equality, addr 0x1805a9df0, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::FriendsGroupID_t  x, ::Steamworks::FriendsGroupID_t  y) ;

/// @brief Method op_Explicit, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::FriendsGroupID_t op_Explicit___Steamworks__FriendsGroupID_t(int16_t  value) ;

/// @brief Method op_Explicit, addr 0x1805a9e00, size 0x10, virtual false, abstract: false, final false
static inline int16_t op_Explicit_int16_t(::Steamworks::FriendsGroupID_t  that) ;

/// @brief Method op_Inequality, addr 0x1805a9e10, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::FriendsGroupID_t  x, ::Steamworks::FriendsGroupID_t  y) ;

static inline void setStaticF_Invalid(::Steamworks::FriendsGroupID_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FriendsGroupID_t() ;

// Ctor Parameters [CppParam { name: "m_FriendsGroupID", ty: "int16_t", modifiers: "", def_value: None }]
constexpr FriendsGroupID_t(int16_t  m_FriendsGroupID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16410};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field m_FriendsGroupID, offset: 0x0, size: 0x2, def value: None
 int16_t  m_FriendsGroupID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::FriendsGroupID_t, m_FriendsGroupID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::FriendsGroupID_t) == 0x2, "Size mismatch!");

} // namespace end def Steamworks
