#pragma once
// IWYU pragma private; include "GlobalNamespace/RewiredExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RewiredExtension)
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class RewiredExtension;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RewiredExtension*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RewiredExtension*, "", "RewiredExtension");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RewiredExtension
class CORDL_TYPE RewiredExtension : public ::System::Object {
public:
// Declarations
/// @brief Field LayoutSet, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LayoutSet, put=setStaticF_LayoutSet)) int32_t  LayoutSet;

/// @brief Field layoutTags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_layoutTags, put=setStaticF_layoutTags)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  layoutTags;

/// @brief Method ChangeLayoutNmouse, addr 0x1803889f0, size 0x110, virtual false, abstract: false, final false
static inline void ChangeLayoutNmouse(::Rewired::Player*  player, bool  side, bool  state) ;

/// @brief Method IsCategoryEnabled, addr 0x180388b00, size 0x160, virtual false, abstract: false, final false
static inline bool IsCategoryEnabled(::Rewired::Player*  player, int32_t  categoryID) ;

/// @brief Method LogAllMapsAndStates, addr 0x180388c60, size 0x510, virtual false, abstract: false, final false
static inline void LogAllMapsAndStates(int32_t  playerId) ;

/// @brief Method SwapButtons, addr 0x180389170, size 0x540, virtual false, abstract: false, final false
static inline void SwapButtons(::Rewired::Controller*  controller, ::StringW  actionDescriptiveNameA, ::StringW  actionDescriptiveNameB) ;

static inline int32_t getStaticF_LayoutSet() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_layoutTags() ;

static inline void setStaticF_LayoutSet(int32_t  value) ;

static inline void setStaticF_layoutTags(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredExtension(RewiredExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredExtension(RewiredExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RewiredExtension) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
