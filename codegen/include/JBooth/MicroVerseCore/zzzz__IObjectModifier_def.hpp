#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/IObjectModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObjectModifier)
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class ISpawner;
}
namespace JBooth::MicroVerseCore {
class ObjectData;
}
namespace JBooth::MicroVerseCore {
class ObjectJobHolder;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
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
class IObjectModifier;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::IObjectModifier*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::IObjectModifier*, "JBooth.MicroVerseCore", "IObjectModifier");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.IObjectModifier
class CORDL_TYPE IObjectModifier {
public:
// Declarations
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Method ApplyObjectClear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  td) ;

/// @brief Method ApplyObjectStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method NeedCurvatureMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedCurvatureMap() ;

/// @brief Method NeedObjectClear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedObjectClear() ;

/// @brief Method NeedSDF, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool NeedSDF() ;

/// @brief Method OccludesOthers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool OccludesOthers() ;

/// @brief Method ProcessObjectStamp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IObjectModifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IObjectModifier(IObjectModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JBooth::MicroVerseCore
