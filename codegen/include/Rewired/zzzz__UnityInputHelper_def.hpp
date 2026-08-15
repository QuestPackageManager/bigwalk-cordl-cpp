#pragma once
// IWYU pragma private; include "Rewired/UnityInputHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityInputHelper)
namespace Rewired {
class UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK;
}
// Forward declare root types
namespace Rewired {
class UnityInputHelper;
}
namespace Rewired {
class UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK;
}
// Write type traits
MARK_REF_T(::Rewired::UnityInputHelper*);
MARK_REF_T(::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK*);
DEFINE_IL2CPP_CLASS(::Rewired::UnityInputHelper*, "Rewired", "UnityInputHelper");
DEFINE_IL2CPP_CLASS(::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK*, "Rewired", "UnityInputHelper/SbxvRLEHTZBFAyxllwoHcivNdZbK");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnityInputHelper/SbxvRLEHTZBFAyxllwoHcivNdZbK
class CORDL_TYPE UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK : public ::System::Object {
public:
// Declarations
/// @brief Field FkRonItwiSlqBTpwJNqvvTafBkmr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FkRonItwiSlqBTpwJNqvvTafBkmr, put=__cordl_internal_set_FkRonItwiSlqBTpwJNqvvTafBkmr)) ::ArrayW<::StringW>  FkRonItwiSlqBTpwJNqvvTafBkmr;

/// @brief Field ymPTXELUyBnyguTNiaMVDjoICyHS, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ymPTXELUyBnyguTNiaMVDjoICyHS, put=__cordl_internal_set_ymPTXELUyBnyguTNiaMVDjoICyHS)) ::ArrayW<::StringW>  ymPTXELUyBnyguTNiaMVDjoICyHS;

static inline ::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_FkRonItwiSlqBTpwJNqvvTafBkmr() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_FkRonItwiSlqBTpwJNqvvTafBkmr() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_ymPTXELUyBnyguTNiaMVDjoICyHS() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_ymPTXELUyBnyguTNiaMVDjoICyHS() ;

constexpr void __cordl_internal_set_FkRonItwiSlqBTpwJNqvvTafBkmr(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_ymPTXELUyBnyguTNiaMVDjoICyHS(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x181966710, size 0x150, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK(UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK(UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1988};

/// @brief Field FkRonItwiSlqBTpwJNqvvTafBkmr, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___FkRonItwiSlqBTpwJNqvvTafBkmr;

/// @brief Field ymPTXELUyBnyguTNiaMVDjoICyHS, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___ymPTXELUyBnyguTNiaMVDjoICyHS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK, ___FkRonItwiSlqBTpwJNqvvTafBkmr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK, ___ymPTXELUyBnyguTNiaMVDjoICyHS) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.UnityInputHelper::SbxvRLEHTZBFAyxllwoHcivNdZbK, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnityInputHelper
class CORDL_TYPE UnityInputHelper : public ::System::Object {
public:
// Declarations
using SbxvRLEHTZBFAyxllwoHcivNdZbK = ::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK;

/// @brief Field QrgfntSnzalGVZWZMdDmZcMijQaE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_QrgfntSnzalGVZWZMdDmZcMijQaE, put=setStaticF_QrgfntSnzalGVZWZMdDmZcMijQaE)) ::ArrayW<::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK*>  QrgfntSnzalGVZWZMdDmZcMijQaE;

/// @brief Method GetJoystickAxisRawValueByJoystickId, addr 0x181966900, size 0x90, virtual false, abstract: false, final false
static inline float_t GetJoystickAxisRawValueByJoystickId(int32_t  joystickId, int32_t  axisIndex) ;

/// @brief Method GetJoystickAxisRawValueByJoystickIndex, addr 0x181966990, size 0xa0, virtual false, abstract: false, final false
static inline float_t GetJoystickAxisRawValueByJoystickIndex(int32_t  joystickIndex, int32_t  axisIndex) ;

/// @brief Method GetJoystickAxisValueByJoystickId, addr 0x181966a30, size 0x90, virtual false, abstract: false, final false
static inline float_t GetJoystickAxisValueByJoystickId(int32_t  joystickId, int32_t  axisIndex) ;

/// @brief Method GetJoystickAxisValueByJoystickIndex, addr 0x181966ac0, size 0xa0, virtual false, abstract: false, final false
static inline float_t GetJoystickAxisValueByJoystickIndex(int32_t  joystickIndex, int32_t  axisIndex) ;

/// @brief Method GetJoystickButtonValueByJoystickId, addr 0x181966b60, size 0x30, virtual false, abstract: false, final false
static inline bool GetJoystickButtonValueByJoystickId(int32_t  joystickId, int32_t  buttonIndex) ;

/// @brief Method GetJoystickButtonValueByJoystickIndex, addr 0x181966b90, size 0x60, virtual false, abstract: false, final false
static inline bool GetJoystickButtonValueByJoystickIndex(int32_t  joystickIndex, int32_t  buttonIndex) ;

static inline ::ArrayW<::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK*> getStaticF_QrgfntSnzalGVZWZMdDmZcMijQaE() ;

static inline void setStaticF_QrgfntSnzalGVZWZMdDmZcMijQaE(::ArrayW<::Rewired::UnityInputHelper_SbxvRLEHTZBFAyxllwoHcivNdZbK*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityInputHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityInputHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityInputHelper(UnityInputHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityInputHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityInputHelper(UnityInputHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::UnityInputHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
