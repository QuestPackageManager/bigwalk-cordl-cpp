#pragma once
// IWYU pragma private; include "Rewired/CalibrationMapSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CalibrationMapSaveData)
namespace Rewired {
class CalibrationMap;
}
namespace Rewired {
struct ControllerType;
}
// Forward declare root types
namespace Rewired {
class CalibrationMapSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::CalibrationMapSaveData*);
DEFINE_IL2CPP_CLASS(::Rewired::CalibrationMapSaveData*, "Rewired", "CalibrationMapSaveData");
// Dependencies Rewired.ControllerType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.CalibrationMapSaveData
class CORDL_TYPE CalibrationMapSaveData : public ::System::Object {
public:
// Declarations
/// @brief Field EPqlmLUjsDHEUAYPEKNUhrCNSnFC, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_EPqlmLUjsDHEUAYPEKNUhrCNSnFC, put=__cordl_internal_set_EPqlmLUjsDHEUAYPEKNUhrCNSnFC)) ::Rewired::ControllerType  EPqlmLUjsDHEUAYPEKNUhrCNSnFC;

/// @brief Field IYUHhXzwUybwFIjYTTHmtuEWdpUT, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_IYUHhXzwUybwFIjYTTHmtuEWdpUT, put=__cordl_internal_set_IYUHhXzwUybwFIjYTTHmtuEWdpUT)) ::Rewired::CalibrationMap*  IYUHhXzwUybwFIjYTTHmtuEWdpUT;

/// @brief Field SrCkmFCtsOxjunMymutgkiCVkQdY, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SrCkmFCtsOxjunMymutgkiCVkQdY, put=__cordl_internal_set_SrCkmFCtsOxjunMymutgkiCVkQdY)) ::StringW  SrCkmFCtsOxjunMymutgkiCVkQdY;

 __declspec(property(get=get_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_hardwareIdentifier)) ::StringW  hardwareIdentifier;

 __declspec(property(get=get_map)) ::Rewired::CalibrationMap*  map;

static inline ::Rewired::CalibrationMapSaveData* New_ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get_EPqlmLUjsDHEUAYPEKNUhrCNSnFC() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get_EPqlmLUjsDHEUAYPEKNUhrCNSnFC() ;

constexpr ::Rewired::CalibrationMap* const& __cordl_internal_get_IYUHhXzwUybwFIjYTTHmtuEWdpUT() const;

constexpr ::Rewired::CalibrationMap*& __cordl_internal_get_IYUHhXzwUybwFIjYTTHmtuEWdpUT() ;

constexpr ::StringW const& __cordl_internal_get_SrCkmFCtsOxjunMymutgkiCVkQdY() const;

constexpr ::StringW& __cordl_internal_get_SrCkmFCtsOxjunMymutgkiCVkQdY() ;

constexpr void __cordl_internal_set_EPqlmLUjsDHEUAYPEKNUhrCNSnFC(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set_IYUHhXzwUybwFIjYTTHmtuEWdpUT(::Rewired::CalibrationMap*  value) ;

constexpr void __cordl_internal_set_SrCkmFCtsOxjunMymutgkiCVkQdY(::StringW  value) ;

/// @brief Method .ctor, addr 0x18177d7a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_controllerType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_hardwareIdentifier, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_hardwareIdentifier() ;

/// @brief Method get_map, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::CalibrationMap* get_map() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CalibrationMapSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CalibrationMapSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CalibrationMapSaveData(CalibrationMapSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CalibrationMapSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CalibrationMapSaveData(CalibrationMapSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2019};

/// @brief Field IYUHhXzwUybwFIjYTTHmtuEWdpUT, offset: 0x10, size: 0x8, def value: None
 ::Rewired::CalibrationMap*  ___IYUHhXzwUybwFIjYTTHmtuEWdpUT;

/// @brief Field EPqlmLUjsDHEUAYPEKNUhrCNSnFC, offset: 0x18, size: 0x4, def value: None
 ::Rewired::ControllerType  ___EPqlmLUjsDHEUAYPEKNUhrCNSnFC;

/// @brief Field SrCkmFCtsOxjunMymutgkiCVkQdY, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SrCkmFCtsOxjunMymutgkiCVkQdY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CalibrationMapSaveData, ___IYUHhXzwUybwFIjYTTHmtuEWdpUT) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::CalibrationMapSaveData, ___EPqlmLUjsDHEUAYPEKNUhrCNSnFC) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::CalibrationMapSaveData, ___SrCkmFCtsOxjunMymutgkiCVkQdY) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::CalibrationMapSaveData) == 0x28, "Size mismatch!");

} // namespace end def Rewired
