#pragma once
// IWYU pragma private; include "Steamworks/InputAnalogActionHandle_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAnalogActionHandle_t)
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
struct InputAnalogActionHandle_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::InputAnalogActionHandle_t);
DEFINE_IL2CPP_CLASS(::Steamworks::InputAnalogActionHandle_t, "Steamworks", "InputAnalogActionHandle_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.InputAnalogActionHandle_t
struct CORDL_TYPE InputAnalogActionHandle_t {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::InputAnalogActionHandle_t>"
constexpr operator  ::System::IComparable_1<::Steamworks::InputAnalogActionHandle_t>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::InputAnalogActionHandle_t>"
constexpr operator  ::System::IEquatable_1<::Steamworks::InputAnalogActionHandle_t>*() ;

/// @brief Method CompareTo, addr 0x1805a8470, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Steamworks::InputAnalogActionHandle_t  other) ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::InputAnalogActionHandle_t  other) ;

/// @brief Method Equals, addr 0x1805aa540, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8520, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a8770, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Steamworks::InputAnalogActionHandle_t>"
constexpr ::System::IComparable_1<::Steamworks::InputAnalogActionHandle_t>* i___System__IComparable_1___Steamworks__InputAnalogActionHandle_t_() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::InputAnalogActionHandle_t>"
constexpr ::System::IEquatable_1<::Steamworks::InputAnalogActionHandle_t>* i___System__IEquatable_1___Steamworks__InputAnalogActionHandle_t_() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::InputAnalogActionHandle_t  x, ::Steamworks::InputAnalogActionHandle_t  y) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::InputAnalogActionHandle_t op_Explicit___Steamworks__InputAnalogActionHandle_t(uint64_t  value) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::Steamworks::InputAnalogActionHandle_t  that) ;

/// @brief Method op_Inequality, addr 0x1805a8810, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::InputAnalogActionHandle_t  x, ::Steamworks::InputAnalogActionHandle_t  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAnalogActionHandle_t() ;

// Ctor Parameters [CppParam { name: "m_InputAnalogActionHandle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr InputAnalogActionHandle_t(uint64_t  m_InputAnalogActionHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_InputAnalogActionHandle, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_InputAnalogActionHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::InputAnalogActionHandle_t, m_InputAnalogActionHandle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::InputAnalogActionHandle_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
