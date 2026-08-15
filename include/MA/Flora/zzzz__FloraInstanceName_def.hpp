#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraInstanceName)
namespace Unity::Collections {
struct FixedString64Bytes;
}
// Forward declare root types
namespace MA::Flora {
struct FloraInstanceName;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraInstanceName);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceName, "MA.Flora", "FloraInstanceName");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraInstanceName
struct CORDL_TYPE FloraInstanceName {
public:
// Declarations
/// @brief Method SetFixedString, addr 0x18147cc60, size 0x110, virtual false, abstract: false, final false
inline void SetFixedString(::by_ref<::Unity::Collections::FixedString64Bytes>  value) ;

/// @brief Method ToFixedString, addr 0x18147cd70, size 0xb0, virtual false, abstract: false, final false
inline void ToFixedString(::by_ref<::Unity::Collections::FixedString64Bytes>  value) ;

/// @brief Method ToString, addr 0x18147ce20, size 0xc0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceName() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraInstanceName(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceName, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceName) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
