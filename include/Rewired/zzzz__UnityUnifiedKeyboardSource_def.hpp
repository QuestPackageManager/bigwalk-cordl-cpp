#pragma once
// IWYU pragma private; include "Rewired/UnityUnifiedKeyboardSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityUnifiedKeyboardSource)
namespace Rewired::Interfaces {
class IGetSetEnabled;
}
namespace Rewired::Interfaces {
class IUnifiedKeyboardSource;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired {
class UnityUnifiedKeyboardSource;
}
// Write type traits
MARK_REF_T(::Rewired::UnityUnifiedKeyboardSource*);
DEFINE_IL2CPP_CLASS(::Rewired::UnityUnifiedKeyboardSource*, "Rewired", "UnityUnifiedKeyboardSource");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.UnityUnifiedKeyboardSource
class CORDL_TYPE UnityUnifiedKeyboardSource : public ::System::Object {
public:
// Declarations
/// @brief Field MnyuEkdPvYPgjROvCibfKAhYxFCY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MnyuEkdPvYPgjROvCibfKAhYxFCY, put=setStaticF_MnyuEkdPvYPgjROvCibfKAhYxFCY)) ::Rewired::HardwareControllerMap_Game*  MnyuEkdPvYPgjROvCibfKAhYxFCY;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_controllerExtension)) ::Rewired::Controller_Extension*  controllerExtension;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_hardwareMap)) ::Rewired::HardwareControllerMap_Game*  hardwareMap;

 __declspec(property(get=get_inputSource)) ::Rewired::InputSource  inputSource;

/// @brief Field lBEWIpbZeOPHHthtBGKlBLFBGyOs, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_lBEWIpbZeOPHHthtBGKlBLFBGyOs, put=__cordl_internal_set_lBEWIpbZeOPHHthtBGKlBLFBGyOs)) bool  lBEWIpbZeOPHHthtBGKlBLFBGyOs;

/// @brief Field rjyTMGshUWIRFbItSeRYagKVDRcW, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_rjyTMGshUWIRFbItSeRYagKVDRcW, put=__cordl_internal_set_rjyTMGshUWIRFbItSeRYagKVDRcW)) bool  rjyTMGshUWIRFbItSeRYagKVDRcW;

/// @brief Convert operator to "::Rewired::Interfaces::IGetSetEnabled"
constexpr operator  ::Rewired::Interfaces::IGetSetEnabled*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IUnifiedKeyboardSource"
constexpr operator  ::Rewired::Interfaces::IUnifiedKeyboardSource*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method CreateHardwareMap, addr 0x181966dd0, size 0x3b0, virtual false, abstract: false, final false
static inline ::Rewired::HardwareControllerMap_Game* CreateHardwareMap() ;

/// @brief Method Dispose, addr 0x1809d1fa0, size 0x26510, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181967180, size 0x50, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181615130, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetHardwareElementType, addr 0x1819671d0, size 0x80, virtual false, abstract: false, final false
static inline ::Rewired::ControllerElementType GetHardwareElementType(int32_t  elementIdentifierId) ;

static inline ::Rewired::UnityUnifiedKeyboardSource* New_ctor() ;

/// @brief Method UpdateInputData, addr 0x181967250, size 0x40, virtual true, abstract: false, final true
inline void UpdateInputData(::Rewired::ControllerDataUpdater*  dataUpdater) ;

constexpr bool const& __cordl_internal_get_lBEWIpbZeOPHHthtBGKlBLFBGyOs() const;

constexpr bool& __cordl_internal_get_lBEWIpbZeOPHHthtBGKlBLFBGyOs() ;

constexpr bool const& __cordl_internal_get_rjyTMGshUWIRFbItSeRYagKVDRcW() const;

constexpr bool& __cordl_internal_get_rjyTMGshUWIRFbItSeRYagKVDRcW() ;

constexpr void __cordl_internal_set_lBEWIpbZeOPHHthtBGKlBLFBGyOs(bool  value) ;

constexpr void __cordl_internal_set_rjyTMGshUWIRFbItSeRYagKVDRcW(bool  value) ;

/// @brief Method .ctor, addr 0x181967290, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::HardwareControllerMap_Game* getStaticF_MnyuEkdPvYPgjROvCibfKAhYxFCY() ;

/// @brief Method get_buttonCount, addr 0x180720980, size 0x10, virtual true, abstract: false, final true
inline int32_t get_buttonCount() ;

/// @brief Method get_controllerExtension, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::Controller_Extension* get_controllerExtension() ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual true, abstract: false, final true
inline bool get_enabled() ;

/// @brief Method get_hardwareMap, addr 0x1819672d0, size 0x60, virtual true, abstract: false, final true
inline ::Rewired::HardwareControllerMap_Game* get_hardwareMap() ;

/// @brief Method get_inputSource, addr 0x181967330, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::InputSource get_inputSource() ;

/// @brief Convert to "::Rewired::Interfaces::IGetSetEnabled"
constexpr ::Rewired::Interfaces::IGetSetEnabled* i___Rewired__Interfaces__IGetSetEnabled() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IUnifiedKeyboardSource"
constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource* i___Rewired__Interfaces__IUnifiedKeyboardSource() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_MnyuEkdPvYPgjROvCibfKAhYxFCY(::Rewired::HardwareControllerMap_Game*  value) ;

/// @brief Method set_enabled, addr 0x181967340, size 0x40, virtual true, abstract: false, final true
inline void set_enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityUnifiedKeyboardSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedKeyboardSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityUnifiedKeyboardSource(UnityUnifiedKeyboardSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityUnifiedKeyboardSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityUnifiedKeyboardSource(UnityUnifiedKeyboardSource const& ) = delete;

/// @brief Field LPWLCdGjSJrcPLWHmZUqsNHJPRqD offset 0xffffffff size 0x4
static constexpr int32_t  LPWLCdGjSJrcPLWHmZUqsNHJPRqD{static_cast<int32_t>(0x84)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1990};

/// @brief Field lBEWIpbZeOPHHthtBGKlBLFBGyOs, offset: 0x10, size: 0x1, def value: None
 bool  ___lBEWIpbZeOPHHthtBGKlBLFBGyOs;

/// @brief Field rjyTMGshUWIRFbItSeRYagKVDRcW, offset: 0x11, size: 0x1, def value: None
 bool  ___rjyTMGshUWIRFbItSeRYagKVDRcW;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::UnityUnifiedKeyboardSource, ___lBEWIpbZeOPHHthtBGKlBLFBGyOs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::UnityUnifiedKeyboardSource, ___rjyTMGshUWIRFbItSeRYagKVDRcW) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Rewired::UnityUnifiedKeyboardSource) == 0x18, "Size mismatch!");

} // namespace end def Rewired
