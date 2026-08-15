#pragma once
// IWYU pragma private; include "MA/Flora/TemplateKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__TemplateLayoutIndex_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateKey)
namespace MA::Flora {
struct TemplateLayoutIndex;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct TemplateKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateKey, "MA.Flora", "TemplateKey");
// Dependencies MA.Flora.TemplateLayoutIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateKey
struct CORDL_TYPE TemplateKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TemplateKey>*() ;

/// @brief Method Equals, addr 0x1814a9220, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TemplateKey  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::TemplateLayoutIndex  layout) ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateKey>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateKey>* i___System__IEquatable_1___MA__Flora__TemplateKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateKey() ;

// Ctor Parameters [CppParam { name: "Layout", ty: "::MA::Flora::TemplateLayoutIndex", modifiers: "", def_value: None }]
constexpr TemplateKey(::MA::Flora::TemplateLayoutIndex  Layout) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Layout, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::TemplateLayoutIndex  Layout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateKey, Layout) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateKey) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
