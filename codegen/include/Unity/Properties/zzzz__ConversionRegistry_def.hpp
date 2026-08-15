#pragma once
// IWYU pragma private; include "Unity/Properties/ConversionRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConversionRegistry)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
class Delegate;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Type;
}
namespace Unity::Properties {
struct ConverterKey;
}
// Forward declare root types
namespace Unity::Properties {
struct ConversionRegistry;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::ConversionRegistry);
DEFINE_IL2CPP_CLASS(::Unity::Properties::ConversionRegistry, "Unity.Properties", "ConversionRegistry");
// Dependencies 
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.ConversionRegistry
struct CORDL_TYPE ConversionRegistry {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*() ;

/// @brief Method Apply, addr 0x1823040d0, size 0x160, virtual false, abstract: false, final false
inline void Apply(::Unity::Properties::ConversionRegistry  registry) ;

/// @brief Method Create, addr 0x182304230, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Properties::ConversionRegistry Create() ;

/// @brief Method Equals, addr 0x1823042c0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Unity::Properties::ConversionRegistry  x, ::Unity::Properties::ConversionRegistry  y) ;

/// @brief Method GetConverter, addr 0x182304300, size 0x170, virtual false, abstract: false, final false
inline ::System::Delegate* GetConverter(::System::Type*  source, ::System::Type*  destination) ;

/// @brief Method GetHashCode, addr 0x182304470, size 0x50, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Unity::Properties::ConversionRegistry  obj) ;

/// @brief Method LazyRegister, addr 0x1823044c0, size 0xa0, virtual false, abstract: false, final false
inline void LazyRegister(::System::Type*  source, ::System::Type*  destination, ::System::Func_1<::System::Delegate*>*  converter) ;

/// @brief Method Register, addr 0x182304560, size 0xa0, virtual false, abstract: false, final false
inline void Register(::System::Type*  source, ::System::Type*  destination, ::System::Delegate*  converter) ;

/// @brief Method TryGetConverter, addr 0x182304600, size 0x40, virtual false, abstract: false, final false
inline bool TryGetConverter(::System::Type*  source, ::System::Type*  destination, ::by_ref<::System::Delegate*>  converter) ;

/// @brief Method .ctor, addr 0x182304640, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Delegate*>*  storage) ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>* i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConversionRegistry_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConversionRegistry() ;

// Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Delegate*>*", modifiers: "", def_value: None }, CppParam { name: "m_LazyConverters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Func_1<::System::Delegate*>*>*", modifiers: "", def_value: None }]
constexpr ConversionRegistry(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Delegate*>*  m_Converters, ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Func_1<::System::Delegate*>*>*  m_LazyConverters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19707};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Converters, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Delegate*>*  m_Converters;

/// @brief Field m_LazyConverters, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Func_1<::System::Delegate*>*>*  m_LazyConverters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::ConversionRegistry, m_Converters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::ConversionRegistry, m_LazyConverters) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Properties::ConversionRegistry) == 0x10, "Size mismatch!");

} // namespace end def Unity::Properties
