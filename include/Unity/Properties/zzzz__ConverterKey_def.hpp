#pragma once
// IWYU pragma private; include "Unity/Properties/ConverterKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConverterKey)
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
struct ConverterKey;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::ConverterKey);
DEFINE_IL2CPP_CLASS(::Unity::Properties::ConverterKey, "Unity.Properties", "ConverterKey");
// Dependencies 
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.ConverterKey
struct CORDL_TYPE ConverterKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Properties::ConverterKey>"
constexpr operator  ::System::IEquatable_1<::Unity::Properties::ConverterKey>*() ;

/// @brief Method Equals, addr 0x182304940, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x182304880, size 0xc0, virtual true, abstract: false, final true
inline bool Equals(::Unity::Properties::ConverterKey  other) ;

/// @brief Method GetHashCode, addr 0x182304a40, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method PrintMembers, addr 0x182304ac0, size 0x70, virtual false, abstract: false, final false
inline bool PrintMembers(::System::Text::StringBuilder*  builder) ;

/// @brief Method ToString, addr 0x182304b30, size 0x110, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180397590, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  source, ::System::Type*  destination) ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Properties::ConverterKey>"
constexpr ::System::IEquatable_1<::Unity::Properties::ConverterKey>* i___System__IEquatable_1___Unity__Properties__ConverterKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConverterKey() ;

// Ctor Parameters [CppParam { name: "SourceType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "DestinationType", ty: "::System::Type*", modifiers: "", def_value: None }]
constexpr ConverterKey(::System::Type*  SourceType, ::System::Type*  DestinationType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19705};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field SourceType, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  SourceType;

/// @brief Field DestinationType, offset: 0x8, size: 0x8, def value: None
 ::System::Type*  DestinationType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::ConverterKey, SourceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::ConverterKey, DestinationType) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Properties::ConverterKey) == 0x10, "Size mismatch!");

} // namespace end def Unity::Properties
