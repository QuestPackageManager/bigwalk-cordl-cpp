#pragma once
// IWYU pragma private; include "Rewired/InputMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__ElementAssignment_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputMapper)
namespace Rewired::Utils {
class SafeDelegate;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerPollingInfo;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
struct ElementAssignmentConflictCheck;
}
namespace Rewired {
struct ElementAssignmentConflictInfo;
}
namespace Rewired {
class ElementAssignmentInfo;
}
namespace Rewired {
struct ElementAssignment;
}
namespace Rewired {
class InputMapper_CanceledEventData;
}
namespace Rewired {
class InputMapper_ConflictFoundEventData;
}
namespace Rewired {
struct InputMapper_ConflictResponse;
}
namespace Rewired {
class InputMapper_Context;
}
namespace Rewired {
class InputMapper_ErrorEventData;
}
namespace Rewired {
class InputMapper_EventData;
}
namespace Rewired {
class InputMapper_InputMappedEventData;
}
namespace Rewired {
class InputMapper_Options;
}
namespace Rewired {
class InputMapper_StartedEventData;
}
namespace Rewired {
struct InputMapper_Status;
}
namespace Rewired {
class InputMapper_StoppedEventData;
}
namespace Rewired {
class InputMapper_TimedOutEventData;
}
namespace Rewired {
struct InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg;
}
namespace Rewired {
class InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC;
}
namespace Rewired {
class InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs;
}
namespace Rewired {
struct ModifierKeyFlags;
}
namespace Rewired {
class Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA;
}
namespace Rewired {
class Player;
}
namespace Rewired {
struct Pole;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace Rewired {
class xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA;
}
namespace Rewired {
struct xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA;
}
namespace Rewired {
class xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA;
}
namespace Rewired {
class xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp;
}
namespace Rewired {
struct xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Rewired {
struct InputMapper_ConflictResponse;
}
namespace Rewired {
struct InputMapper_Status;
}
namespace Rewired {
struct InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg;
}
namespace Rewired {
struct xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA;
}
namespace Rewired {
struct xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab;
}
namespace Rewired {
class InputMapper;
}
namespace Rewired {
class InputMapper_CanceledEventData;
}
namespace Rewired {
class InputMapper_ConflictFoundEventData;
}
namespace Rewired {
class InputMapper_Context;
}
namespace Rewired {
class InputMapper_ErrorEventData;
}
namespace Rewired {
class InputMapper_EventData;
}
namespace Rewired {
class InputMapper_InputMappedEventData;
}
namespace Rewired {
class InputMapper_Options;
}
namespace Rewired {
class InputMapper_StartedEventData;
}
namespace Rewired {
class InputMapper_StoppedEventData;
}
namespace Rewired {
class InputMapper_TimedOutEventData;
}
namespace Rewired {
class InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC;
}
namespace Rewired {
class InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs;
}
namespace Rewired {
class Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA;
}
namespace Rewired {
class xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA;
}
namespace Rewired {
class xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA;
}
namespace Rewired {
class xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp;
}
// Write type traits
MARK_VAL_T(::Rewired::InputMapper_ConflictResponse);
MARK_VAL_T(::Rewired::InputMapper_Status);
MARK_VAL_T(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg);
MARK_VAL_T(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA);
MARK_VAL_T(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab);
MARK_REF_T(::Rewired::InputMapper*);
MARK_REF_T(::Rewired::InputMapper_CanceledEventData*);
MARK_REF_T(::Rewired::InputMapper_ConflictFoundEventData*);
MARK_REF_T(::Rewired::InputMapper_Context*);
MARK_REF_T(::Rewired::InputMapper_ErrorEventData*);
MARK_REF_T(::Rewired::InputMapper_EventData*);
MARK_REF_T(::Rewired::InputMapper_InputMappedEventData*);
MARK_REF_T(::Rewired::InputMapper_Options*);
MARK_REF_T(::Rewired::InputMapper_StartedEventData*);
MARK_REF_T(::Rewired::InputMapper_StoppedEventData*);
MARK_REF_T(::Rewired::InputMapper_TimedOutEventData*);
MARK_REF_T(::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*);
MARK_REF_T(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*);
MARK_REF_T(::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*);
MARK_REF_T(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*);
MARK_REF_T(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA*);
MARK_REF_T(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp*);
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_ConflictResponse, "Rewired", "InputMapper/ConflictResponse");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_Status, "Rewired", "InputMapper/Status");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg, "Rewired", "InputMapper/YTtbnjeYgiIbVejXSImVQuIVJTwg");
DEFINE_IL2CPP_CLASS(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA, "Rewired", "InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/UnnCIqBLWHmvfIqnXtTEThfNyAVIA");
DEFINE_IL2CPP_CLASS(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab, "Rewired", "InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/wBIaCVOxKjeUKBWcvCLnECgDWFab");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper*, "Rewired", "InputMapper");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_CanceledEventData*, "Rewired", "InputMapper/CanceledEventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_ConflictFoundEventData*, "Rewired", "InputMapper/ConflictFoundEventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_Context*, "Rewired", "InputMapper/Context");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_ErrorEventData*, "Rewired", "InputMapper/ErrorEventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_EventData*, "Rewired", "InputMapper/EventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_InputMappedEventData*, "Rewired", "InputMapper/InputMappedEventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_Options*, "Rewired", "InputMapper/Options");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_StartedEventData*, "Rewired", "InputMapper/StartedEventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_StoppedEventData*, "Rewired", "InputMapper/StoppedEventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_TimedOutEventData*, "Rewired", "InputMapper/TimedOutEventData");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*, "Rewired", "InputMapper/dcPqrObOSVnpaMgEsnbkRwjAdAgC");
DEFINE_IL2CPP_CLASS(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*, "Rewired", "InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs");
DEFINE_IL2CPP_CLASS(::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*, "Rewired", "InputMapper/Options/lbvIRsEzUhoAVjcfLQtTgitOalxdA");
DEFINE_IL2CPP_CLASS(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*, "Rewired", "InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/LWErQSfKExFdlIYCZewEsagtnAADA");
DEFINE_IL2CPP_CLASS(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA*, "Rewired", "InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/gExWtQlWsvAVKSPXFBAvdZdHSICCA");
DEFINE_IL2CPP_CLASS(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp*, "Rewired", "InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/sRYGygrxlmBFgvsdsxPKZHUBPTHp");
// Dependencies Rewired.AxisRange, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/Context
class CORDL_TYPE InputMapper_Context : public ::System::Object {
public:
// Declarations
/// @brief Field GeRveJTyTkMHqjYKdcSNAJHXrrif, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_GeRveJTyTkMHqjYKdcSNAJHXrrif, put=__cordl_internal_set_GeRveJTyTkMHqjYKdcSNAJHXrrif)) bool  GeRveJTyTkMHqjYKdcSNAJHXrrif;

/// @brief Field HpiewOWjopuGClHQAQshAIPeWDvk, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_HpiewOWjopuGClHQAQshAIPeWDvk, put=__cordl_internal_set_HpiewOWjopuGClHQAQshAIPeWDvk)) ::Rewired::ControllerMap*  HpiewOWjopuGClHQAQshAIPeWDvk;

/// @brief Field JGlvRHyOrieMfxIjsvgaHrrkbHik, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_JGlvRHyOrieMfxIjsvgaHrrkbHik, put=__cordl_internal_set_JGlvRHyOrieMfxIjsvgaHrrkbHik)) ::Rewired::ActionElementMap*  JGlvRHyOrieMfxIjsvgaHrrkbHik;

/// @brief Field JyoUPMmNdbivscaZKRJjbRAYnjAeb, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_JyoUPMmNdbivscaZKRJjbRAYnjAeb, put=__cordl_internal_set_JyoUPMmNdbivscaZKRJjbRAYnjAeb)) ::Rewired::AxisRange  JyoUPMmNdbivscaZKRJjbRAYnjAeb;

 __declspec(property(get=get_actionElementMapToReplace, put=set_actionElementMapToReplace)) ::Rewired::ActionElementMap*  actionElementMapToReplace;

 __declspec(property(get=get_actionId, put=set_actionId)) int32_t  actionId;

 __declspec(property(get=get_actionName, put=set_actionName)) ::StringW  actionName;

 __declspec(property(get=get_actionRange, put=set_actionRange)) ::Rewired::AxisRange  actionRange;

 __declspec(property(get=get_controllerMap, put=set_controllerMap)) ::Rewired::ControllerMap*  controllerMap;

/// @brief Field gLPcVOomQHadptdpLccHFpRhJvQU, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_gLPcVOomQHadptdpLccHFpRhJvQU, put=__cordl_internal_set_gLPcVOomQHadptdpLccHFpRhJvQU)) int32_t  gLPcVOomQHadptdpLccHFpRhJvQU;

/// @brief Method Clone, addr 0x18199aed0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Context* Clone() ;

/// @brief Method Copy, addr 0x18199af50, size 0x80, virtual false, abstract: false, final false
static inline void Copy(::Rewired::InputMapper_Context*  source, ::Rewired::InputMapper_Context*  destination) ;

static inline ::Rewired::InputMapper_Context* New_ctor() ;

static inline ::Rewired::InputMapper_Context* New_ctor(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SqZZrrulKHGEGVbIINfwjPyOvNKL, addr 0x18199afd0, size 0x30, virtual false, abstract: false, final false
inline bool SqZZrrulKHGEGVbIINfwjPyOvNKL() ;

constexpr bool const& __cordl_internal_get_GeRveJTyTkMHqjYKdcSNAJHXrrif() const;

constexpr bool& __cordl_internal_get_GeRveJTyTkMHqjYKdcSNAJHXrrif() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_HpiewOWjopuGClHQAQshAIPeWDvk() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_HpiewOWjopuGClHQAQshAIPeWDvk() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_JGlvRHyOrieMfxIjsvgaHrrkbHik() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_JGlvRHyOrieMfxIjsvgaHrrkbHik() ;

constexpr ::Rewired::AxisRange const& __cordl_internal_get_JyoUPMmNdbivscaZKRJjbRAYnjAeb() const;

constexpr ::Rewired::AxisRange& __cordl_internal_get_JyoUPMmNdbivscaZKRJjbRAYnjAeb() ;

constexpr int32_t const& __cordl_internal_get_gLPcVOomQHadptdpLccHFpRhJvQU() const;

constexpr int32_t& __cordl_internal_get_gLPcVOomQHadptdpLccHFpRhJvQU() ;

constexpr void __cordl_internal_set_GeRveJTyTkMHqjYKdcSNAJHXrrif(bool  value) ;

constexpr void __cordl_internal_set_HpiewOWjopuGClHQAQshAIPeWDvk(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_JGlvRHyOrieMfxIjsvgaHrrkbHik(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_JyoUPMmNdbivscaZKRJjbRAYnjAeb(::Rewired::AxisRange  value) ;

constexpr void __cordl_internal_set_gLPcVOomQHadptdpLccHFpRhJvQU(int32_t  value) ;

/// @brief Method .ctor, addr 0x18199b000, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18199b010, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_actionElementMapToReplace, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* get_actionElementMapToReplace() ;

/// @brief Method get_actionId, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_actionName, addr 0x18199b080, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_actionName() ;

/// @brief Method get_actionRange, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisRange get_actionRange() ;

/// @brief Method get_controllerMap, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* get_controllerMap() ;

/// @brief Method set_actionElementMapToReplace, addr 0x18199b0f0, size 0x30, virtual false, abstract: false, final false
inline void set_actionElementMapToReplace(::Rewired::ActionElementMap*  value) ;

/// @brief Method set_actionId, addr 0x18199b120, size 0x20, virtual false, abstract: false, final false
inline void set_actionId(int32_t  value) ;

/// @brief Method set_actionName, addr 0x18199b140, size 0xb0, virtual false, abstract: false, final false
inline void set_actionName(::StringW  value) ;

/// @brief Method set_actionRange, addr 0x18199b1f0, size 0x20, virtual false, abstract: false, final false
inline void set_actionRange(::Rewired::AxisRange  value) ;

/// @brief Method set_controllerMap, addr 0x18199b210, size 0x30, virtual false, abstract: false, final false
inline void set_controllerMap(::Rewired::ControllerMap*  value) ;

/// @brief Method udXpKVlIwYGLhBscxlkhWwjgNefgA, addr 0x18199b240, size 0x10, virtual false, abstract: false, final false
inline void udXpKVlIwYGLhBscxlkhWwjgNefgA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_Context() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_Context", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_Context(InputMapper_Context && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_Context", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_Context(InputMapper_Context const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2080};

/// @brief Field gLPcVOomQHadptdpLccHFpRhJvQU, offset: 0x10, size: 0x4, def value: None
 int32_t  ___gLPcVOomQHadptdpLccHFpRhJvQU;

/// @brief Field HpiewOWjopuGClHQAQshAIPeWDvk, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___HpiewOWjopuGClHQAQshAIPeWDvk;

/// @brief Field JGlvRHyOrieMfxIjsvgaHrrkbHik, offset: 0x20, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___JGlvRHyOrieMfxIjsvgaHrrkbHik;

/// @brief Field JyoUPMmNdbivscaZKRJjbRAYnjAeb, offset: 0x28, size: 0x4, def value: None
 ::Rewired::AxisRange  ___JyoUPMmNdbivscaZKRJjbRAYnjAeb;

/// @brief Field GeRveJTyTkMHqjYKdcSNAJHXrrif, offset: 0x2c, size: 0x1, def value: None
 bool  ___GeRveJTyTkMHqjYKdcSNAJHXrrif;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_Context, ___gLPcVOomQHadptdpLccHFpRhJvQU) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Context, ___HpiewOWjopuGClHQAQshAIPeWDvk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Context, ___JGlvRHyOrieMfxIjsvgaHrrkbHik) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Context, ___JyoUPMmNdbivscaZKRJjbRAYnjAeb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Context, ___GeRveJTyTkMHqjYKdcSNAJHXrrif) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_Context) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputMapper/ConflictResponse
struct CORDL_TYPE InputMapper_ConflictResponse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputMapper_ConflictResponse_Unwrapped
enum struct __InputMapper_ConflictResponse_Unwrapped : int32_t {
__E_Cancel = static_cast<int32_t>(0x0),
__E_Replace = static_cast<int32_t>(0x1),
__E_Add = static_cast<int32_t>(0x2),
__E_Ignore = static_cast<int32_t>(0x3),
__E_Swap = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputMapper_ConflictResponse_Unwrapped () const noexcept {
return static_cast<__InputMapper_ConflictResponse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_ConflictResponse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputMapper_ConflictResponse(int32_t  value__) noexcept;

/// @brief Field Add value: I32(2)
static ::Rewired::InputMapper_ConflictResponse const Add;

/// @brief Field Cancel value: I32(0)
static ::Rewired::InputMapper_ConflictResponse const Cancel;

/// @brief Field Ignore value: I32(3)
static ::Rewired::InputMapper_ConflictResponse const Ignore;

/// @brief Field Replace value: I32(1)
static ::Rewired::InputMapper_ConflictResponse const Replace;

/// @brief Field Swap value: I32(4)
static ::Rewired::InputMapper_ConflictResponse const Swap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2081};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_ConflictResponse, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_ConflictResponse) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/EventData
class CORDL_TYPE InputMapper_EventData : public ::System::Object {
public:
// Declarations
/// @brief Field inputMapper, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputMapper, put=__cordl_internal_set_inputMapper)) ::Rewired::InputMapper*  inputMapper;

static inline ::Rewired::InputMapper_EventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::InputMapper* const& __cordl_internal_get_inputMapper() const;

constexpr ::Rewired::InputMapper*& __cordl_internal_get_inputMapper() ;

constexpr void __cordl_internal_set_inputMapper(::Rewired::InputMapper*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_EventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_EventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_EventData(InputMapper_EventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_EventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_EventData(InputMapper_EventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2082};

/// @brief Field inputMapper, offset: 0x10, size: 0x8, def value: None
 ::Rewired::InputMapper*  ___inputMapper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_EventData, ___inputMapper) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_EventData) == 0x18, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::EventData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/InputMappedEventData
class CORDL_TYPE InputMapper_InputMappedEventData : public ::Rewired::InputMapper_EventData {
public:
// Declarations
/// @brief Field actionElementMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionElementMap, put=__cordl_internal_set_actionElementMap)) ::Rewired::ActionElementMap*  actionElementMap;

static inline ::Rewired::InputMapper_InputMappedEventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_actionElementMap() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_actionElementMap() ;

constexpr void __cordl_internal_set_actionElementMap(::Rewired::ActionElementMap*  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_InputMappedEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_InputMappedEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_InputMappedEventData(InputMapper_InputMappedEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_InputMappedEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_InputMappedEventData(InputMapper_InputMappedEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2083};

/// @brief Field actionElementMap, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___actionElementMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_InputMappedEventData, ___actionElementMap) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_InputMappedEventData) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::EventData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/CanceledEventData
class CORDL_TYPE InputMapper_CanceledEventData : public ::Rewired::InputMapper_EventData {
public:
// Declarations
/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

static inline ::Rewired::InputMapper_CanceledEventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_CanceledEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_CanceledEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_CanceledEventData(InputMapper_CanceledEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_CanceledEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_CanceledEventData(InputMapper_CanceledEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2084};

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_CanceledEventData, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_CanceledEventData) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::EventData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/ErrorEventData
class CORDL_TYPE InputMapper_ErrorEventData : public ::Rewired::InputMapper_EventData {
public:
// Declarations
/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

static inline ::Rewired::InputMapper_ErrorEventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_ErrorEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_ErrorEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_ErrorEventData(InputMapper_ErrorEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_ErrorEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_ErrorEventData(InputMapper_ErrorEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2085};

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_ErrorEventData, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_ErrorEventData) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::EventData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/TimedOutEventData
class CORDL_TYPE InputMapper_TimedOutEventData : public ::Rewired::InputMapper_EventData {
public:
// Declarations
static inline ::Rewired::InputMapper_TimedOutEventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_TimedOutEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_TimedOutEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_TimedOutEventData(InputMapper_TimedOutEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_TimedOutEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_TimedOutEventData(InputMapper_TimedOutEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::InputMapper_TimedOutEventData) == 0x18, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::EventData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/StartedEventData
class CORDL_TYPE InputMapper_StartedEventData : public ::Rewired::InputMapper_EventData {
public:
// Declarations
static inline ::Rewired::InputMapper_StartedEventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_StartedEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_StartedEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_StartedEventData(InputMapper_StartedEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_StartedEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_StartedEventData(InputMapper_StartedEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2087};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::InputMapper_StartedEventData) == 0x18, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::EventData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/StoppedEventData
class CORDL_TYPE InputMapper_StoppedEventData : public ::Rewired::InputMapper_EventData {
public:
// Declarations
static inline ::Rewired::InputMapper_StoppedEventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_StoppedEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_StoppedEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_StoppedEventData(InputMapper_StoppedEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_StoppedEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_StoppedEventData(InputMapper_StoppedEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2088};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::InputMapper_StoppedEventData) == 0x18, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::EventData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/ConflictFoundEventData
class CORDL_TYPE InputMapper_ConflictFoundEventData : public ::Rewired::InputMapper_EventData {
public:
// Declarations
/// @brief Field WBOlaLsJMzirogLlXNbzdpiDyaZhA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WBOlaLsJMzirogLlXNbzdpiDyaZhA, put=__cordl_internal_set_WBOlaLsJMzirogLlXNbzdpiDyaZhA)) ::System::Func_2<int32_t,bool>*  WBOlaLsJMzirogLlXNbzdpiDyaZhA;

/// @brief Field assignment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_assignment, put=__cordl_internal_set_assignment)) ::Rewired::ElementAssignmentInfo*  assignment;

/// @brief Field conflicts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_conflicts, put=__cordl_internal_set_conflicts)) ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  conflicts;

/// @brief Field isProtected, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isProtected, put=__cordl_internal_set_isProtected)) bool  isProtected;

/// @brief Field responseCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseCallback, put=__cordl_internal_set_responseCallback)) ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  responseCallback;

/// @brief Method IsSwapAllowed, addr 0x18199ae30, size 0x20, virtual false, abstract: false, final false
inline bool IsSwapAllowed(int32_t  maxInputFieldCount) ;

static inline ::Rewired::InputMapper_ConflictFoundEventData* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, ::System::Func_2<int32_t,bool>*  _cordl_fixed_empty_name_whitespace_param_5) ;

constexpr ::System::Func_2<int32_t,bool>* const& __cordl_internal_get_WBOlaLsJMzirogLlXNbzdpiDyaZhA() const;

constexpr ::System::Func_2<int32_t,bool>*& __cordl_internal_get_WBOlaLsJMzirogLlXNbzdpiDyaZhA() ;

constexpr ::Rewired::ElementAssignmentInfo* const& __cordl_internal_get_assignment() const;

constexpr ::Rewired::ElementAssignmentInfo*& __cordl_internal_get_assignment() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_conflicts() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_conflicts() ;

constexpr bool const& __cordl_internal_get_isProtected() const;

constexpr bool& __cordl_internal_get_isProtected() ;

constexpr ::System::Action_1<::Rewired::InputMapper_ConflictResponse>* const& __cordl_internal_get_responseCallback() const;

constexpr ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*& __cordl_internal_get_responseCallback() ;

constexpr void __cordl_internal_set_WBOlaLsJMzirogLlXNbzdpiDyaZhA(::System::Func_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_assignment(::Rewired::ElementAssignmentInfo*  value) ;

constexpr void __cordl_internal_set_conflicts(::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_isProtected(bool  value) ;

constexpr void __cordl_internal_set_responseCallback(::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  value) ;

/// @brief Method .ctor, addr 0x18199ae50, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, ::System::Func_2<int32_t,bool>*  _cordl_fixed_empty_name_whitespace_param_5) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_ConflictFoundEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_ConflictFoundEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_ConflictFoundEventData(InputMapper_ConflictFoundEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_ConflictFoundEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_ConflictFoundEventData(InputMapper_ConflictFoundEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2089};

/// @brief Field responseCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Rewired::InputMapper_ConflictResponse>*  ___responseCallback;

/// @brief Field assignment, offset: 0x20, size: 0x8, def value: None
 ::Rewired::ElementAssignmentInfo*  ___assignment;

/// @brief Field conflicts, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  ___conflicts;

/// @brief Field isProtected, offset: 0x30, size: 0x1, def value: None
 bool  ___isProtected;

/// @brief Field WBOlaLsJMzirogLlXNbzdpiDyaZhA, offset: 0x38, size: 0x8, def value: None
 ::System::Func_2<int32_t,bool>*  ___WBOlaLsJMzirogLlXNbzdpiDyaZhA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_ConflictFoundEventData, ___responseCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_ConflictFoundEventData, ___assignment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_ConflictFoundEventData, ___conflicts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_ConflictFoundEventData, ___isProtected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_ConflictFoundEventData, ___WBOlaLsJMzirogLlXNbzdpiDyaZhA) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_ConflictFoundEventData) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputMapper/YTtbnjeYgiIbVejXSImVQuIVJTwg
struct CORDL_TYPE InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg_Unwrapped
enum struct __InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg_Unwrapped : int32_t {
__E_InputMapped = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_Canceled = static_cast<int32_t>(0x2),
__E_TimedOut = static_cast<int32_t>(0x3),
__E_Started = static_cast<int32_t>(0x4),
__E_Stopped = static_cast<int32_t>(0x5),
__E_ConflictsFound = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg_Unwrapped () const noexcept {
return static_cast<__InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg(int32_t  value__) noexcept;

/// @brief Field Canceled value: I32(2)
static ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg const Canceled;

/// @brief Field ConflictsFound value: I32(6)
static ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg const ConflictsFound;

/// @brief Field Error value: I32(1)
static ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg const Error;

/// @brief Field InputMapped value: I32(0)
static ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg const InputMapped;

/// @brief Field Started value: I32(4)
static ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg const Started;

/// @brief Field Stopped value: I32(5)
static ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg const Stopped;

/// @brief Field TimedOut value: I32(3)
static ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg const TimedOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2090};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputMapper/Status
struct CORDL_TYPE InputMapper_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputMapper_Status_Unwrapped
enum struct __InputMapper_Status_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Listening = static_cast<int32_t>(0x1),
__E_AwaitingResponse = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputMapper_Status_Unwrapped () const noexcept {
return static_cast<__InputMapper_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputMapper_Status(int32_t  value__) noexcept;

/// @brief Field AwaitingResponse value: I32(2)
static ::Rewired::InputMapper_Status const AwaitingResponse;

/// @brief Field Idle value: I32(0)
static ::Rewired::InputMapper_Status const Idle;

/// @brief Field Listening value: I32(1)
static ::Rewired::InputMapper_Status const Listening;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2091};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_Status, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_Status) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/wBIaCVOxKjeUKBWcvCLnECgDWFab
struct CORDL_TYPE xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab_Unwrapped
enum struct __xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab_Unwrapped : int32_t {
__E_Quit = static_cast<int32_t>(0x0),
__E_Continue = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab_Unwrapped () const noexcept {
return static_cast<__xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab(int32_t  value__) noexcept;

/// @brief Field Continue value: I32(1)
static ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab const Continue;

/// @brief Field Quit value: I32(0)
static ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab const Quit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/UnnCIqBLWHmvfIqnXtTEThfNyAVIA
struct CORDL_TYPE xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA_Unwrapped
enum struct __xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ConflictChecking = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA_Unwrapped () const noexcept {
return static_cast<__xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA(int32_t  value__) noexcept;

/// @brief Field ConflictChecking value: I32(1)
static ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA const ConflictChecking;

/// @brief Field None value: I32(0)
static ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2093};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, Rewired.ControllerType, Rewired.ModifierKeyFlags, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/LWErQSfKExFdlIYCZewEsagtnAADA
class CORDL_TYPE xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA : public ::System::Object {
public:
// Declarations
 __declspec(property(get=YOQFyzewxulhvuapaETVClUNYbcK)) int32_t  IbXhiHbZAqHUhrHeCOiIYPaZpAnE;

/// @brief Field OZSREDBtUlIqzhIpnfulBhLmeItRA, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_OZSREDBtUlIqzhIpnfulBhLmeItRA, put=__cordl_internal_set_OZSREDBtUlIqzhIpnfulBhLmeItRA)) ::Rewired::ModifierKeyFlags  OZSREDBtUlIqzhIpnfulBhLmeItRA;

 __declspec(property(get=ujqOrAgNKsGEnDzEnavLdZRpFkBL)) ::Rewired::ControllerPollingInfo  SUyzgIWKRBdjyfvMxFRmAbmZcpHe;

 __declspec(property(get=scvoKYJbFGGKGsVZtdRoVhPtAffl)) ::StringW  SnKZRlBKqscgRYpxDkVwyXCmHVWc;

 __declspec(property(get=MZLyxTGLgydQfKBRVMtvWxBkeWFI)) ::Rewired::AxisRange  TKDyiipNrWENdhkhVDuLEDdVFBSJA;

 __declspec(property(get=xTuxwDckeyEvxYMGqNGFCfvrBcPI)) ::Rewired::InputMapper_Context*  VsSzEXehVuMiHlRzxSXJSXdEDPtu;

 __declspec(property(get=DEBrcYLlsFsWJyGLxLPtCGyqwPGU)) ::Rewired::ModifierKeyFlags  XEdkykQgYsZaWWWsxXkERvqCDDRk;

/// @brief Field XntyhWVWRDwjyiRLTMtWYeNcgIRC, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_XntyhWVWRDwjyiRLTMtWYeNcgIRC, put=__cordl_internal_set_XntyhWVWRDwjyiRLTMtWYeNcgIRC)) ::Rewired::InputMapper_Context*  XntyhWVWRDwjyiRLTMtWYeNcgIRC;

/// @brief Field XwKaSYFoetvBnEnIagkzoRysMgzuA, offset 0x30, size 0x38 
 __declspec(property(get=__cordl_internal_get_XwKaSYFoetvBnEnIagkzoRysMgzuA, put=__cordl_internal_set_XwKaSYFoetvBnEnIagkzoRysMgzuA)) ::Rewired::ControllerPollingInfo  XwKaSYFoetvBnEnIagkzoRysMgzuA;

/// @brief Field ZEyCASCNWLRQYtfWnysJeSfnVhoK, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZEyCASCNWLRQYtfWnysJeSfnVhoK, put=__cordl_internal_set_ZEyCASCNWLRQYtfWnysJeSfnVhoK)) ::Rewired::Player*  ZEyCASCNWLRQYtfWnysJeSfnVhoK;

 __declspec(property(get=lamLUZbexqepslULteMCnWapISaM)) ::Rewired::Player*  fVGcHuVzrzqjpDNNpVQmnOvzsMvm;

 __declspec(property(get=btigKwIbUQamLbkLgBTrPHQsGHFlc)) int32_t  mKECfnnawecioxCCFzjWSqQZDJML;

/// @brief Field mQsddhgGZRAsbjfTQhwOtRChfadfb, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_mQsddhgGZRAsbjfTQhwOtRChfadfb, put=__cordl_internal_set_mQsddhgGZRAsbjfTQhwOtRChfadfb)) int32_t  mQsddhgGZRAsbjfTQhwOtRChfadfb;

/// @brief Field nXmrTFKPRxdycbVyLSapcWaAGVID, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nXmrTFKPRxdycbVyLSapcWaAGVID, put=__cordl_internal_set_nXmrTFKPRxdycbVyLSapcWaAGVID)) int32_t  nXmrTFKPRxdycbVyLSapcWaAGVID;

/// @brief Field rSCWqKMqQeuOCHcVEvGTIAFxEGCW, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rSCWqKMqQeuOCHcVEvGTIAFxEGCW, put=__cordl_internal_set_rSCWqKMqQeuOCHcVEvGTIAFxEGCW)) ::Rewired::ControllerType  rSCWqKMqQeuOCHcVEvGTIAFxEGCW;

 __declspec(property(get=xJxahfhPipuIHsrthRPMfwClLaqE)) ::Rewired::ControllerType  uxkoupWTjhghkADDiCOqGqVWyFklA;

/// @brief Method DBlDGBXnqCuEiBYUlfMhZNDSKcif, addr 0x1819b83a0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment DBlDGBXnqCuEiBYUlfMhZNDSKcif(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method DEBrcYLlsFsWJyGLxLPtCGyqwPGU, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ModifierKeyFlags DEBrcYLlsFsWJyGLxLPtCGyqwPGU() ;

/// @brief Method MZLyxTGLgydQfKBRVMtvWxBkeWFI, addr 0x1819b8410, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::AxisRange MZLyxTGLgydQfKBRVMtvWxBkeWFI() ;

static inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA* New_ctor() ;

/// @brief Method YOQFyzewxulhvuapaETVClUNYbcK, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t YOQFyzewxulhvuapaETVClUNYbcK() ;

constexpr ::Rewired::ModifierKeyFlags const& __cordl_internal_get_OZSREDBtUlIqzhIpnfulBhLmeItRA() const;

constexpr ::Rewired::ModifierKeyFlags& __cordl_internal_get_OZSREDBtUlIqzhIpnfulBhLmeItRA() ;

constexpr ::Rewired::InputMapper_Context* const& __cordl_internal_get_XntyhWVWRDwjyiRLTMtWYeNcgIRC() const;

constexpr ::Rewired::InputMapper_Context*& __cordl_internal_get_XntyhWVWRDwjyiRLTMtWYeNcgIRC() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_XwKaSYFoetvBnEnIagkzoRysMgzuA() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_XwKaSYFoetvBnEnIagkzoRysMgzuA() ;

constexpr ::Rewired::Player* const& __cordl_internal_get_ZEyCASCNWLRQYtfWnysJeSfnVhoK() const;

constexpr ::Rewired::Player*& __cordl_internal_get_ZEyCASCNWLRQYtfWnysJeSfnVhoK() ;

constexpr int32_t const& __cordl_internal_get_mQsddhgGZRAsbjfTQhwOtRChfadfb() const;

constexpr int32_t& __cordl_internal_get_mQsddhgGZRAsbjfTQhwOtRChfadfb() ;

constexpr int32_t const& __cordl_internal_get_nXmrTFKPRxdycbVyLSapcWaAGVID() const;

constexpr int32_t& __cordl_internal_get_nXmrTFKPRxdycbVyLSapcWaAGVID() ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get_rSCWqKMqQeuOCHcVEvGTIAFxEGCW() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get_rSCWqKMqQeuOCHcVEvGTIAFxEGCW() ;

constexpr void __cordl_internal_set_OZSREDBtUlIqzhIpnfulBhLmeItRA(::Rewired::ModifierKeyFlags  value) ;

constexpr void __cordl_internal_set_XntyhWVWRDwjyiRLTMtWYeNcgIRC(::Rewired::InputMapper_Context*  value) ;

constexpr void __cordl_internal_set_XwKaSYFoetvBnEnIagkzoRysMgzuA(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_ZEyCASCNWLRQYtfWnysJeSfnVhoK(::Rewired::Player*  value) ;

constexpr void __cordl_internal_set_mQsddhgGZRAsbjfTQhwOtRChfadfb(int32_t  value) ;

constexpr void __cordl_internal_set_nXmrTFKPRxdycbVyLSapcWaAGVID(int32_t  value) ;

constexpr void __cordl_internal_set_rSCWqKMqQeuOCHcVEvGTIAFxEGCW(::Rewired::ControllerType  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method atxfFbDCJXiJDcVZGWzHbiNJFnsoB, addr 0x1819b8460, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment atxfFbDCJXiJDcVZGWzHbiNJFnsoB() ;

/// @brief Method bRoxHhylipoREPAjVHPQEsiYlncfb, addr 0x1819b85a0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment bRoxHhylipoREPAjVHPQEsiYlncfb(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method btigKwIbUQamLbkLgBTrPHQsGHFlc, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t btigKwIbUQamLbkLgBTrPHQsGHFlc() ;

/// @brief Method lamLUZbexqepslULteMCnWapISaM, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Player* lamLUZbexqepslULteMCnWapISaM() ;

/// @brief Method qLnGbwGUwiXmjdZJuYQtpzuABVgQA, addr 0x1819b8600, size 0x70, virtual false, abstract: false, final false
inline void qLnGbwGUwiXmjdZJuYQtpzuABVgQA() ;

/// @brief Method scvoKYJbFGGKGsVZtdRoVhPtAffl, addr 0x1819b8670, size 0xf0, virtual false, abstract: false, final false
inline ::StringW scvoKYJbFGGKGsVZtdRoVhPtAffl() ;

/// @brief Method ujqOrAgNKsGEnDzEnavLdZRpFkBL, addr 0x1805e1080, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo ujqOrAgNKsGEnDzEnavLdZRpFkBL() ;

/// @brief Method xJxahfhPipuIHsrthRPMfwClLaqE, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType xJxahfhPipuIHsrthRPMfwClLaqE() ;

/// @brief Method xTuxwDckeyEvxYMGqNGFCfvrBcPI, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Context* xTuxwDckeyEvxYMGqNGFCfvrBcPI() ;

/// @brief Method zTSapAJxADCTUbDuDDHadoMPggwjA, addr 0x1819b8760, size 0x130, virtual false, abstract: false, final false
inline void zTSapAJxADCTUbDuDDHadoMPggwjA(::Rewired::Player*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA(xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA(xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2094};

/// @brief Field ZEyCASCNWLRQYtfWnysJeSfnVhoK, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Player*  ___ZEyCASCNWLRQYtfWnysJeSfnVhoK;

/// @brief Field mQsddhgGZRAsbjfTQhwOtRChfadfb, offset: 0x18, size: 0x4, def value: None
 int32_t  ___mQsddhgGZRAsbjfTQhwOtRChfadfb;

/// @brief Field XntyhWVWRDwjyiRLTMtWYeNcgIRC, offset: 0x20, size: 0x8, def value: None
 ::Rewired::InputMapper_Context*  ___XntyhWVWRDwjyiRLTMtWYeNcgIRC;

/// @brief Field rSCWqKMqQeuOCHcVEvGTIAFxEGCW, offset: 0x28, size: 0x4, def value: None
 ::Rewired::ControllerType  ___rSCWqKMqQeuOCHcVEvGTIAFxEGCW;

/// @brief Field nXmrTFKPRxdycbVyLSapcWaAGVID, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___nXmrTFKPRxdycbVyLSapcWaAGVID;

/// @brief Field XwKaSYFoetvBnEnIagkzoRysMgzuA, offset: 0x30, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___XwKaSYFoetvBnEnIagkzoRysMgzuA;

/// @brief Field OZSREDBtUlIqzhIpnfulBhLmeItRA, offset: 0x68, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  ___OZSREDBtUlIqzhIpnfulBhLmeItRA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA, ___ZEyCASCNWLRQYtfWnysJeSfnVhoK) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA, ___mQsddhgGZRAsbjfTQhwOtRChfadfb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA, ___XntyhWVWRDwjyiRLTMtWYeNcgIRC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA, ___rSCWqKMqQeuOCHcVEvGTIAFxEGCW) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA, ___nXmrTFKPRxdycbVyLSapcWaAGVID) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA, ___XwKaSYFoetvBnEnIagkzoRysMgzuA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA, ___OZSREDBtUlIqzhIpnfulBhLmeItRA) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/gExWtQlWsvAVKSPXFBAvdZdHSICCA
class CORDL_TYPE xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA : public ::System::Object {
public:
// Declarations
/// @brief Field SmgQUGFRkvKomoHqaJWOkwQuuOCl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SmgQUGFRkvKomoHqaJWOkwQuuOCl, put=__cordl_internal_set_SmgQUGFRkvKomoHqaJWOkwQuuOCl)) ::Rewired::ActionElementMap*  SmgQUGFRkvKomoHqaJWOkwQuuOCl;

/// @brief Method FdMrDljItVOLQytXkSQluxnNvlMJ, addr 0x1819c2820, size 0x30, virtual false, abstract: false, final false
inline bool FdMrDljItVOLQytXkSQluxnNvlMJ(::Rewired::ElementAssignmentConflictInfo  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA* New_ctor() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_SmgQUGFRkvKomoHqaJWOkwQuuOCl() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_SmgQUGFRkvKomoHqaJWOkwQuuOCl() ;

constexpr void __cordl_internal_set_SmgQUGFRkvKomoHqaJWOkwQuuOCl(::Rewired::ActionElementMap*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA(xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA(xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2095};

/// @brief Field SmgQUGFRkvKomoHqaJWOkwQuuOCl, offset: 0x10, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___SmgQUGFRkvKomoHqaJWOkwQuuOCl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA, ___SmgQUGFRkvKomoHqaJWOkwQuuOCl) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA) == 0x18, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs/sRYGygrxlmBFgvsdsxPKZHUBPTHp
class CORDL_TYPE xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp : public ::System::Object {
public:
// Declarations
/// @brief Field EGGgzVjXRdKlnOrokuudymupuDJv, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_EGGgzVjXRdKlnOrokuudymupuDJv, put=__cordl_internal_set_EGGgzVjXRdKlnOrokuudymupuDJv)) bool  EGGgzVjXRdKlnOrokuudymupuDJv;

/// @brief Field VXYiUbHpyLqBuHGysHZYykmdjEdw, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VXYiUbHpyLqBuHGysHZYykmdjEdw, put=__cordl_internal_set_VXYiUbHpyLqBuHGysHZYykmdjEdw)) ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  VXYiUbHpyLqBuHGysHZYykmdjEdw;

/// @brief Field aJblbBlOFfhQuaeFgqpzLpWtpgEuA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_aJblbBlOFfhQuaeFgqpzLpWtpgEuA, put=__cordl_internal_set_aJblbBlOFfhQuaeFgqpzLpWtpgEuA)) ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  aJblbBlOFfhQuaeFgqpzLpWtpgEuA;

/// @brief Field aLrWCPDKgSmMDPzjUarajmXjjnbI, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_aLrWCPDKgSmMDPzjUarajmXjjnbI, put=__cordl_internal_set_aLrWCPDKgSmMDPzjUarajmXjjnbI)) ::Rewired::ElementAssignmentInfo*  aLrWCPDKgSmMDPzjUarajmXjjnbI;

static inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp* New_ctor() ;

/// @brief Method SDbUlzDPejdZAMvdKomxxpJfOELH, addr 0x1819c2ef0, size 0x40, virtual false, abstract: false, final false
inline bool SDbUlzDPejdZAMvdKomxxpJfOELH(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get_EGGgzVjXRdKlnOrokuudymupuDJv() const;

constexpr bool& __cordl_internal_get_EGGgzVjXRdKlnOrokuudymupuDJv() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_VXYiUbHpyLqBuHGysHZYykmdjEdw() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_VXYiUbHpyLqBuHGysHZYykmdjEdw() ;

constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs* const& __cordl_internal_get_aJblbBlOFfhQuaeFgqpzLpWtpgEuA() const;

constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*& __cordl_internal_get_aJblbBlOFfhQuaeFgqpzLpWtpgEuA() ;

constexpr ::Rewired::ElementAssignmentInfo* const& __cordl_internal_get_aLrWCPDKgSmMDPzjUarajmXjjnbI() const;

constexpr ::Rewired::ElementAssignmentInfo*& __cordl_internal_get_aLrWCPDKgSmMDPzjUarajmXjjnbI() ;

constexpr void __cordl_internal_set_EGGgzVjXRdKlnOrokuudymupuDJv(bool  value) ;

constexpr void __cordl_internal_set_VXYiUbHpyLqBuHGysHZYykmdjEdw(::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_aJblbBlOFfhQuaeFgqpzLpWtpgEuA(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  value) ;

constexpr void __cordl_internal_set_aLrWCPDKgSmMDPzjUarajmXjjnbI(::Rewired::ElementAssignmentInfo*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp(xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp(xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2096};

/// @brief Field aJblbBlOFfhQuaeFgqpzLpWtpgEuA, offset: 0x10, size: 0x8, def value: None
 ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  ___aJblbBlOFfhQuaeFgqpzLpWtpgEuA;

/// @brief Field aLrWCPDKgSmMDPzjUarajmXjjnbI, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ElementAssignmentInfo*  ___aLrWCPDKgSmMDPzjUarajmXjjnbI;

/// @brief Field VXYiUbHpyLqBuHGysHZYykmdjEdw, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  ___VXYiUbHpyLqBuHGysHZYykmdjEdw;

/// @brief Field EGGgzVjXRdKlnOrokuudymupuDJv, offset: 0x28, size: 0x1, def value: None
 bool  ___EGGgzVjXRdKlnOrokuudymupuDJv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp, ___aJblbBlOFfhQuaeFgqpzLpWtpgEuA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp, ___aLrWCPDKgSmMDPzjUarajmXjjnbI) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp, ___VXYiUbHpyLqBuHGysHZYykmdjEdw) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp, ___EGGgzVjXRdKlnOrokuudymupuDJv) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignment, Rewired.InputMapper::Status, Rewired.InputMapper::xabAKgmsLsumCneGRTvlrjhOgfTs::UnnCIqBLWHmvfIqnXtTEThfNyAVIA, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/xabAKgmsLsumCneGRTvlrjhOgfTs
class CORDL_TYPE InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs : public ::System::Object {
public:
// Declarations
using LWErQSfKExFdlIYCZewEsagtnAADA = ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA;

using UnnCIqBLWHmvfIqnXtTEThfNyAVIA = ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA;

using gExWtQlWsvAVKSPXFBAvdZdHSICCA = ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_gExWtQlWsvAVKSPXFBAvdZdHSICCA;

using sRYGygrxlmBFgvsdsxPKZHUBPTHp = ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_sRYGygrxlmBFgvsdsxPKZHUBPTHp;

using wBIaCVOxKjeUKBWcvCLnECgDWFab = ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab;

/// @brief Field CtxTlCmVPbhHdyedeGJBJIQXLpmM, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CtxTlCmVPbhHdyedeGJBJIQXLpmM, put=__cordl_internal_set_CtxTlCmVPbhHdyedeGJBJIQXLpmM)) ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  CtxTlCmVPbhHdyedeGJBJIQXLpmM;

 __declspec(property(get=ZRHRTtPToWjHRuSfnNnIWieIkdec)) float_t  DRHusQeapyVMTcbloaZlBmNjqSOMA;

/// @brief Field OeycipqVSKKCeeEhvLqFXMxwIMkw, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OeycipqVSKKCeeEhvLqFXMxwIMkw, put=__cordl_internal_set_OeycipqVSKKCeeEhvLqFXMxwIMkw)) ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  OeycipqVSKKCeeEhvLqFXMxwIMkw;

/// @brief Field PzyRZlWVHxLeHuNWRzkBgLKEZTmH, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PzyRZlWVHxLeHuNWRzkBgLKEZTmH, put=__cordl_internal_set_PzyRZlWVHxLeHuNWRzkBgLKEZTmH)) ::Rewired::InputMapper*  PzyRZlWVHxLeHuNWRzkBgLKEZTmH;

/// @brief Field QglVwkutmtlXNsctFCoIDGSBgboQ, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_QglVwkutmtlXNsctFCoIDGSBgboQ, put=__cordl_internal_set_QglVwkutmtlXNsctFCoIDGSBgboQ)) ::Rewired::InputMapper_Options*  QglVwkutmtlXNsctFCoIDGSBgboQ;

 __declspec(property(get=jHEfOhuwNKdsdhpBISpZcufStlHdb)) bool  TvWDVifKfJlgUArlDTqFlPMBTtJye;

 __declspec(property(get=AbYCyopvHHgBLfAomjjPksbIDlVT)) ::Rewired::InputMapper_Status  UwNPJwTQxfjvzEoymXJFWmwtPRgO;

/// @brief Field ZJnUBlTMbZQNvUtRSXXtFjxsfydA, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZJnUBlTMbZQNvUtRSXXtFjxsfydA, put=__cordl_internal_set_ZJnUBlTMbZQNvUtRSXXtFjxsfydA)) double_t  ZJnUBlTMbZQNvUtRSXXtFjxsfydA;

/// @brief Field aQimApvdrndeegOztnBRPdKqquEJA, offset 0x60, size 0x24 
 __declspec(property(get=__cordl_internal_get_aQimApvdrndeegOztnBRPdKqquEJA, put=__cordl_internal_set_aQimApvdrndeegOztnBRPdKqquEJA)) ::Rewired::ElementAssignment  aQimApvdrndeegOztnBRPdKqquEJA;

/// @brief Field hzAIybsdltoooGmWBqliriBMoJsv, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hzAIybsdltoooGmWBqliriBMoJsv, put=__cordl_internal_set_hzAIybsdltoooGmWBqliriBMoJsv)) ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  hzAIybsdltoooGmWBqliriBMoJsv;

/// @brief Field hzatymNpEnCVyuiofrgLaPZCViRu, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_hzatymNpEnCVyuiofrgLaPZCViRu, put=__cordl_internal_set_hzatymNpEnCVyuiofrgLaPZCViRu)) ::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>*  hzatymNpEnCVyuiofrgLaPZCViRu;

 __declspec(property(get=gyhVPexpbnDApepIYqgKyIhtEdaz)) ::Rewired::InputMapper_Context*  iVHffnrFBESnnPcMXFPRrMarSegI;

/// @brief Field rFXWhJKwZdmmcZJcGEZfiTJVeIaO, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_rFXWhJKwZdmmcZJcGEZfiTJVeIaO, put=__cordl_internal_set_rFXWhJKwZdmmcZJcGEZfiTJVeIaO)) bool  rFXWhJKwZdmmcZJcGEZfiTJVeIaO;

/// @brief Field sOmHWJDYMReeiaTCdkhYgWWrHbsA, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sOmHWJDYMReeiaTCdkhYgWWrHbsA, put=__cordl_internal_set_sOmHWJDYMReeiaTCdkhYgWWrHbsA)) ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA  sOmHWJDYMReeiaTCdkhYgWWrHbsA;

/// @brief Field vrbhlNOOddXsmtPuYbUydXETxvXAA, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrbhlNOOddXsmtPuYbUydXETxvXAA, put=__cordl_internal_set_vrbhlNOOddXsmtPuYbUydXETxvXAA)) ::System::Collections::Generic::List_1<::Rewired::Player*>*  vrbhlNOOddXsmtPuYbUydXETxvXAA;

/// @brief Field zzEokIJtrhIOMHhHIebmDNoaeimk, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_zzEokIJtrhIOMHhHIebmDNoaeimk, put=__cordl_internal_set_zzEokIJtrhIOMHhHIebmDNoaeimk)) ::Rewired::InputMapper_Status  zzEokIJtrhIOMHhHIebmDNoaeimk;

/// @brief Method AbYCyopvHHgBLfAomjjPksbIDlVT, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Status AbYCyopvHHgBLfAomjjPksbIDlVT() ;

/// @brief Method BKEeBrHDClnVjzPMZQLqvUrdbPVD, addr 0x1819a9710, size 0x350, virtual false, abstract: false, final false
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab BKEeBrHDClnVjzPMZQLqvUrdbPVD(::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method BsSFVTDhXRUJuubxiJooTRbTLjzk, addr 0x1819a9a60, size 0x1a0, virtual false, abstract: false, final false
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab BsSFVTDhXRUJuubxiJooTRbTLjzk(::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method DUcAMbWfHCGItxpKvictGTYcQsYY, addr 0x1819a9c00, size 0x90, virtual false, abstract: false, final false
inline void DUcAMbWfHCGItxpKvictGTYcQsYY() ;

/// @brief Method HFpGCvYFfmRlNFmuBDnWiVqNNHJaA, addr 0x1819a9c90, size 0x60, virtual true, abstract: false, final false
inline void HFpGCvYFfmRlNFmuBDnWiVqNNHJaA() ;

/// @brief Method HOEKAXscZTeyScDTVPDVprhuBVMbb, addr 0x1819a9cf0, size 0x10, virtual false, abstract: false, final false
inline void HOEKAXscZTeyScDTVPDVprhuBVMbb(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ITaMVJKluJAcdflIJSJxujZNTPV, addr 0x1819a9d00, size 0xd0, virtual false, abstract: false, final false
inline void ITaMVJKluJAcdflIJSJxujZNTPV(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IYecJdJvSIkYTKKgtcZlIJZtbOIJ, addr 0x1819a9dd0, size 0xc0, virtual false, abstract: false, final false
inline void IYecJdJvSIkYTKKgtcZlIJZtbOIJ(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JKdMIclhwWnaNIeJRDZdcSVUElQTA, addr 0x181511d60, size 0x20, virtual false, abstract: false, final false
inline void JKdMIclhwWnaNIeJRDZdcSVUElQTA() ;

/// @brief Method KqPQoTUlxiQShVRbVGHhGreXmFhC, addr 0x1819a9e90, size 0x70, virtual false, abstract: false, final false
inline void KqPQoTUlxiQShVRbVGHhGreXmFhC() ;

/// @brief Method LVRiXbnRfzSFBoSNtHWWOndCtSVS, addr 0x1819a9f00, size 0x50, virtual false, abstract: false, final false
static inline bool LVRiXbnRfzSFBoSNtHWWOndCtSVS(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method LZcpHEsDattrkYURJTSEzkNhhTAJA, addr 0x1819a9f50, size 0x60, virtual false, abstract: false, final false
inline void LZcpHEsDattrkYURJTSEzkNhhTAJA() ;

/// @brief Method LcLvVFDJIYixCjpPmWMqZJwocVuV, addr 0x1819a9fb0, size 0xc0, virtual false, abstract: false, final false
inline void LcLvVFDJIYixCjpPmWMqZJwocVuV(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LiiyYiKAExDtnZzFGTDNqYhKrNIe, addr 0x1819aa070, size 0x6e0, virtual false, abstract: false, final false
inline bool LiiyYiKAExDtnZzFGTDNqYhKrNIe(::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method NCNRvGZvNzdbJujkdRdypgdXUsgB, addr 0x1819aa750, size 0x40, virtual false, abstract: false, final false
static inline bool NCNRvGZvNzdbJujkdRdypgdXUsgB(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_5) ;

static inline ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs* New_ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method OcoPSmdgzMOztJoNRfFwiJBmxTDy, addr 0x1819aa790, size 0x160, virtual false, abstract: false, final false
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab OcoPSmdgzMOztJoNRfFwiJBmxTDy(::Rewired::InputMapper_ConflictResponse  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method QETpeqeHAflZJhThZJnXsMnDIkGdA, addr 0x1819aa8f0, size 0x90, virtual false, abstract: false, final false
inline void QETpeqeHAflZJhThZJnXsMnDIkGdA() ;

/// @brief Method QRRETLNTXibqLyBWgGxJFyYnkrWJ, addr 0x1819aa980, size 0x100, virtual false, abstract: false, final false
inline void QRRETLNTXibqLyBWgGxJFyYnkrWJ() ;

/// @brief Method RqfNdNIDuOpfXssvQopKpPDggRbiA, addr 0x1819aaa80, size 0x40, virtual false, abstract: false, final false
inline void RqfNdNIDuOpfXssvQopKpPDggRbiA() ;

/// @brief Method UTMgblTjYncbuDGLLufOkhXtuttDA, addr 0x1819aaac0, size 0x430, virtual false, abstract: false, final false
inline bool UTMgblTjYncbuDGLLufOkhXtuttDA(::by_ref<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>  _cordl_fixed_empty_name_whitespace, ::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method VSfrykVoPJOAhRLhaLJUlUHlTfgO, addr 0x1819aaef0, size 0x340, virtual false, abstract: false, final false
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab VSfrykVoPJOAhRLhaLJUlUHlTfgO(::by_ref<::Rewired::ElementAssignment>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method WXyGFvZhpYcjFIVCTdNxkAZGuyxr, addr 0x1819ab230, size 0x100, virtual false, abstract: false, final false
inline void WXyGFvZhpYcjFIVCTdNxkAZGuyxr(::Rewired::InputMapper_ConflictResponse  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XaCCvJeJeBozyoZyzdEpqOdnrDsv, addr 0x1819ab330, size 0x250, virtual false, abstract: false, final false
static inline bool XaCCvJeJeBozyoZyzdEpqOdnrDsv(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method YaTvoeBxrXKWPquqUeLYEHGIYquw, addr 0x1819ab580, size 0xb0, virtual false, abstract: false, final false
inline void YaTvoeBxrXKWPquqUeLYEHGIYquw() ;

/// @brief Method YfootQJXNiRAYHuYqbdtPIQZyFrI, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
inline void YfootQJXNiRAYHuYqbdtPIQZyFrI(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  _cordl_fixed_empty_name_whitespace,   _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method ZPmhZLyHLwQsAYhmdbfxnsuheEckA, addr 0x1819ab630, size 0x60, virtual false, abstract: false, final false
inline void ZPmhZLyHLwQsAYhmdbfxnsuheEckA() ;

/// @brief Method ZRHRTtPToWjHRuSfnNnIWieIkdec, addr 0x1819ab690, size 0x90, virtual false, abstract: false, final false
inline float_t ZRHRTtPToWjHRuSfnNnIWieIkdec() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>* const& __cordl_internal_get_CtxTlCmVPbhHdyedeGJBJIQXLpmM() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*& __cordl_internal_get_CtxTlCmVPbhHdyedeGJBJIQXLpmM() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>* const& __cordl_internal_get_OeycipqVSKKCeeEhvLqFXMxwIMkw() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*& __cordl_internal_get_OeycipqVSKKCeeEhvLqFXMxwIMkw() ;

constexpr ::Rewired::InputMapper* const& __cordl_internal_get_PzyRZlWVHxLeHuNWRzkBgLKEZTmH() const;

constexpr ::Rewired::InputMapper*& __cordl_internal_get_PzyRZlWVHxLeHuNWRzkBgLKEZTmH() ;

constexpr ::Rewired::InputMapper_Options* const& __cordl_internal_get_QglVwkutmtlXNsctFCoIDGSBgboQ() const;

constexpr ::Rewired::InputMapper_Options*& __cordl_internal_get_QglVwkutmtlXNsctFCoIDGSBgboQ() ;

constexpr double_t const& __cordl_internal_get_ZJnUBlTMbZQNvUtRSXXtFjxsfydA() const;

constexpr double_t& __cordl_internal_get_ZJnUBlTMbZQNvUtRSXXtFjxsfydA() ;

constexpr ::Rewired::ElementAssignment const& __cordl_internal_get_aQimApvdrndeegOztnBRPdKqquEJA() const;

constexpr ::Rewired::ElementAssignment& __cordl_internal_get_aQimApvdrndeegOztnBRPdKqquEJA() ;

constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA* const& __cordl_internal_get_hzAIybsdltoooGmWBqliriBMoJsv() const;

constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*& __cordl_internal_get_hzAIybsdltoooGmWBqliriBMoJsv() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_hzatymNpEnCVyuiofrgLaPZCViRu() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_hzatymNpEnCVyuiofrgLaPZCViRu() ;

constexpr bool const& __cordl_internal_get_rFXWhJKwZdmmcZJcGEZfiTJVeIaO() const;

constexpr bool& __cordl_internal_get_rFXWhJKwZdmmcZJcGEZfiTJVeIaO() ;

constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA const& __cordl_internal_get_sOmHWJDYMReeiaTCdkhYgWWrHbsA() const;

constexpr ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA& __cordl_internal_get_sOmHWJDYMReeiaTCdkhYgWWrHbsA() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Player*>* const& __cordl_internal_get_vrbhlNOOddXsmtPuYbUydXETxvXAA() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Player*>*& __cordl_internal_get_vrbhlNOOddXsmtPuYbUydXETxvXAA() ;

constexpr ::Rewired::InputMapper_Status const& __cordl_internal_get_zzEokIJtrhIOMHhHIebmDNoaeimk() const;

constexpr ::Rewired::InputMapper_Status& __cordl_internal_get_zzEokIJtrhIOMHhHIebmDNoaeimk() ;

constexpr void __cordl_internal_set_CtxTlCmVPbhHdyedeGJBJIQXLpmM(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  value) ;

constexpr void __cordl_internal_set_OeycipqVSKKCeeEhvLqFXMxwIMkw(::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  value) ;

constexpr void __cordl_internal_set_PzyRZlWVHxLeHuNWRzkBgLKEZTmH(::Rewired::InputMapper*  value) ;

constexpr void __cordl_internal_set_QglVwkutmtlXNsctFCoIDGSBgboQ(::Rewired::InputMapper_Options*  value) ;

constexpr void __cordl_internal_set_ZJnUBlTMbZQNvUtRSXXtFjxsfydA(double_t  value) ;

constexpr void __cordl_internal_set_aQimApvdrndeegOztnBRPdKqquEJA(::Rewired::ElementAssignment  value) ;

constexpr void __cordl_internal_set_hzAIybsdltoooGmWBqliriBMoJsv(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  value) ;

constexpr void __cordl_internal_set_hzatymNpEnCVyuiofrgLaPZCViRu(::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_rFXWhJKwZdmmcZJcGEZfiTJVeIaO(bool  value) ;

constexpr void __cordl_internal_set_sOmHWJDYMReeiaTCdkhYgWWrHbsA(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA  value) ;

constexpr void __cordl_internal_set_vrbhlNOOddXsmtPuYbUydXETxvXAA(::System::Collections::Generic::List_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_zzEokIJtrhIOMHhHIebmDNoaeimk(::Rewired::InputMapper_Status  value) ;

/// @brief Method .ctor, addr 0x1819ab720, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method aCAIkQedIipwdGJTLRAMhxBtxqmWA, addr 0x1819ab850, size 0x270, virtual false, abstract: false, final false
inline void aCAIkQedIipwdGJTLRAMhxBtxqmWA(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method aPGnfiXLZVJHFVHSAOMMLttZtJot, addr 0x1819abac0, size 0x1d0, virtual false, abstract: false, final false
static inline void aPGnfiXLZVJHFVHSAOMMLttZtJot(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method aasteOnNbNeuDVAOebnpyOSktRmV, addr 0x1819abc90, size 0xb0, virtual false, abstract: false, final false
inline void aasteOnNbNeuDVAOebnpyOSktRmV() ;

/// @brief Method dKHeobyUiakYHFFjxVnlfHyWEcUL, addr 0x1819abd40, size 0x2b0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>* dKHeobyUiakYHFFjxVnlfHyWEcUL(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method ezzUkpLgsJbWmEYCngKCCxHTotIKA, addr 0x1819abff0, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo ezzUkpLgsJbWmEYCngKCCxHTotIKA(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace, ::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method fVNayPIbxeYBnFGeiRgRONGLzVRk, addr 0x1819ac100, size 0xc0, virtual false, abstract: false, final false
inline void fVNayPIbxeYBnFGeiRgRONGLzVRk(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fmOdEKVSMiPEahzwdpKcqewZBLay, addr 0x1819ac1c0, size 0x50, virtual false, abstract: false, final false
inline bool fmOdEKVSMiPEahzwdpKcqewZBLay(::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gyhVPexpbnDApepIYqgKyIhtEdaz, addr 0x1819ac210, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Context* gyhVPexpbnDApepIYqgKyIhtEdaz() ;

/// @brief Method jHEfOhuwNKdsdhpBISpZcufStlHdb, addr 0x1819ac240, size 0x40, virtual false, abstract: false, final false
inline bool jHEfOhuwNKdsdhpBISpZcufStlHdb() ;

/// @brief Method jMxqwJSnlJSeowpAeIZPpmIEoOkh, addr 0x1819ac280, size 0x3b0, virtual false, abstract: false, final false
inline void jMxqwJSnlJSeowpAeIZPpmIEoOkh() ;

/// @brief Method jpOpHIskMCjVzfWwEYtUrPlCKhPi, addr 0x1819ac630, size 0xb0, virtual false, abstract: false, final false
inline void jpOpHIskMCjVzfWwEYtUrPlCKhPi() ;

/// @brief Method kGXATKjTLwMMWvRnKugXYzXXxWGD, addr 0x1819ac6e0, size 0x120, virtual false, abstract: false, final false
static inline bool kGXATKjTLwMMWvRnKugXYzXXxWGD(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::Player*>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method oBonKlaJCdXwbbYkPHAFMGOUaLRx, addr 0x1819ac800, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* oBonKlaJCdXwbbYkPHAFMGOUaLRx(::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qVasuIpNPueKYHLjKajLPanVVRNaA, addr 0x1819ac9d0, size 0xb0, virtual false, abstract: false, final false
inline void qVasuIpNPueKYHLjKajLPanVVRNaA() ;

/// @brief Method sHlAhgtKjqWUCSTmZFqbLGskwXDe, addr 0x1819aca80, size 0x110, virtual false, abstract: false, final false
static inline bool sHlAhgtKjqWUCSTmZFqbLGskwXDe(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::ElementAssignmentConflictCheck>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method sxUkOgfzGKVEzyUVXFVvTnRUDvHZ, addr 0x1819acb90, size 0x5b0, virtual false, abstract: false, final false
static inline ::Rewired::ControllerPollingInfo sxUkOgfzGKVEzyUVXFVvTnRUDvHZ(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::ModifierKeyFlags>  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method ucUDluvdixfNkmerQbGgJuBVXbgtA, addr 0x1819ad140, size 0xd0, virtual false, abstract: false, final false
inline void ucUDluvdixfNkmerQbGgJuBVXbgtA(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method wBBgZLbtGMCWjMlOFNLuebpdmwSEA, addr 0x1819ad210, size 0x1a0, virtual false, abstract: false, final false
inline ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_wBIaCVOxKjeUKBWcvCLnECgDWFab wBBgZLbtGMCWjMlOFNLuebpdmwSEA(::Rewired::InputMapper_ConflictResponse  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method wQrACkRuKxBJmfkymCjkaVLEandfb, addr 0x1819ad3b0, size 0xd0, virtual false, abstract: false, final false
static inline bool wQrACkRuKxBJmfkymCjkaVLEandfb(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method xHcOCeNHRZddNzseytxoXwtQubAA, addr 0x1819ad480, size 0xc0, virtual false, abstract: false, final false
inline void xHcOCeNHRZddNzseytxoXwtQubAA(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method yxRgrwNAjsMCXRnFGkaZsORKuiOU, addr 0x1819ad540, size 0x140, virtual false, abstract: false, final false
inline void yxRgrwNAjsMCXRnFGkaZsORKuiOU(::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zBIXSgYHqUBopHcKoJoepLyyuCZV, addr 0x1819ad680, size 0x3c0, virtual false, abstract: false, final false
inline void zBIXSgYHqUBopHcKoJoepLyyuCZV(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zSkKBaYefpqNpUvXjYDPniMiidMp, addr 0x1819ada40, size 0x400, virtual false, abstract: false, final false
inline bool zSkKBaYefpqNpUvXjYDPniMiidMp(::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<::StringW>  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method zjQsgKkevXcLNBqbAgvMAQrCbxYib, addr 0x1819ade40, size 0x1b0, virtual false, abstract: false, final false
inline void zjQsgKkevXcLNBqbAgvMAQrCbxYib(::Rewired::ElementAssignmentInfo*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IList_1<::Rewired::ElementAssignmentConflictInfo>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs(InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs(InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2097};

/// @brief Field PzyRZlWVHxLeHuNWRzkBgLKEZTmH, offset: 0x10, size: 0x8, def value: None
 ::Rewired::InputMapper*  ___PzyRZlWVHxLeHuNWRzkBgLKEZTmH;

/// @brief Field QglVwkutmtlXNsctFCoIDGSBgboQ, offset: 0x18, size: 0x8, def value: None
 ::Rewired::InputMapper_Options*  ___QglVwkutmtlXNsctFCoIDGSBgboQ;

/// @brief Field hzAIybsdltoooGmWBqliriBMoJsv, offset: 0x20, size: 0x8, def value: None
 ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_LWErQSfKExFdlIYCZewEsagtnAADA*  ___hzAIybsdltoooGmWBqliriBMoJsv;

/// @brief Field OeycipqVSKKCeeEhvLqFXMxwIMkw, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  ___OeycipqVSKKCeeEhvLqFXMxwIMkw;

/// @brief Field CtxTlCmVPbhHdyedeGJBJIQXLpmM, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  ___CtxTlCmVPbhHdyedeGJBJIQXLpmM;

/// @brief Field zzEokIJtrhIOMHhHIebmDNoaeimk, offset: 0x38, size: 0x4, def value: None
 ::Rewired::InputMapper_Status  ___zzEokIJtrhIOMHhHIebmDNoaeimk;

/// @brief Field sOmHWJDYMReeiaTCdkhYgWWrHbsA, offset: 0x3c, size: 0x4, def value: None
 ::Rewired::xabAKgmsLsumCneGRTvlrjhOgfTs_InputMapper_UnnCIqBLWHmvfIqnXtTEThfNyAVIA  ___sOmHWJDYMReeiaTCdkhYgWWrHbsA;

/// @brief Field ZJnUBlTMbZQNvUtRSXXtFjxsfydA, offset: 0x40, size: 0x8, def value: None
 double_t  ___ZJnUBlTMbZQNvUtRSXXtFjxsfydA;

/// @brief Field rFXWhJKwZdmmcZJcGEZfiTJVeIaO, offset: 0x48, size: 0x1, def value: None
 bool  ___rFXWhJKwZdmmcZJcGEZfiTJVeIaO;

/// @brief Field vrbhlNOOddXsmtPuYbUydXETxvXAA, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Player*>*  ___vrbhlNOOddXsmtPuYbUydXETxvXAA;

/// @brief Field hzatymNpEnCVyuiofrgLaPZCViRu, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::ControllerPollingInfo>*  ___hzatymNpEnCVyuiofrgLaPZCViRu;

/// @brief Field aQimApvdrndeegOztnBRPdKqquEJA, offset: 0x60, size: 0x24, def value: None
 ::Rewired::ElementAssignment  ___aQimApvdrndeegOztnBRPdKqquEJA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___PzyRZlWVHxLeHuNWRzkBgLKEZTmH) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___QglVwkutmtlXNsctFCoIDGSBgboQ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___hzAIybsdltoooGmWBqliriBMoJsv) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___OeycipqVSKKCeeEhvLqFXMxwIMkw) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___CtxTlCmVPbhHdyedeGJBJIQXLpmM) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___zzEokIJtrhIOMHhHIebmDNoaeimk) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___sOmHWJDYMReeiaTCdkhYgWWrHbsA) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___ZJnUBlTMbZQNvUtRSXXtFjxsfydA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___rFXWhJKwZdmmcZJcGEZfiTJVeIaO) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___vrbhlNOOddXsmtPuYbUydXETxvXAA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___hzatymNpEnCVyuiofrgLaPZCViRu) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs, ___aQimApvdrndeegOztnBRPdKqquEJA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs) == 0x88, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/Options/lbvIRsEzUhoAVjcfLQtTgitOalxdA
class CORDL_TYPE Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*  __9;

/// @brief Field <>9__64_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__64_0, put=setStaticF___9__64_0)) ::System::Action_1<::System::Exception*>*  __9__64_0;

static inline ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA* getStaticF___9() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__64_0() ;

/// @brief Method pdSHRNsfeGDrizowZnAjdGdLbnag, addr 0x1819c2890, size 0x40, virtual false, abstract: false, final false
inline void pdSHRNsfeGDrizowZnAjdGdLbnag(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF___9(::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA*  value) ;

static inline void setStaticF___9__64_0(::System::Action_1<::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA(Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA(Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2098};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.InputMapper::ConflictResponse, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/Options
class CORDL_TYPE InputMapper_Options : public ::System::Object {
public:
// Declarations
using lbvIRsEzUhoAVjcfLQtTgitOalxdA = ::Rewired::Options_InputMapper_lbvIRsEzUhoAVjcfLQtTgitOalxdA;

/// @brief Field BvOeOQfyLCHIQhSsMFVidAAahtadB, offset 0x2f, size 0x1 
 __declspec(property(get=__cordl_internal_get_BvOeOQfyLCHIQhSsMFVidAAahtadB, put=__cordl_internal_set_BvOeOQfyLCHIQhSsMFVidAAahtadB)) bool  BvOeOQfyLCHIQhSsMFVidAAahtadB;

/// @brief Field CHfCPojorPEmKSdQWLYjGNFKxCMB, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_CHfCPojorPEmKSdQWLYjGNFKxCMB, put=__cordl_internal_set_CHfCPojorPEmKSdQWLYjGNFKxCMB)) bool  CHfCPojorPEmKSdQWLYjGNFKxCMB;

/// @brief Field LBhUhLakRaWRptYmbFdIwnAxuwTs, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_LBhUhLakRaWRptYmbFdIwnAxuwTs, put=__cordl_internal_set_LBhUhLakRaWRptYmbFdIwnAxuwTs)) float_t  LBhUhLakRaWRptYmbFdIwnAxuwTs;

/// @brief Field LIfZRMiArInpDYtntFbgsXRnbIBu, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LIfZRMiArInpDYtntFbgsXRnbIBu, put=__cordl_internal_set_LIfZRMiArInpDYtntFbgsXRnbIBu)) ::ArrayW<int32_t>  LIfZRMiArInpDYtntFbgsXRnbIBu;

/// @brief Field LdusojErgbWllycEKxWyyBAPMwgE, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_LdusojErgbWllycEKxWyyBAPMwgE, put=__cordl_internal_set_LdusojErgbWllycEKxWyyBAPMwgE)) bool  LdusojErgbWllycEKxWyyBAPMwgE;

/// @brief Field OtHEBtpPgJxsqXWzBBnpdSctVvxU, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_OtHEBtpPgJxsqXWzBBnpdSctVvxU, put=__cordl_internal_set_OtHEBtpPgJxsqXWzBBnpdSctVvxU)) bool  OtHEBtpPgJxsqXWzBBnpdSctVvxU;

/// @brief Field USFDyfswlodIurpooUJGwnRfVCld, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_USFDyfswlodIurpooUJGwnRfVCld, put=__cordl_internal_set_USFDyfswlodIurpooUJGwnRfVCld)) bool  USFDyfswlodIurpooUJGwnRfVCld;

/// @brief Field VKFOpPwhEkFDbYfYGAscKKxiqNIDb, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_VKFOpPwhEkFDbYfYGAscKKxiqNIDb, put=__cordl_internal_set_VKFOpPwhEkFDbYfYGAscKKxiqNIDb)) bool  VKFOpPwhEkFDbYfYGAscKKxiqNIDb;

/// @brief Field YPhrUJhemZJvtmovkklhoJOTkgUr, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_YPhrUJhemZJvtmovkklhoJOTkgUr, put=__cordl_internal_set_YPhrUJhemZJvtmovkklhoJOTkgUr)) ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  YPhrUJhemZJvtmovkklhoJOTkgUr;

 __declspec(property(get=get_allowAxes, put=set_allowAxes)) bool  allowAxes;

 __declspec(property(get=get_allowButtons, put=set_allowButtons)) bool  allowButtons;

 __declspec(property(get=get_allowButtonsOnFullAxisAssignment, put=set_allowButtonsOnFullAxisAssignment)) bool  allowButtonsOnFullAxisAssignment;

 __declspec(property(get=get_allowKeyboardKeysWithModifiers, put=set_allowKeyboardKeysWithModifiers)) bool  allowKeyboardKeysWithModifiers;

 __declspec(property(get=get_allowKeyboardModifierKeyAsPrimary, put=set_allowKeyboardModifierKeyAsPrimary)) bool  allowKeyboardModifierKeyAsPrimary;

/// @brief Field bxpKgyzlyJprLPqLmqnBFHEtIcaP, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_bxpKgyzlyJprLPqLmqnBFHEtIcaP, put=__cordl_internal_set_bxpKgyzlyJprLPqLmqnBFHEtIcaP)) bool  bxpKgyzlyJprLPqLmqnBFHEtIcaP;

 __declspec(property(get=get_checkForConflicts, put=set_checkForConflicts)) bool  checkForConflicts;

 __declspec(property(get=get_checkForConflictsWithAllPlayers, put=set_checkForConflictsWithAllPlayers)) bool  checkForConflictsWithAllPlayers;

 __declspec(property(get=get_checkForConflictsWithPlayerIds, put=set_checkForConflictsWithPlayerIds)) ::ArrayW<int32_t>  checkForConflictsWithPlayerIds;

 __declspec(property(get=get_checkForConflictsWithSelf, put=set_checkForConflictsWithSelf)) bool  checkForConflictsWithSelf;

 __declspec(property(get=get_checkForConflictsWithSystemPlayer, put=set_checkForConflictsWithSystemPlayer)) bool  checkForConflictsWithSystemPlayer;

 __declspec(property(get=get_defaultActionWhenConflictFound, put=set_defaultActionWhenConflictFound)) ::Rewired::InputMapper_ConflictResponse  defaultActionWhenConflictFound;

/// @brief Field dpMEbjkjhtsUlbdskqgzgtjMKwJbb, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_dpMEbjkjhtsUlbdskqgzgtjMKwJbb, put=__cordl_internal_set_dpMEbjkjhtsUlbdskqgzgtjMKwJbb)) float_t  dpMEbjkjhtsUlbdskqgzgtjMKwJbb;

 __declspec(property(get=get_holdDurationToMapKeyboardModifierKeyAsPrimary, put=set_holdDurationToMapKeyboardModifierKeyAsPrimary)) float_t  holdDurationToMapKeyboardModifierKeyAsPrimary;

 __declspec(property(get=get_ignoreMouseXAxis, put=set_ignoreMouseXAxis)) bool  ignoreMouseXAxis;

 __declspec(property(get=get_ignoreMouseYAxis, put=set_ignoreMouseYAxis)) bool  ignoreMouseYAxis;

 __declspec(property(get=get_isElementAllowedCallback, put=set_isElementAllowedCallback)) ::System::Predicate_1<::Rewired::ControllerPollingInfo>*  isElementAllowedCallback;

/// @brief Field lMBGfsFZseUSZQWjDpzeTiXWfEUXA, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lMBGfsFZseUSZQWjDpzeTiXWfEUXA, put=__cordl_internal_set_lMBGfsFZseUSZQWjDpzeTiXWfEUXA)) ::Rewired::InputMapper_ConflictResponse  lMBGfsFZseUSZQWjDpzeTiXWfEUXA;

/// @brief Field lcsVoWkBzCqHfRAxbodJvdgxydak, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_lcsVoWkBzCqHfRAxbodJvdgxydak, put=__cordl_internal_set_lcsVoWkBzCqHfRAxbodJvdgxydak)) bool  lcsVoWkBzCqHfRAxbodJvdgxydak;

/// @brief Field rHmKQNmXjGLWzTeWAJmgWimmAVZv, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_rHmKQNmXjGLWzTeWAJmgWimmAVZv, put=__cordl_internal_set_rHmKQNmXjGLWzTeWAJmgWimmAVZv)) bool  rHmKQNmXjGLWzTeWAJmgWimmAVZv;

 __declspec(property(get=get_timeout, put=set_timeout)) float_t  timeout;

/// @brief Field ugwJjATsbAskhWkeIpWEnfubiiQm, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_ugwJjATsbAskhWkeIpWEnfubiiQm, put=__cordl_internal_set_ugwJjATsbAskhWkeIpWEnfubiiQm)) bool  ugwJjATsbAskhWkeIpWEnfubiiQm;

/// @brief Field ujwAldesPearzIkFzPlwRejZCHlm, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_ujwAldesPearzIkFzPlwRejZCHlm, put=__cordl_internal_set_ujwAldesPearzIkFzPlwRejZCHlm)) bool  ujwAldesPearzIkFzPlwRejZCHlm;

/// @brief Method Clone, addr 0x1819b8890, size 0x200, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Options* Clone() ;

/// @brief Method Copy, addr 0x1819b8a90, size 0x190, virtual false, abstract: false, final false
static inline void Copy(::Rewired::InputMapper_Options*  source, ::Rewired::InputMapper_Options*  destination) ;

static inline ::Rewired::InputMapper_Options* New_ctor() ;

static inline ::Rewired::InputMapper_Options* New_ctor(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ToString, addr 0x1819b8c20, size 0x3a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get_BvOeOQfyLCHIQhSsMFVidAAahtadB() const;

constexpr bool& __cordl_internal_get_BvOeOQfyLCHIQhSsMFVidAAahtadB() ;

constexpr bool const& __cordl_internal_get_CHfCPojorPEmKSdQWLYjGNFKxCMB() const;

constexpr bool& __cordl_internal_get_CHfCPojorPEmKSdQWLYjGNFKxCMB() ;

constexpr float_t const& __cordl_internal_get_LBhUhLakRaWRptYmbFdIwnAxuwTs() const;

constexpr float_t& __cordl_internal_get_LBhUhLakRaWRptYmbFdIwnAxuwTs() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_LIfZRMiArInpDYtntFbgsXRnbIBu() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_LIfZRMiArInpDYtntFbgsXRnbIBu() ;

constexpr bool const& __cordl_internal_get_LdusojErgbWllycEKxWyyBAPMwgE() const;

constexpr bool& __cordl_internal_get_LdusojErgbWllycEKxWyyBAPMwgE() ;

constexpr bool const& __cordl_internal_get_OtHEBtpPgJxsqXWzBBnpdSctVvxU() const;

constexpr bool& __cordl_internal_get_OtHEBtpPgJxsqXWzBBnpdSctVvxU() ;

constexpr bool const& __cordl_internal_get_USFDyfswlodIurpooUJGwnRfVCld() const;

constexpr bool& __cordl_internal_get_USFDyfswlodIurpooUJGwnRfVCld() ;

constexpr bool const& __cordl_internal_get_VKFOpPwhEkFDbYfYGAscKKxiqNIDb() const;

constexpr bool& __cordl_internal_get_VKFOpPwhEkFDbYfYGAscKKxiqNIDb() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>* const& __cordl_internal_get_YPhrUJhemZJvtmovkklhoJOTkgUr() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*& __cordl_internal_get_YPhrUJhemZJvtmovkklhoJOTkgUr() ;

constexpr bool const& __cordl_internal_get_bxpKgyzlyJprLPqLmqnBFHEtIcaP() const;

constexpr bool& __cordl_internal_get_bxpKgyzlyJprLPqLmqnBFHEtIcaP() ;

constexpr float_t const& __cordl_internal_get_dpMEbjkjhtsUlbdskqgzgtjMKwJbb() const;

constexpr float_t& __cordl_internal_get_dpMEbjkjhtsUlbdskqgzgtjMKwJbb() ;

constexpr ::Rewired::InputMapper_ConflictResponse const& __cordl_internal_get_lMBGfsFZseUSZQWjDpzeTiXWfEUXA() const;

constexpr ::Rewired::InputMapper_ConflictResponse& __cordl_internal_get_lMBGfsFZseUSZQWjDpzeTiXWfEUXA() ;

constexpr bool const& __cordl_internal_get_lcsVoWkBzCqHfRAxbodJvdgxydak() const;

constexpr bool& __cordl_internal_get_lcsVoWkBzCqHfRAxbodJvdgxydak() ;

constexpr bool const& __cordl_internal_get_rHmKQNmXjGLWzTeWAJmgWimmAVZv() const;

constexpr bool& __cordl_internal_get_rHmKQNmXjGLWzTeWAJmgWimmAVZv() ;

constexpr bool const& __cordl_internal_get_ugwJjATsbAskhWkeIpWEnfubiiQm() const;

constexpr bool& __cordl_internal_get_ugwJjATsbAskhWkeIpWEnfubiiQm() ;

constexpr bool const& __cordl_internal_get_ujwAldesPearzIkFzPlwRejZCHlm() const;

constexpr bool& __cordl_internal_get_ujwAldesPearzIkFzPlwRejZCHlm() ;

constexpr void __cordl_internal_set_BvOeOQfyLCHIQhSsMFVidAAahtadB(bool  value) ;

constexpr void __cordl_internal_set_CHfCPojorPEmKSdQWLYjGNFKxCMB(bool  value) ;

constexpr void __cordl_internal_set_LBhUhLakRaWRptYmbFdIwnAxuwTs(float_t  value) ;

constexpr void __cordl_internal_set_LIfZRMiArInpDYtntFbgsXRnbIBu(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_LdusojErgbWllycEKxWyyBAPMwgE(bool  value) ;

constexpr void __cordl_internal_set_OtHEBtpPgJxsqXWzBBnpdSctVvxU(bool  value) ;

constexpr void __cordl_internal_set_USFDyfswlodIurpooUJGwnRfVCld(bool  value) ;

constexpr void __cordl_internal_set_VKFOpPwhEkFDbYfYGAscKKxiqNIDb(bool  value) ;

constexpr void __cordl_internal_set_YPhrUJhemZJvtmovkklhoJOTkgUr(::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  value) ;

constexpr void __cordl_internal_set_bxpKgyzlyJprLPqLmqnBFHEtIcaP(bool  value) ;

constexpr void __cordl_internal_set_dpMEbjkjhtsUlbdskqgzgtjMKwJbb(float_t  value) ;

constexpr void __cordl_internal_set_lMBGfsFZseUSZQWjDpzeTiXWfEUXA(::Rewired::InputMapper_ConflictResponse  value) ;

constexpr void __cordl_internal_set_lcsVoWkBzCqHfRAxbodJvdgxydak(bool  value) ;

constexpr void __cordl_internal_set_rHmKQNmXjGLWzTeWAJmgWimmAVZv(bool  value) ;

constexpr void __cordl_internal_set_ugwJjATsbAskhWkeIpWEnfubiiQm(bool  value) ;

constexpr void __cordl_internal_set_ujwAldesPearzIkFzPlwRejZCHlm(bool  value) ;

/// @brief Method .ctor, addr 0x1819b91b0, size 0x180, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819b8fc0, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aOdMjQeQvhrIYjIfHZJeroswVvxI, addr 0x1819b9330, size 0x110, virtual false, abstract: false, final false
inline void aOdMjQeQvhrIYjIfHZJeroswVvxI() ;

/// @brief Method get_allowAxes, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_allowAxes() ;

/// @brief Method get_allowButtons, addr 0x180503b10, size 0x10, virtual false, abstract: false, final false
inline bool get_allowButtons() ;

/// @brief Method get_allowButtonsOnFullAxisAssignment, addr 0x180e837b0, size 0x60, virtual false, abstract: false, final false
inline bool get_allowButtonsOnFullAxisAssignment() ;

/// @brief Method get_allowKeyboardKeysWithModifiers, addr 0x1819b9440, size 0x10, virtual false, abstract: false, final false
inline bool get_allowKeyboardKeysWithModifiers() ;

/// @brief Method get_allowKeyboardModifierKeyAsPrimary, addr 0x1819b9450, size 0x10, virtual false, abstract: false, final false
inline bool get_allowKeyboardModifierKeyAsPrimary() ;

/// @brief Method get_checkForConflicts, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_checkForConflicts() ;

/// @brief Method get_checkForConflictsWithAllPlayers, addr 0x1814f8710, size 0x10, virtual false, abstract: false, final false
inline bool get_checkForConflictsWithAllPlayers() ;

/// @brief Method get_checkForConflictsWithPlayerIds, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_checkForConflictsWithPlayerIds() ;

/// @brief Method get_checkForConflictsWithSelf, addr 0x1805c5560, size 0x10, virtual false, abstract: false, final false
inline bool get_checkForConflictsWithSelf() ;

/// @brief Method get_checkForConflictsWithSystemPlayer, addr 0x1819b9460, size 0x10, virtual false, abstract: false, final false
inline bool get_checkForConflictsWithSystemPlayer() ;

/// @brief Method get_defaultActionWhenConflictFound, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_ConflictResponse get_defaultActionWhenConflictFound() ;

/// @brief Method get_holdDurationToMapKeyboardModifierKeyAsPrimary, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_holdDurationToMapKeyboardModifierKeyAsPrimary() ;

/// @brief Method get_ignoreMouseXAxis, addr 0x18049ec50, size 0x10, virtual false, abstract: false, final false
inline bool get_ignoreMouseXAxis() ;

/// @brief Method get_ignoreMouseYAxis, addr 0x18049ec40, size 0x10, virtual false, abstract: false, final false
inline bool get_ignoreMouseYAxis() ;

/// @brief Method get_isElementAllowedCallback, addr 0x1819b9470, size 0x80, virtual false, abstract: false, final false
inline ::System::Predicate_1<::Rewired::ControllerPollingInfo>* get_isElementAllowedCallback() ;

/// @brief Method get_timeout, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_timeout() ;

/// @brief Method set_allowAxes, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_allowAxes(bool  value) ;

/// @brief Method set_allowButtons, addr 0x180503b60, size 0x10, virtual false, abstract: false, final false
inline void set_allowButtons(bool  value) ;

/// @brief Method set_allowButtonsOnFullAxisAssignment, addr 0x181014340, size 0x2de0, virtual false, abstract: false, final false
inline void set_allowButtonsOnFullAxisAssignment(bool  value) ;

/// @brief Method set_allowKeyboardKeysWithModifiers, addr 0x1819b94f0, size 0x10, virtual false, abstract: false, final false
inline void set_allowKeyboardKeysWithModifiers(bool  value) ;

/// @brief Method set_allowKeyboardModifierKeyAsPrimary, addr 0x1819b9500, size 0x10, virtual false, abstract: false, final false
inline void set_allowKeyboardModifierKeyAsPrimary(bool  value) ;

/// @brief Method set_checkForConflicts, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_checkForConflicts(bool  value) ;

/// @brief Method set_checkForConflictsWithAllPlayers, addr 0x1818376c0, size 0x10, virtual false, abstract: false, final false
inline void set_checkForConflictsWithAllPlayers(bool  value) ;

/// @brief Method set_checkForConflictsWithPlayerIds, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_checkForConflictsWithPlayerIds(::ArrayW<int32_t>  value) ;

/// @brief Method set_checkForConflictsWithSelf, addr 0x1805c55e0, size 0x10, virtual false, abstract: false, final false
inline void set_checkForConflictsWithSelf(bool  value) ;

/// @brief Method set_checkForConflictsWithSystemPlayer, addr 0x1819b9510, size 0x10, virtual false, abstract: false, final false
inline void set_checkForConflictsWithSystemPlayer(bool  value) ;

/// @brief Method set_defaultActionWhenConflictFound, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_defaultActionWhenConflictFound(::Rewired::InputMapper_ConflictResponse  value) ;

/// @brief Method set_holdDurationToMapKeyboardModifierKeyAsPrimary, addr 0x1819b9520, size 0x20, virtual false, abstract: false, final false
inline void set_holdDurationToMapKeyboardModifierKeyAsPrimary(float_t  value) ;

/// @brief Method set_ignoreMouseXAxis, addr 0x18049ec70, size 0x10, virtual false, abstract: false, final false
inline void set_ignoreMouseXAxis(bool  value) ;

/// @brief Method set_ignoreMouseYAxis, addr 0x18049ec60, size 0x10, virtual false, abstract: false, final false
inline void set_ignoreMouseYAxis(bool  value) ;

/// @brief Method set_isElementAllowedCallback, addr 0x1819b9540, size 0x110, virtual false, abstract: false, final false
inline void set_isElementAllowedCallback(::System::Predicate_1<::Rewired::ControllerPollingInfo>*  value) ;

/// @brief Method set_timeout, addr 0x1819b9650, size 0x20, virtual false, abstract: false, final false
inline void set_timeout(float_t  value) ;

/// @brief Method thqGvKOZQsVeCFAMAeQDxghtYjoQ, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
inline  thqGvKOZQsVeCFAMAeQDxghtYjoQ(::StringW  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_Options() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_Options", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_Options(InputMapper_Options && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_Options", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_Options(InputMapper_Options const& ) = delete;

/// @brief Field ECEUulSPUcpAotnQaWfTOEWJhDAl offset 0xffffffff size 0x8
static constexpr ::ConstString  ECEUulSPUcpAotnQaWfTOEWJhDAl{u"isElementAllowed"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2099};

/// @brief Field bxpKgyzlyJprLPqLmqnBFHEtIcaP, offset: 0x10, size: 0x1, def value: None
 bool  ___bxpKgyzlyJprLPqLmqnBFHEtIcaP;

/// @brief Field ujwAldesPearzIkFzPlwRejZCHlm, offset: 0x11, size: 0x1, def value: None
 bool  ___ujwAldesPearzIkFzPlwRejZCHlm;

/// @brief Field OtHEBtpPgJxsqXWzBBnpdSctVvxU, offset: 0x12, size: 0x1, def value: None
 bool  ___OtHEBtpPgJxsqXWzBBnpdSctVvxU;

/// @brief Field dpMEbjkjhtsUlbdskqgzgtjMKwJbb, offset: 0x14, size: 0x4, def value: None
 float_t  ___dpMEbjkjhtsUlbdskqgzgtjMKwJbb;

/// @brief Field VKFOpPwhEkFDbYfYGAscKKxiqNIDb, offset: 0x18, size: 0x1, def value: None
 bool  ___VKFOpPwhEkFDbYfYGAscKKxiqNIDb;

/// @brief Field LdusojErgbWllycEKxWyyBAPMwgE, offset: 0x19, size: 0x1, def value: None
 bool  ___LdusojErgbWllycEKxWyyBAPMwgE;

/// @brief Field CHfCPojorPEmKSdQWLYjGNFKxCMB, offset: 0x1a, size: 0x1, def value: None
 bool  ___CHfCPojorPEmKSdQWLYjGNFKxCMB;

/// @brief Field ugwJjATsbAskhWkeIpWEnfubiiQm, offset: 0x1b, size: 0x1, def value: None
 bool  ___ugwJjATsbAskhWkeIpWEnfubiiQm;

/// @brief Field LIfZRMiArInpDYtntFbgsXRnbIBu, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___LIfZRMiArInpDYtntFbgsXRnbIBu;

/// @brief Field lMBGfsFZseUSZQWjDpzeTiXWfEUXA, offset: 0x28, size: 0x4, def value: None
 ::Rewired::InputMapper_ConflictResponse  ___lMBGfsFZseUSZQWjDpzeTiXWfEUXA;

/// @brief Field lcsVoWkBzCqHfRAxbodJvdgxydak, offset: 0x2c, size: 0x1, def value: None
 bool  ___lcsVoWkBzCqHfRAxbodJvdgxydak;

/// @brief Field rHmKQNmXjGLWzTeWAJmgWimmAVZv, offset: 0x2d, size: 0x1, def value: None
 bool  ___rHmKQNmXjGLWzTeWAJmgWimmAVZv;

/// @brief Field USFDyfswlodIurpooUJGwnRfVCld, offset: 0x2e, size: 0x1, def value: None
 bool  ___USFDyfswlodIurpooUJGwnRfVCld;

/// @brief Field BvOeOQfyLCHIQhSsMFVidAAahtadB, offset: 0x2f, size: 0x1, def value: None
 bool  ___BvOeOQfyLCHIQhSsMFVidAAahtadB;

/// @brief Field LBhUhLakRaWRptYmbFdIwnAxuwTs, offset: 0x30, size: 0x4, def value: None
 float_t  ___LBhUhLakRaWRptYmbFdIwnAxuwTs;

/// @brief Field YPhrUJhemZJvtmovkklhoJOTkgUr, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Rewired::Utils::SafeDelegate*>*  ___YPhrUJhemZJvtmovkklhoJOTkgUr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper_Options, ___bxpKgyzlyJprLPqLmqnBFHEtIcaP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___ujwAldesPearzIkFzPlwRejZCHlm) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___OtHEBtpPgJxsqXWzBBnpdSctVvxU) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___dpMEbjkjhtsUlbdskqgzgtjMKwJbb) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___VKFOpPwhEkFDbYfYGAscKKxiqNIDb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___LdusojErgbWllycEKxWyyBAPMwgE) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___CHfCPojorPEmKSdQWLYjGNFKxCMB) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___ugwJjATsbAskhWkeIpWEnfubiiQm) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___LIfZRMiArInpDYtntFbgsXRnbIBu) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___lMBGfsFZseUSZQWjDpzeTiXWfEUXA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___lcsVoWkBzCqHfRAxbodJvdgxydak) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___rHmKQNmXjGLWzTeWAJmgWimmAVZv) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___USFDyfswlodIurpooUJGwnRfVCld) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___BvOeOQfyLCHIQhSsMFVidAAahtadB) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___LBhUhLakRaWRptYmbFdIwnAxuwTs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper_Options, ___YPhrUJhemZJvtmovkklhoJOTkgUr) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper_Options) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper/dcPqrObOSVnpaMgEsnbkRwjAdAgC
class CORDL_TYPE InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*  __9;

/// @brief Field <>9__54_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_0, put=setStaticF___9__54_0)) ::System::Action_1<::System::Exception*>*  __9__54_0;

/// @brief Field <>9__54_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_1, put=setStaticF___9__54_1)) ::System::Action_1<::System::Exception*>*  __9__54_1;

/// @brief Field <>9__54_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_2, put=setStaticF___9__54_2)) ::System::Action_1<::System::Exception*>*  __9__54_2;

/// @brief Field <>9__54_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_3, put=setStaticF___9__54_3)) ::System::Action_1<::System::Exception*>*  __9__54_3;

/// @brief Field <>9__54_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_4, put=setStaticF___9__54_4)) ::System::Action_1<::System::Exception*>*  __9__54_4;

/// @brief Field <>9__54_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_5, put=setStaticF___9__54_5)) ::System::Action_1<::System::Exception*>*  __9__54_5;

/// @brief Field <>9__54_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_6, put=setStaticF___9__54_6)) ::System::Action_1<::System::Exception*>*  __9__54_6;

/// @brief Method CXIFXQxegglprMuARzjMBkJKYJHJ, addr 0x1819c2620, size 0x40, virtual false, abstract: false, final false
inline void CXIFXQxegglprMuARzjMBkJKYJHJ(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GtquEEDXuiuVsqJBrgdoouCccxVF, addr 0x1819c2660, size 0x40, virtual false, abstract: false, final false
inline void GtquEEDXuiuVsqJBrgdoouCccxVF(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NAfWdiSQdWKfARKavQDNNhtJrfZO, addr 0x1819c26a0, size 0x40, virtual false, abstract: false, final false
inline void NAfWdiSQdWKfARKavQDNNhtJrfZO(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC* New_ctor() ;

/// @brief Method RnLGwfTBRmGxDGzMxvMQRAujJIHYA, addr 0x1819c26e0, size 0x40, virtual false, abstract: false, final false
inline void RnLGwfTBRmGxDGzMxvMQRAujJIHYA(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC* getStaticF___9() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__54_0() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__54_1() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__54_2() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__54_3() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__54_4() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__54_5() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__54_6() ;

/// @brief Method lLWiyoJHlVOzJASKaDwcNcKfmRGS, addr 0x1819c2760, size 0x40, virtual false, abstract: false, final false
inline void lLWiyoJHlVOzJASKaDwcNcKfmRGS(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method lxoPWDjWmBkQuWfnaBKYIGZQkMdd, addr 0x1819c27a0, size 0x40, virtual false, abstract: false, final false
inline void lxoPWDjWmBkQuWfnaBKYIGZQkMdd(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method mENoIjXfsEXWiBcohVURoOdPmzAf, addr 0x1819c27e0, size 0x40, virtual false, abstract: false, final false
inline void mENoIjXfsEXWiBcohVURoOdPmzAf(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF___9(::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC*  value) ;

static inline void setStaticF___9__54_0(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF___9__54_1(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF___9__54_2(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF___9__54_3(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF___9__54_4(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF___9__54_5(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF___9__54_6(::System::Action_1<::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC(InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC(InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.InputMapper
class CORDL_TYPE InputMapper : public ::System::Object {
public:
// Declarations
using CanceledEventData = ::Rewired::InputMapper_CanceledEventData;

using ConflictFoundEventData = ::Rewired::InputMapper_ConflictFoundEventData;

using ConflictResponse = ::Rewired::InputMapper_ConflictResponse;

using Context = ::Rewired::InputMapper_Context;

using ErrorEventData = ::Rewired::InputMapper_ErrorEventData;

using EventData = ::Rewired::InputMapper_EventData;

using InputMappedEventData = ::Rewired::InputMapper_InputMappedEventData;

using Options = ::Rewired::InputMapper_Options;

using StartedEventData = ::Rewired::InputMapper_StartedEventData;

using Status = ::Rewired::InputMapper_Status;

using StoppedEventData = ::Rewired::InputMapper_StoppedEventData;

using TimedOutEventData = ::Rewired::InputMapper_TimedOutEventData;

using YTtbnjeYgiIbVejXSImVQuIVJTwg = ::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg;

using dcPqrObOSVnpaMgEsnbkRwjAdAgC = ::Rewired::InputMapper_dcPqrObOSVnpaMgEsnbkRwjAdAgC;

using xabAKgmsLsumCneGRTvlrjhOgfTs = ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs;

 __declspec(property(get=gGTdilRKJxMoRFqYbbSBeOuQeJTlA)) int32_t  ANwttiwVkefkLxavDGTVygNKDxXE;

/// @brief Field FRqxfXAzStOQrxLPfwrfROiwDMRFA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FRqxfXAzStOQrxLPfwrfROiwDMRFA, put=__cordl_internal_set_FRqxfXAzStOQrxLPfwrfROiwDMRFA)) ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  FRqxfXAzStOQrxLPfwrfROiwDMRFA;

/// @brief Field OTThzSdTAGaJlmgRLujSoMPeMZtb, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OTThzSdTAGaJlmgRLujSoMPeMZtb, put=setStaticF_OTThzSdTAGaJlmgRLujSoMPeMZtb)) int32_t  OTThzSdTAGaJlmgRLujSoMPeMZtb;

/// @brief Field RPzEOKzBvxzAKdpCQMAYcGfsbEGA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RPzEOKzBvxzAKdpCQMAYcGfsbEGA, put=__cordl_internal_set_RPzEOKzBvxzAKdpCQMAYcGfsbEGA)) ::Rewired::InputMapper_Options*  RPzEOKzBvxzAKdpCQMAYcGfsbEGA;

/// @brief Field cPPfORIqVDoHpQsjEAHdjwfgiFUeB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cPPfORIqVDoHpQsjEAHdjwfgiFUeB, put=setStaticF_cPPfORIqVDoHpQsjEAHdjwfgiFUeB)) ::Rewired::InputMapper*  cPPfORIqVDoHpQsjEAHdjwfgiFUeB;

/// @brief Field dCybEuFhpPQLyzEIHepXzabpTZxr, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_dCybEuFhpPQLyzEIHepXzabpTZxr, put=__cordl_internal_set_dCybEuFhpPQLyzEIHepXzabpTZxr)) bool  dCybEuFhpPQLyzEIHepXzabpTZxr;

 __declspec(property(get=get_mappingContext)) ::Rewired::InputMapper_Context*  mappingContext;

 __declspec(property(get=get_options, put=set_options)) ::Rewired::InputMapper_Options*  options;

/// @brief Field pHQMtVDAbzDepjkEioPhTWAOqGno, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_pHQMtVDAbzDepjkEioPhTWAOqGno, put=__cordl_internal_set_pHQMtVDAbzDepjkEioPhTWAOqGno)) int32_t  pHQMtVDAbzDepjkEioPhTWAOqGno;

 __declspec(property(get=get_status)) ::Rewired::InputMapper_Status  status;

 __declspec(property(get=get_timeRemaining)) float_t  timeRemaining;

/// @brief Field yTvbBLkpPUcqoZRhWeaKgfChxhOkA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_yTvbBLkpPUcqoZRhWeaKgfChxhOkA, put=__cordl_internal_set_yTvbBLkpPUcqoZRhWeaKgfChxhOkA)) ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  yTvbBLkpPUcqoZRhWeaKgfChxhOkA;

/// @brief Method Clear, addr 0x1819a5930, size 0xf0, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Rewired::InputMapper* New_ctor() ;

static inline ::Rewired::InputMapper* New_ctor(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RemoveAllEventListeners, addr 0x1819a5a20, size 0xa0, virtual false, abstract: false, final false
inline void RemoveAllEventListeners() ;

/// @brief Method RemoveEventListeners, addr 0x1819a5ac0, size 0xb0, virtual false, abstract: false, final false
inline void RemoveEventListeners(::System::Object*  listenerOrParent) ;

/// @brief Method Start, addr 0x1819a5b70, size 0x60, virtual false, abstract: false, final false
inline bool Start(::Rewired::InputMapper_Context*  mappingContext) ;

/// @brief Method Stop, addr 0x1819a5bd0, size 0x40, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method ZakupbELCJGTGUIKTrnVSjuHtNML, addr 0x1819a5c10, size 0x130, virtual false, abstract: false, final false
inline bool ZakupbELCJGTGUIKTrnVSjuHtNML(::Rewired::InputMapper_Context*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputMapper_Options*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs* const& __cordl_internal_get_FRqxfXAzStOQrxLPfwrfROiwDMRFA() const;

constexpr ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*& __cordl_internal_get_FRqxfXAzStOQrxLPfwrfROiwDMRFA() ;

constexpr ::Rewired::InputMapper_Options* const& __cordl_internal_get_RPzEOKzBvxzAKdpCQMAYcGfsbEGA() const;

constexpr ::Rewired::InputMapper_Options*& __cordl_internal_get_RPzEOKzBvxzAKdpCQMAYcGfsbEGA() ;

constexpr bool const& __cordl_internal_get_dCybEuFhpPQLyzEIHepXzabpTZxr() const;

constexpr bool& __cordl_internal_get_dCybEuFhpPQLyzEIHepXzabpTZxr() ;

constexpr int32_t const& __cordl_internal_get_pHQMtVDAbzDepjkEioPhTWAOqGno() const;

constexpr int32_t& __cordl_internal_get_pHQMtVDAbzDepjkEioPhTWAOqGno() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>* const& __cordl_internal_get_yTvbBLkpPUcqoZRhWeaKgfChxhOkA() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*& __cordl_internal_get_yTvbBLkpPUcqoZRhWeaKgfChxhOkA() ;

constexpr void __cordl_internal_set_FRqxfXAzStOQrxLPfwrfROiwDMRFA(::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  value) ;

constexpr void __cordl_internal_set_RPzEOKzBvxzAKdpCQMAYcGfsbEGA(::Rewired::InputMapper_Options*  value) ;

constexpr void __cordl_internal_set_dCybEuFhpPQLyzEIHepXzabpTZxr(bool  value) ;

constexpr void __cordl_internal_set_pHQMtVDAbzDepjkEioPhTWAOqGno(int32_t  value) ;

constexpr void __cordl_internal_set_yTvbBLkpPUcqoZRhWeaKgfChxhOkA(::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  value) ;

/// @brief Method .ctor, addr 0x1819a6380, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a5d40, size 0x640, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method add_CanceledEvent, addr 0x1819a63d0, size 0x90, virtual false, abstract: false, final false
inline void add_CanceledEvent(::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*  value) ;

/// @brief Method add_ConflictFoundEvent, addr 0x1819a6460, size 0x90, virtual false, abstract: false, final false
inline void add_ConflictFoundEvent(::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*  value) ;

/// @brief Method add_ErrorEvent, addr 0x1819a64f0, size 0x90, virtual false, abstract: false, final false
inline void add_ErrorEvent(::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*  value) ;

/// @brief Method add_InputMappedEvent, addr 0x1819a6580, size 0x90, virtual false, abstract: false, final false
inline void add_InputMappedEvent(::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*  value) ;

/// @brief Method add_StartedEvent, addr 0x1819a6610, size 0x90, virtual false, abstract: false, final false
inline void add_StartedEvent(::System::Action_1<::Rewired::InputMapper_StartedEventData*>*  value) ;

/// @brief Method add_StoppedEvent, addr 0x1819a66a0, size 0x90, virtual false, abstract: false, final false
inline void add_StoppedEvent(::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*  value) ;

/// @brief Method add_TimedOutEvent, addr 0x1819a6730, size 0x90, virtual false, abstract: false, final false
inline void add_TimedOutEvent(::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*  value) ;

/// @brief Method bsBXlINYCexEFIFnJWLzMTyvqihr, addr 0x1819a67c0, size 0x40, virtual false, abstract: false, final false
static inline int32_t bsBXlINYCexEFIFnJWLzMTyvqihr() ;

/// @brief Method gGTdilRKJxMoRFqYbbSBeOuQeJTlA, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t gGTdilRKJxMoRFqYbbSBeOuQeJTlA() ;

static inline int32_t getStaticF_OTThzSdTAGaJlmgRLujSoMPeMZtb() ;

static inline ::Rewired::InputMapper* getStaticF_cPPfORIqVDoHpQsjEAHdjwfgiFUeB() ;

/// @brief Method get_Default, addr 0x1819a6800, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::InputMapper* get_Default() ;

/// @brief Method get_mappingContext, addr 0x1819a6870, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Context* get_mappingContext() ;

/// @brief Method get_options, addr 0x1819a68b0, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Options* get_options() ;

/// @brief Method get_status, addr 0x1819a6950, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::InputMapper_Status get_status() ;

/// @brief Method get_timeRemaining, addr 0x1819a6970, size 0x20, virtual false, abstract: false, final false
inline float_t get_timeRemaining() ;

/// @brief Method hyEBOpfNboNMoSqzGspOBzUldnGrA, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void hyEBOpfNboNMoSqzGspOBzUldnGrA() ;

/// @brief Method remove_CanceledEvent, addr 0x1819a6990, size 0x90, virtual false, abstract: false, final false
inline void remove_CanceledEvent(::System::Action_1<::Rewired::InputMapper_CanceledEventData*>*  value) ;

/// @brief Method remove_ConflictFoundEvent, addr 0x1819a6a20, size 0x90, virtual false, abstract: false, final false
inline void remove_ConflictFoundEvent(::System::Action_1<::Rewired::InputMapper_ConflictFoundEventData*>*  value) ;

/// @brief Method remove_ErrorEvent, addr 0x1819a6ab0, size 0x90, virtual false, abstract: false, final false
inline void remove_ErrorEvent(::System::Action_1<::Rewired::InputMapper_ErrorEventData*>*  value) ;

/// @brief Method remove_InputMappedEvent, addr 0x1819a6b40, size 0x90, virtual false, abstract: false, final false
inline void remove_InputMappedEvent(::System::Action_1<::Rewired::InputMapper_InputMappedEventData*>*  value) ;

/// @brief Method remove_StartedEvent, addr 0x1819a6bd0, size 0x90, virtual false, abstract: false, final false
inline void remove_StartedEvent(::System::Action_1<::Rewired::InputMapper_StartedEventData*>*  value) ;

/// @brief Method remove_StoppedEvent, addr 0x1819a6c60, size 0x90, virtual false, abstract: false, final false
inline void remove_StoppedEvent(::System::Action_1<::Rewired::InputMapper_StoppedEventData*>*  value) ;

/// @brief Method remove_TimedOutEvent, addr 0x1819a6cf0, size 0x90, virtual false, abstract: false, final false
inline void remove_TimedOutEvent(::System::Action_1<::Rewired::InputMapper_TimedOutEventData*>*  value) ;

static inline void setStaticF_OTThzSdTAGaJlmgRLujSoMPeMZtb(int32_t  value) ;

static inline void setStaticF_cPPfORIqVDoHpQsjEAHdjwfgiFUeB(::Rewired::InputMapper*  value) ;

/// @brief Method set_options, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_options(::Rewired::InputMapper_Options*  value) ;

/// @brief Method wGxyNGZalyfNREIVWJwOZpksqKLn, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void wGxyNGZalyfNREIVWJwOZpksqKLn(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputMapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputMapper(InputMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputMapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputMapper(InputMapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2101};

/// @brief Field pHQMtVDAbzDepjkEioPhTWAOqGno, offset: 0x10, size: 0x4, def value: None
 int32_t  ___pHQMtVDAbzDepjkEioPhTWAOqGno;

/// @brief Field dCybEuFhpPQLyzEIHepXzabpTZxr, offset: 0x14, size: 0x1, def value: None
 bool  ___dCybEuFhpPQLyzEIHepXzabpTZxr;

/// @brief Field FRqxfXAzStOQrxLPfwrfROiwDMRFA, offset: 0x18, size: 0x8, def value: None
 ::Rewired::InputMapper_xabAKgmsLsumCneGRTvlrjhOgfTs*  ___FRqxfXAzStOQrxLPfwrfROiwDMRFA;

/// @brief Field RPzEOKzBvxzAKdpCQMAYcGfsbEGA, offset: 0x20, size: 0x8, def value: None
 ::Rewired::InputMapper_Options*  ___RPzEOKzBvxzAKdpCQMAYcGfsbEGA;

/// @brief Field yTvbBLkpPUcqoZRhWeaKgfChxhOkA, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Rewired::InputMapper_YTtbnjeYgiIbVejXSImVQuIVJTwg,::Rewired::Utils::SafeDelegate*>*  ___yTvbBLkpPUcqoZRhWeaKgfChxhOkA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputMapper, ___pHQMtVDAbzDepjkEioPhTWAOqGno) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper, ___dCybEuFhpPQLyzEIHepXzabpTZxr) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper, ___FRqxfXAzStOQrxLPfwrfROiwDMRFA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper, ___RPzEOKzBvxzAKdpCQMAYcGfsbEGA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputMapper, ___yTvbBLkpPUcqoZRhWeaKgfChxhOkA) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputMapper) == 0x30, "Size mismatch!");

} // namespace end def Rewired
