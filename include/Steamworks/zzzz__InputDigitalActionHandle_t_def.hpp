#pragma once
// IWYU pragma private; include "Steamworks/InputDigitalActionHandle_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDigitalActionHandle_t)
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
struct InputDigitalActionHandle_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::InputDigitalActionHandle_t);
DEFINE_IL2CPP_CLASS(::Steamworks::InputDigitalActionHandle_t, "Steamworks", "InputDigitalActionHandle_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.InputDigitalActionHandle_t
struct CORDL_TYPE InputDigitalActionHandle_t {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::InputDigitalActionHandle_t>"
constexpr operator  ::System::IComparable_1<::Steamworks::InputDigitalActionHandle_t>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::InputDigitalActionHandle_t>"
constexpr operator  ::System::IEquatable_1<::Steamworks::InputDigitalActionHandle_t>*() ;

/// @brief Method CompareTo, addr 0x1805a8470, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::InputDigitalActionHandle_t  other) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::InputDigitalActionHandle_t  other) ;

/// @brief Method Equals, addr 0x1805aa5b0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8520, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8770, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::InputDigitalActionHandle_t>"
constexpr ::System::IComparable_1<::Steamworks::InputDigitalActionHandle_t>* i___System__IComparable_1___Steamworks__InputDigitalActionHandle_t_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::InputDigitalActionHandle_t>"
constexpr ::System::IEquatable_1<::Steamworks::InputDigitalActionHandle_t>* i___System__IEquatable_1___Steamworks__InputDigitalActionHandle_t_() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::InputDigitalActionHandle_t  x, ::Steamworks::InputDigitalActionHandle_t  y) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::InputDigitalActionHandle_t op_Explicit___Steamworks__InputDigitalActionHandle_t(uint64_t  value) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::Steamworks::InputDigitalActionHandle_t  that) ;

/// @brief Method op_Inequality, addr 0x1805a8810, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::InputDigitalActionHandle_t  x, ::Steamworks::InputDigitalActionHandle_t  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputDigitalActionHandle_t() ;

// Ctor Parameters [CppParam { name: "m_InputDigitalActionHandle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr InputDigitalActionHandle_t(uint64_t  m_InputDigitalActionHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_InputDigitalActionHandle, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_InputDigitalActionHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::InputDigitalActionHandle_t, m_InputDigitalActionHandle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::InputDigitalActionHandle_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
