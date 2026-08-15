#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEventComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessEventComparer)
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessEvent;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct PostProcessEventComparer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer, "UnityEngine.Rendering.PostProcessing", "PostProcessEventComparer");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessEventComparer
#pragma pack(push, 0)
struct CORDL_TYPE PostProcessEventComparer {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>*() ;

/// @brief Method Equals, addr 0x180e6e4d0, size 0x7d0, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  x, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  y) ;

/// @brief Method GetHashCode, addr 0x1805ed280, size 0x10, virtual true, abstract: false, final true
inline int32_t GetHashCode(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  obj) ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>* i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Rendering__PostProcessing__PostProcessEvent_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PostProcessEventComparer() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18629};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessEventComparer) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
