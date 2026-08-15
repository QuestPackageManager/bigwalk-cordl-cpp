#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Bytes20.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bytes20)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct Bytes20;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::Bytes20);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::Bytes20, "Rewired.Utils.Classes.Data", "Bytes20");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.Bytes20
struct CORDL_TYPE Bytes20 {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>"
constexpr operator  ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>*() ;

/// @brief Method Equals, addr 0x181944670, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181944700, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::Rewired::Utils::Classes::Data::Bytes20  other) ;

/// @brief Method GetBytes, addr 0x181944750, size 0xd0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method GetHashCode, addr 0x181944820, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181944880, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x181944930, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Bytes20>* i___System__IEquatable_1___Rewired__Utils__Classes__Data__Bytes20_() ;

/// @brief Method op_Equality, addr 0x181944700, size 0x50, virtual false, abstract: false, final false
static inline bool op_Equality(::Rewired::Utils::Classes::Data::Bytes20  a, ::Rewired::Utils::Classes::Data::Bytes20  b) ;

/// @brief Method op_Inequality, addr 0x1819449c0, size 0x60, virtual false, abstract: false, final false
static inline bool op_Inequality(::Rewired::Utils::Classes::Data::Bytes20  a, ::Rewired::Utils::Classes::Data::Bytes20  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr Bytes20() ;

// Ctor Parameters [CppParam { name: "value0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "value1", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "value2", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Bytes20(int64_t  value0, int64_t  value1, int32_t  value2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3055};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field value0, offset: 0x0, size: 0x8, def value: None
 int64_t  value0;

/// @brief Field value1, offset: 0x8, size: 0x8, def value: None
 int64_t  value1;

/// @brief Field value2, offset: 0x10, size: 0x4, def value: None
 int32_t  value2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::Bytes20, value0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::Bytes20, value1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::Bytes20, value2) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::Bytes20) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
