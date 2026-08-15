#pragma once
// IWYU pragma private; include "Steamworks/HServerQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HServerQuery)
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
struct HServerQuery;
}
// Write type traits
MARK_VAL_T(::Steamworks::HServerQuery);
DEFINE_IL2CPP_CLASS(::Steamworks::HServerQuery, "Steamworks", "HServerQuery");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HServerQuery
struct CORDL_TYPE HServerQuery {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::HServerQuery  Invalid;

/// @brief Convert operator to "::System::IComparable_1<::Steamworks::HServerQuery>"
constexpr operator  ::System::IComparable_1<::Steamworks::HServerQuery>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HServerQuery>"
constexpr operator  ::System::IEquatable_1<::Steamworks::HServerQuery>*() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::HServerQuery  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::HServerQuery  other) ;

/// @brief Method Equals, addr 0x1805aa040, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805aa0b0, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

static inline ::Steamworks::HServerQuery getStaticF_Invalid() ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::HServerQuery>"
constexpr ::System::IComparable_1<::Steamworks::HServerQuery>* i___System__IComparable_1___Steamworks__HServerQuery_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::HServerQuery>"
constexpr ::System::IEquatable_1<::Steamworks::HServerQuery>* i___System__IEquatable_1___Steamworks__HServerQuery_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::HServerQuery  x, ::Steamworks::HServerQuery  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::HServerQuery op_Explicit___Steamworks__HServerQuery(int32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Explicit_int32_t(::Steamworks::HServerQuery  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::HServerQuery  x, ::Steamworks::HServerQuery  y) ;

static inline void setStaticF_Invalid(::Steamworks::HServerQuery  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HServerQuery() ;

// Ctor Parameters [CppParam { name: "m_HServerQuery", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HServerQuery(int32_t  m_HServerQuery) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_HServerQuery, offset: 0x0, size: 0x4, def value: None
 int32_t  m_HServerQuery;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::HServerQuery, m_HServerQuery) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HServerQuery) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
