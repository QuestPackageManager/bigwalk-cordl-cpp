#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Data/CustomControllerSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerSelector)
namespace Rewired {
class CustomController;
}
// Forward declare root types
namespace Rewired::ComponentControls::Data {
class CustomControllerSelector;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::Data::CustomControllerSelector*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::Data::CustomControllerSelector*, "Rewired.ComponentControls.Data", "CustomControllerSelector");
// Dependencies System.Object
namespace Rewired::ComponentControls::Data {
// Is value type: false
// CS Name: Rewired.ComponentControls.Data.CustomControllerSelector
class CORDL_TYPE CustomControllerSelector : public ::System::Object {
public:
// Declarations
/// @brief Field _findInPlayer, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__findInPlayer, put=__cordl_internal_set__findInPlayer)) bool  _findInPlayer;

/// @brief Field _findUsingSourceId, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__findUsingSourceId, put=__cordl_internal_set__findUsingSourceId)) bool  _findUsingSourceId;

/// @brief Field _findUsingTag, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__findUsingTag, put=__cordl_internal_set__findUsingTag)) bool  _findUsingTag;

/// @brief Field _playerId, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) int32_t  _playerId;

/// @brief Field _sourceId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__sourceId, put=__cordl_internal_set__sourceId)) int32_t  _sourceId;

/// @brief Field _tag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

 __declspec(property(get=get_findInPlayer, put=set_findInPlayer)) bool  findInPlayer;

 __declspec(property(get=get_findUsingSourceId, put=set_findUsingSourceId)) bool  findUsingSourceId;

 __declspec(property(get=get_findUsingTag, put=set_findUsingTag)) bool  findUsingTag;

 __declspec(property(get=get_playerId, put=set_playerId)) int32_t  playerId;

 __declspec(property(get=get_sourceId, put=set_sourceId)) int32_t  sourceId;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

/// @brief Method GetCustomController, addr 0x1818f09b0, size 0x250, virtual false, abstract: false, final false
inline ::Rewired::CustomController* GetCustomController() ;

static inline ::Rewired::ComponentControls::Data::CustomControllerSelector* New_ctor() ;

/// @brief Method UZSagFdUOzHhxBaVBISaaTtOqKZBA, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void UZSagFdUOzHhxBaVBISaaTtOqKZBA() ;

constexpr bool const& __cordl_internal_get__findInPlayer() const;

constexpr bool& __cordl_internal_get__findInPlayer() ;

constexpr bool const& __cordl_internal_get__findUsingSourceId() const;

constexpr bool& __cordl_internal_get__findUsingSourceId() ;

constexpr bool const& __cordl_internal_get__findUsingTag() const;

constexpr bool& __cordl_internal_get__findUsingTag() ;

constexpr int32_t const& __cordl_internal_get__playerId() const;

constexpr int32_t& __cordl_internal_get__playerId() ;

constexpr int32_t const& __cordl_internal_get__sourceId() const;

constexpr int32_t& __cordl_internal_get__sourceId() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__findInPlayer(bool  value) ;

constexpr void __cordl_internal_set__findUsingSourceId(bool  value) ;

constexpr void __cordl_internal_set__findUsingTag(bool  value) ;

constexpr void __cordl_internal_set__playerId(int32_t  value) ;

constexpr void __cordl_internal_set__sourceId(int32_t  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_findInPlayer, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_findInPlayer() ;

/// @brief Method get_findUsingSourceId, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_findUsingSourceId() ;

/// @brief Method get_findUsingTag, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_findUsingTag() ;

/// @brief Method get_playerId, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method get_sourceId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_sourceId() ;

/// @brief Method get_tag, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Method set_findInPlayer, addr 0x1818f0c00, size 0x10, virtual false, abstract: false, final false
inline void set_findInPlayer(bool  value) ;

/// @brief Method set_findUsingSourceId, addr 0x1818d6f20, size 0x10, virtual false, abstract: false, final false
inline void set_findUsingSourceId(bool  value) ;

/// @brief Method set_findUsingTag, addr 0x1818f0c10, size 0x10, virtual false, abstract: false, final false
inline void set_findUsingTag(bool  value) ;

/// @brief Method set_playerId, addr 0x1818f0c20, size 0x10, virtual false, abstract: false, final false
inline void set_playerId(int32_t  value) ;

/// @brief Method set_sourceId, addr 0x1818f0c30, size 0x30, virtual false, abstract: false, final false
inline void set_sourceId(int32_t  value) ;

/// @brief Method set_tag, addr 0x1818f0c60, size 0x60, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerSelector(CustomControllerSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerSelector(CustomControllerSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2814};

/// @brief Field _findUsingSourceId, offset: 0x10, size: 0x1, def value: None
 bool  ____findUsingSourceId;

/// @brief Field _sourceId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____sourceId;

/// @brief Field _findUsingTag, offset: 0x18, size: 0x1, def value: None
 bool  ____findUsingTag;

/// @brief Field _tag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____tag;

/// @brief Field _findInPlayer, offset: 0x28, size: 0x1, def value: None
 bool  ____findInPlayer;

/// @brief Field _playerId, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____playerId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerSelector, ____findUsingSourceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerSelector, ____sourceId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerSelector, ____findUsingTag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerSelector, ____tag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerSelector, ____findInPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::Data::CustomControllerSelector, ____playerId) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::Data::CustomControllerSelector) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls::Data
