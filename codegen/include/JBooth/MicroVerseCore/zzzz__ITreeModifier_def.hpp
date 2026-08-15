#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ITreeModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITreeModifier)
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class ISpawner;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
class TreeData;
}
namespace JBooth::MicroVerseCore {
class TreeJobHolder;
}
namespace JBooth::MicroVerseCore {
class TreePrototypeSerializable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ITreeModifier;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ITreeModifier*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ITreeModifier*, "JBooth.MicroVerseCore", "ITreeModifier");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ITreeModifier
class CORDL_TYPE ITreeModifier {
public:
// Declarations
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Method ApplyTreeClear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td) ;

/// @brief Method ApplyTreeStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method InqTreePrototypes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  prototypes) ;

/// @brief Method NeedCurvatureMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedCurvatureMap() ;

/// @brief Method NeedFlowMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedFlowMap() ;

/// @brief Method NeedSDF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedSDF() ;

/// @brief Method NeedTreeClear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedTreeClear() ;

/// @brief Method OccludesOthers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool OccludesOthers() ;

/// @brief Method ProcessTreeStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITreeModifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITreeModifier(ITreeModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore
