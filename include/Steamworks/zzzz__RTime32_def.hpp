#pragma once
// IWYU pragma private; include "Steamworks/RTime32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTime32)
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
struct RTime32;
}
// Write type traits
MARK_VAL_T(::Steamworks::RTime32);
DEFINE_IL2CPP_CLASS(::Steamworks::RTime32, "Steamworks", "RTime32");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RTime32
struct CORDL_TYPE RTime32 {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::RTime32>"
constexpr operator  ::System::IComparable_1<::Steamworks::RTime32>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::RTime32>"
constexpr operator  ::System::IEquatable_1<::Steamworks::RTime32>*() ;

/// @brief Method CompareTo, addr 0x1805a8250, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::RTime32  other) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::RTime32  other) ;

/// @brief Method Equals, addr 0x1805aaaf0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8320, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::RTime32>"
constexpr ::System::IComparable_1<::Steamworks::RTime32>* i___System__IComparable_1___Steamworks__RTime32_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::RTime32>"
constexpr ::System::IEquatable_1<::Steamworks::RTime32>* i___System__IEquatable_1___Steamworks__RTime32_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::RTime32  x, ::Steamworks::RTime32  y) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::RTime32 op_Explicit___Steamworks__RTime32(uint32_t  value) ;

/// @brief Method op_Explicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Steamworks::RTime32  that) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::RTime32  x, ::Steamworks::RTime32  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr RTime32() ;

// Ctor Parameters [CppParam { name: "m_RTime32", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RTime32(uint32_t  m_RTime32) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_RTime32, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_RTime32;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::RTime32, m_RTime32) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RTime32) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
