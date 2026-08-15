#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TVEEvents)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace TheVisualEngine {
class TVETerrain;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEEvents;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEEvents*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEEvents*, "TheVisualEngine", "TVEEvents");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEEvents
class CORDL_TYPE TVEEvents : public ::System::Object {
public:
// Declarations
/// @brief Field TVEOnAssetsSaved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TVEOnAssetsSaved, put=setStaticF_TVEOnAssetsSaved)) ::System::Action*  TVEOnAssetsSaved;

/// @brief Field TVEOnTerrainUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TVEOnTerrainUpdated, put=setStaticF_TVEOnTerrainUpdated)) ::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*  TVEOnTerrainUpdated;

/// @brief Method InvokeAssetsSaved, addr 0x1804b9320, size 0x30, virtual false, abstract: false, final false
static inline void InvokeAssetsSaved() ;

/// @brief Method InvokeTerrainUpdated, addr 0x1804b9350, size 0x30, virtual false, abstract: false, final false
static inline void InvokeTerrainUpdated(::TheVisualEngine::TVETerrain*  terrain) ;

/// @brief Method add_TVEOnAssetsSaved, addr 0x1804b9380, size 0x90, virtual false, abstract: false, final false
static inline void add_TVEOnAssetsSaved(::System::Action*  value) ;

/// @brief Method add_TVEOnTerrainUpdated, addr 0x1804b9410, size 0xb0, virtual false, abstract: false, final false
static inline void add_TVEOnTerrainUpdated(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value) ;

static inline ::System::Action* getStaticF_TVEOnAssetsSaved() ;

static inline ::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>* getStaticF_TVEOnTerrainUpdated() ;

/// @brief Method remove_TVEOnAssetsSaved, addr 0x1804b94c0, size 0x90, virtual false, abstract: false, final false
static inline void remove_TVEOnAssetsSaved(::System::Action*  value) ;

/// @brief Method remove_TVEOnTerrainUpdated, addr 0x1804b9550, size 0xb0, virtual false, abstract: false, final false
static inline void remove_TVEOnTerrainUpdated(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value) ;

static inline void setStaticF_TVEOnAssetsSaved(::System::Action*  value) ;

static inline void setStaticF_TVEOnTerrainUpdated(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEEvents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEEvents(TVEEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEEvents(TVEEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TheVisualEngine::TVEEvents) == 0x10, "Size mismatch!");

} // namespace end def TheVisualEngine
