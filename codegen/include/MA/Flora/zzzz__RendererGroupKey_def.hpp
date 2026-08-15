#pragma once
// IWYU pragma private; include "MA/Flora/RendererGroupKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererGroupKey)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct RendererGroupKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::RendererGroupKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::RendererGroupKey, "MA.Flora", "RendererGroupKey");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.RendererGroupKey
struct CORDL_TYPE RendererGroupKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::RendererGroupKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::RendererGroupKey>*() ;

/// @brief Method Equals, addr 0x1814a7930, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814a78e0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::RendererGroupKey  other) ;

/// @brief Method GetHashCode, addr 0x1814a79c0, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::RendererGroupKey>"
constexpr ::System::IEquatable_1<::MA::Flora::RendererGroupKey>* i___System__IEquatable_1___MA__Flora__RendererGroupKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RendererGroupKey() ;

// Ctor Parameters [CppParam { name: "StateSignature", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "StateCount", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr RendererGroupKey(uint64_t  StateSignature, uint16_t  StateCount, uint8_t  LodIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field StateSignature, offset: 0x0, size: 0x8, def value: None
 uint64_t  StateSignature;

/// @brief Field StateCount, offset: 0x8, size: 0x2, def value: None
 uint16_t  StateCount;

/// @brief Field LodIndex, offset: 0xa, size: 0x1, def value: None
 uint8_t  LodIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::RendererGroupKey, StateSignature) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererGroupKey, StateCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererGroupKey, LodIndex) == 0xa, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::RendererGroupKey) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
