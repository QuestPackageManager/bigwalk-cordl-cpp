#pragma once
// IWYU pragma private; include "Rewired/ThreadSafeUnityInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadSafeUnityInput)
namespace Rewired {
class ThreadSafeUnityInput_Keyboard;
}
namespace Rewired {
class ThreadSafeUnityInput_Mouse;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired {
class ThreadSafeUnityInput;
}
namespace Rewired {
class ThreadSafeUnityInput_Keyboard;
}
namespace Rewired {
class ThreadSafeUnityInput_Mouse;
}
// Write type traits
MARK_REF_T(::Rewired::ThreadSafeUnityInput*);
MARK_REF_T(::Rewired::ThreadSafeUnityInput_Keyboard*);
MARK_REF_T(::Rewired::ThreadSafeUnityInput_Mouse*);
DEFINE_IL2CPP_CLASS(::Rewired::ThreadSafeUnityInput*, "Rewired", "ThreadSafeUnityInput");
DEFINE_IL2CPP_CLASS(::Rewired::ThreadSafeUnityInput_Keyboard*, "Rewired", "ThreadSafeUnityInput/Keyboard");
DEFINE_IL2CPP_CLASS(::Rewired::ThreadSafeUnityInput_Mouse*, "Rewired", "ThreadSafeUnityInput/Mouse");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ThreadSafeUnityInput/Keyboard
class CORDL_TYPE ThreadSafeUnityInput_Keyboard : public ::System::Object {
public:
// Declarations
/// @brief Field EfoSeScEcKGcVTobynjsHhrNIkQl, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_EfoSeScEcKGcVTobynjsHhrNIkQl, put=__cordl_internal_set_EfoSeScEcKGcVTobynjsHhrNIkQl)) bool  EfoSeScEcKGcVTobynjsHhrNIkQl;

/// @brief Field GUaLtgLKouYVlPFlJnHINfJLjAZBA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GUaLtgLKouYVlPFlJnHINfJLjAZBA, put=__cordl_internal_set_GUaLtgLKouYVlPFlJnHINfJLjAZBA)) ::ArrayW<bool>  GUaLtgLKouYVlPFlJnHINfJLjAZBA;

/// @brief Field JRobmydNjkoIEEFhziUmFMxHkvZY, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_JRobmydNjkoIEEFhziUmFMxHkvZY, put=__cordl_internal_set_JRobmydNjkoIEEFhziUmFMxHkvZY)) bool  JRobmydNjkoIEEFhziUmFMxHkvZY;

/// @brief Field UmkDBdkKYvlSNPKDTMIWEPTtBesBA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_UmkDBdkKYvlSNPKDTMIWEPTtBesBA, put=__cordl_internal_set_UmkDBdkKYvlSNPKDTMIWEPTtBesBA)) int32_t  UmkDBdkKYvlSNPKDTMIWEPTtBesBA;

/// @brief Field bfPwtYzlfBFJxPeOSXpORJblBHQl, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_bfPwtYzlfBFJxPeOSXpORJblBHQl, put=__cordl_internal_set_bfPwtYzlfBFJxPeOSXpORJblBHQl)) bool  bfPwtYzlfBFJxPeOSXpORJblBHQl;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_keyCount)) int32_t  keyCount;

/// @brief Field keyValueIndex_DownArrow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_keyValueIndex_DownArrow, put=setStaticF_keyValueIndex_DownArrow)) int32_t  keyValueIndex_DownArrow;

/// @brief Field keyValueIndex_Escape, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_keyValueIndex_Escape, put=setStaticF_keyValueIndex_Escape)) int32_t  keyValueIndex_Escape;

/// @brief Field keyValueIndex_F2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_keyValueIndex_F2, put=setStaticF_keyValueIndex_F2)) int32_t  keyValueIndex_F2;

/// @brief Field keyValueIndex_LeftArrow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_keyValueIndex_LeftArrow, put=setStaticF_keyValueIndex_LeftArrow)) int32_t  keyValueIndex_LeftArrow;

/// @brief Field keyValueIndex_Menu, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_keyValueIndex_Menu, put=setStaticF_keyValueIndex_Menu)) int32_t  keyValueIndex_Menu;

/// @brief Field keyValueIndex_RightArrow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_keyValueIndex_RightArrow, put=setStaticF_keyValueIndex_RightArrow)) int32_t  keyValueIndex_RightArrow;

/// @brief Field keyValueIndex_UpArrow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_keyValueIndex_UpArrow, put=setStaticF_keyValueIndex_UpArrow)) int32_t  keyValueIndex_UpArrow;

 __declspec(property(get=get_monitoring)) bool  monitoring;

/// @brief Field nFjzBinELIERSALlZTbXNESkITwL, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nFjzBinELIERSALlZTbXNESkITwL, put=setStaticF_nFjzBinELIERSALlZTbXNESkITwL)) ::ArrayW<int32_t>  nFjzBinELIERSALlZTbXNESkITwL;

/// @brief Field vIeYSgvgcnMaCRRZDpxQNhPAwipR, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_vIeYSgvgcnMaCRRZDpxQNhPAwipR, put=__cordl_internal_set_vIeYSgvgcnMaCRRZDpxQNhPAwipR)) ::ArrayW<int32_t>  vIeYSgvgcnMaCRRZDpxQNhPAwipR;

/// @brief Field zRZDVDLvxxBjfFPdQlsKEhraIBUNA, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_zRZDVDLvxxBjfFPdQlsKEhraIBUNA, put=__cordl_internal_set_zRZDVDLvxxBjfFPdQlsKEhraIBUNA)) int32_t  zRZDVDLvxxBjfFPdQlsKEhraIBUNA;

/// @brief Method Clear, addr 0x181844790, size 0xb0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetKey, addr 0x181844880, size 0x60, virtual false, abstract: false, final false
inline bool GetKey(::UnityEngine::KeyCode  keyCode) ;

/// @brief Method GetKeyValues, addr 0x181844840, size 0x40, virtual false, abstract: false, final false
inline void GetKeyValues(::ArrayW<bool>  values) ;

/// @brief Method ILzEOjaOgPioufXCvSlvTnUjRHQh, addr 0x1818448e0, size 0x10, virtual false, abstract: false, final false
inline void ILzEOjaOgPioufXCvSlvTnUjRHQh() ;

/// @brief Method Initialize, addr 0x1818448f0, size 0x50, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Monitor, addr 0x181844940, size 0x60, virtual false, abstract: false, final false
inline void Monitor(bool  state) ;

static inline ::Rewired::ThreadSafeUnityInput_Keyboard* New_ctor() ;

/// @brief Method PostInitialize, addr 0x1818449a0, size 0x10, virtual false, abstract: false, final false
inline void PostInitialize() ;

/// @brief Method UmuDeQErnhSgVmDaNQEcVXyXyzMtA, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void UmuDeQErnhSgVmDaNQEcVXyXyzMtA() ;

/// @brief Method Update, addr 0x1818449b0, size 0x270, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_EfoSeScEcKGcVTobynjsHhrNIkQl() const;

constexpr bool& __cordl_internal_get_EfoSeScEcKGcVTobynjsHhrNIkQl() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_GUaLtgLKouYVlPFlJnHINfJLjAZBA() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_GUaLtgLKouYVlPFlJnHINfJLjAZBA() ;

constexpr bool const& __cordl_internal_get_JRobmydNjkoIEEFhziUmFMxHkvZY() const;

constexpr bool& __cordl_internal_get_JRobmydNjkoIEEFhziUmFMxHkvZY() ;

constexpr int32_t const& __cordl_internal_get_UmkDBdkKYvlSNPKDTMIWEPTtBesBA() const;

constexpr int32_t& __cordl_internal_get_UmkDBdkKYvlSNPKDTMIWEPTtBesBA() ;

constexpr bool const& __cordl_internal_get_bfPwtYzlfBFJxPeOSXpORJblBHQl() const;

constexpr bool& __cordl_internal_get_bfPwtYzlfBFJxPeOSXpORJblBHQl() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_vIeYSgvgcnMaCRRZDpxQNhPAwipR() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_vIeYSgvgcnMaCRRZDpxQNhPAwipR() ;

constexpr int32_t const& __cordl_internal_get_zRZDVDLvxxBjfFPdQlsKEhraIBUNA() const;

constexpr int32_t& __cordl_internal_get_zRZDVDLvxxBjfFPdQlsKEhraIBUNA() ;

constexpr void __cordl_internal_set_EfoSeScEcKGcVTobynjsHhrNIkQl(bool  value) ;

constexpr void __cordl_internal_set_GUaLtgLKouYVlPFlJnHINfJLjAZBA(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_JRobmydNjkoIEEFhziUmFMxHkvZY(bool  value) ;

constexpr void __cordl_internal_set_UmkDBdkKYvlSNPKDTMIWEPTtBesBA(int32_t  value) ;

constexpr void __cordl_internal_set_bfPwtYzlfBFJxPeOSXpORJblBHQl(bool  value) ;

constexpr void __cordl_internal_set_vIeYSgvgcnMaCRRZDpxQNhPAwipR(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_zRZDVDLvxxBjfFPdQlsKEhraIBUNA(int32_t  value) ;

/// @brief Method .ctor, addr 0x181844dd0, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method cEsfEzjLLhHvtObwhZqwcUGxAmzY, addr 0x181844ee0, size 0x20, virtual false, abstract: false, final false
inline void cEsfEzjLLhHvtObwhZqwcUGxAmzY() ;

static inline int32_t getStaticF_keyValueIndex_DownArrow() ;

static inline int32_t getStaticF_keyValueIndex_Escape() ;

static inline int32_t getStaticF_keyValueIndex_F2() ;

static inline int32_t getStaticF_keyValueIndex_LeftArrow() ;

static inline int32_t getStaticF_keyValueIndex_Menu() ;

static inline int32_t getStaticF_keyValueIndex_RightArrow() ;

static inline int32_t getStaticF_keyValueIndex_UpArrow() ;

static inline ::ArrayW<int32_t> getStaticF_nFjzBinELIERSALlZTbXNESkITwL() ;

/// @brief Method get_enabled, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_keyCount, addr 0x180720980, size 0x10, virtual false, abstract: false, final false
inline int32_t get_keyCount() ;

/// @brief Method get_monitoring, addr 0x181844f00, size 0x10, virtual false, abstract: false, final false
inline bool get_monitoring() ;

/// @brief Method lGsdzbSMBfbCGfLNvKMNkOltZOSE, addr 0x181844f10, size 0x20, virtual false, abstract: false, final false
inline void lGsdzbSMBfbCGfLNvKMNkOltZOSE() ;

/// @brief Method sdAaKOGRtojMrIjyPhVTNpfJOnmiA, addr 0x181844f10, size 0x20, virtual false, abstract: false, final false
inline void sdAaKOGRtojMrIjyPhVTNpfJOnmiA() ;

static inline void setStaticF_keyValueIndex_DownArrow(int32_t  value) ;

static inline void setStaticF_keyValueIndex_Escape(int32_t  value) ;

static inline void setStaticF_keyValueIndex_F2(int32_t  value) ;

static inline void setStaticF_keyValueIndex_LeftArrow(int32_t  value) ;

static inline void setStaticF_keyValueIndex_Menu(int32_t  value) ;

static inline void setStaticF_keyValueIndex_RightArrow(int32_t  value) ;

static inline void setStaticF_keyValueIndex_UpArrow(int32_t  value) ;

static inline void setStaticF_nFjzBinELIERSALlZTbXNESkITwL(::ArrayW<int32_t>  value) ;

/// @brief Method set_enabled, addr 0x181844f30, size 0xc0, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method zPyffqUEmLVRlWCaKAUNBoMrktyu, addr 0x181844ff0, size 0x20, virtual false, abstract: false, final false
inline void zPyffqUEmLVRlWCaKAUNBoMrktyu() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadSafeUnityInput_Keyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeUnityInput_Keyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeUnityInput_Keyboard(ThreadSafeUnityInput_Keyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeUnityInput_Keyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeUnityInput_Keyboard(ThreadSafeUnityInput_Keyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1807};

/// @brief Field rPLoSDnJsBlPOdwMPRjFsBGMgOMQ offset 0xffffffff size 0x4
static constexpr int32_t  rPLoSDnJsBlPOdwMPRjFsBGMgOMQ{static_cast<int32_t>(0x84)};

/// @brief Field UmkDBdkKYvlSNPKDTMIWEPTtBesBA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___UmkDBdkKYvlSNPKDTMIWEPTtBesBA;

/// @brief Field vIeYSgvgcnMaCRRZDpxQNhPAwipR, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___vIeYSgvgcnMaCRRZDpxQNhPAwipR;

/// @brief Field GUaLtgLKouYVlPFlJnHINfJLjAZBA, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool>  ___GUaLtgLKouYVlPFlJnHINfJLjAZBA;

/// @brief Field EfoSeScEcKGcVTobynjsHhrNIkQl, offset: 0x28, size: 0x1, def value: None
 bool  ___EfoSeScEcKGcVTobynjsHhrNIkQl;

/// @brief Field zRZDVDLvxxBjfFPdQlsKEhraIBUNA, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___zRZDVDLvxxBjfFPdQlsKEhraIBUNA;

/// @brief Field JRobmydNjkoIEEFhziUmFMxHkvZY, offset: 0x30, size: 0x1, def value: None
 bool  ___JRobmydNjkoIEEFhziUmFMxHkvZY;

/// @brief Field bfPwtYzlfBFJxPeOSXpORJblBHQl, offset: 0x31, size: 0x1, def value: None
 bool  ___bfPwtYzlfBFJxPeOSXpORJblBHQl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Keyboard, ___UmkDBdkKYvlSNPKDTMIWEPTtBesBA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Keyboard, ___vIeYSgvgcnMaCRRZDpxQNhPAwipR) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Keyboard, ___GUaLtgLKouYVlPFlJnHINfJLjAZBA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Keyboard, ___EfoSeScEcKGcVTobynjsHhrNIkQl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Keyboard, ___zRZDVDLvxxBjfFPdQlsKEhraIBUNA) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Keyboard, ___JRobmydNjkoIEEFhziUmFMxHkvZY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Keyboard, ___bfPwtYzlfBFJxPeOSXpORJblBHQl) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Rewired::ThreadSafeUnityInput_Keyboard) == 0x38, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object, UnityEngine.Vector3
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ThreadSafeUnityInput/Mouse
class CORDL_TYPE ThreadSafeUnityInput_Mouse : public ::System::Object {
public:
// Declarations
/// @brief Field BSVHttslunbDrJUmxJqadyPDxvGIA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BSVHttslunbDrJUmxJqadyPDxvGIA, put=__cordl_internal_set_BSVHttslunbDrJUmxJqadyPDxvGIA)) ::ArrayW<float_t>  BSVHttslunbDrJUmxJqadyPDxvGIA;

/// @brief Field ClsUvGSqeyLpkGvUOrZRCyXXEgOO, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClsUvGSqeyLpkGvUOrZRCyXXEgOO, put=__cordl_internal_set_ClsUvGSqeyLpkGvUOrZRCyXXEgOO)) bool  ClsUvGSqeyLpkGvUOrZRCyXXEgOO;

/// @brief Field JRyKFWXmdMHrHEmfQNkQyteAzAVC, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_JRyKFWXmdMHrHEmfQNkQyteAzAVC, put=__cordl_internal_set_JRyKFWXmdMHrHEmfQNkQyteAzAVC)) bool  JRyKFWXmdMHrHEmfQNkQyteAzAVC;

/// @brief Field LayGRoCcxIZpoZjkPipwgAOHcMGY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LayGRoCcxIZpoZjkPipwgAOHcMGY, put=__cordl_internal_set_LayGRoCcxIZpoZjkPipwgAOHcMGY)) int32_t  LayGRoCcxIZpoZjkPipwgAOHcMGY;

/// @brief Field YviRighcNyenPPwJvdBbgPstnUqbA, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_YviRighcNyenPPwJvdBbgPstnUqbA, put=__cordl_internal_set_YviRighcNyenPPwJvdBbgPstnUqbA)) ::UnityEngine::Vector3  YviRighcNyenPPwJvdBbgPstnUqbA;

 __declspec(property(get=get_monitoring)) bool  monitoring;

 __declspec(property(get=get_mousePosition)) ::UnityEngine::Vector3  mousePosition;

 __declspec(property(get=get_mousePresent)) bool  mousePresent;

/// @brief Field utZGqzeOkPShxrVuCTylBRmEzZNcA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_utZGqzeOkPShxrVuCTylBRmEzZNcA, put=__cordl_internal_set_utZGqzeOkPShxrVuCTylBRmEzZNcA)) ::ArrayW<bool>  utZGqzeOkPShxrVuCTylBRmEzZNcA;

/// @brief Method DcYesZtKVzeYhyURaqRsmJefyccn, addr 0x181845730, size 0x20, virtual false, abstract: false, final false
inline void DcYesZtKVzeYhyURaqRsmJefyccn() ;

/// @brief Method GetAxisRaw, addr 0x181845790, size 0x50, virtual false, abstract: false, final false
inline float_t GetAxisRaw(int32_t  index) ;

/// @brief Method GetAxisRawValues, addr 0x181845750, size 0x40, virtual false, abstract: false, final false
inline void GetAxisRawValues(::ArrayW<float_t>  axes) ;

/// @brief Method GetButton, addr 0x181845820, size 0x50, virtual false, abstract: false, final false
inline bool GetButton(int32_t  index) ;

/// @brief Method GetButtonValues, addr 0x1818457e0, size 0x40, virtual false, abstract: false, final false
inline void GetButtonValues(::ArrayW<bool>  buttons) ;

/// @brief Method Monitor, addr 0x181845870, size 0x70, virtual false, abstract: false, final false
inline void Monitor(bool  state) ;

static inline ::Rewired::ThreadSafeUnityInput_Mouse* New_ctor() ;

/// @brief Method ODWVPtZxfEzggwbVGemzqxalMUQW, addr 0x1818458e0, size 0x20, virtual false, abstract: false, final false
inline void ODWVPtZxfEzggwbVGemzqxalMUQW() ;

/// @brief Method PostInitialize, addr 0x181845900, size 0x10, virtual false, abstract: false, final false
inline void PostInitialize() ;

/// @brief Method TkkQzxiGykAkTxuCZaDZUmiOElZP, addr 0x181845910, size 0x40, virtual false, abstract: false, final false
inline void TkkQzxiGykAkTxuCZaDZUmiOElZP() ;

/// @brief Method Update, addr 0x181845950, size 0x290, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method VBCaTotYTvfqOPFNvaeOPCtluZJK, addr 0x181845910, size 0x40, virtual false, abstract: false, final false
inline void VBCaTotYTvfqOPFNvaeOPCtluZJK() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_BSVHttslunbDrJUmxJqadyPDxvGIA() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_BSVHttslunbDrJUmxJqadyPDxvGIA() ;

constexpr bool const& __cordl_internal_get_ClsUvGSqeyLpkGvUOrZRCyXXEgOO() const;

constexpr bool& __cordl_internal_get_ClsUvGSqeyLpkGvUOrZRCyXXEgOO() ;

constexpr bool const& __cordl_internal_get_JRyKFWXmdMHrHEmfQNkQyteAzAVC() const;

constexpr bool& __cordl_internal_get_JRyKFWXmdMHrHEmfQNkQyteAzAVC() ;

constexpr int32_t const& __cordl_internal_get_LayGRoCcxIZpoZjkPipwgAOHcMGY() const;

constexpr int32_t& __cordl_internal_get_LayGRoCcxIZpoZjkPipwgAOHcMGY() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_YviRighcNyenPPwJvdBbgPstnUqbA() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_YviRighcNyenPPwJvdBbgPstnUqbA() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_utZGqzeOkPShxrVuCTylBRmEzZNcA() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_utZGqzeOkPShxrVuCTylBRmEzZNcA() ;

constexpr void __cordl_internal_set_BSVHttslunbDrJUmxJqadyPDxvGIA(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_ClsUvGSqeyLpkGvUOrZRCyXXEgOO(bool  value) ;

constexpr void __cordl_internal_set_JRyKFWXmdMHrHEmfQNkQyteAzAVC(bool  value) ;

constexpr void __cordl_internal_set_LayGRoCcxIZpoZjkPipwgAOHcMGY(int32_t  value) ;

constexpr void __cordl_internal_set_YviRighcNyenPPwJvdBbgPstnUqbA(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_utZGqzeOkPShxrVuCTylBRmEzZNcA(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x181845be0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_monitoring, addr 0x181845c50, size 0x10, virtual false, abstract: false, final false
inline bool get_monitoring() ;

/// @brief Method get_mousePosition, addr 0x1811318f0, size 0x30ca0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_mousePosition() ;

/// @brief Method get_mousePresent, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_mousePresent() ;

/// @brief Method vwGJLjbnJaEwiDHCIzkUSntGhBXQ, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void vwGJLjbnJaEwiDHCIzkUSntGhBXQ() ;

/// @brief Method xBkklKdQbbiDwGUJfPLDHlzlKlMjb, addr 0x181845c60, size 0x20, virtual false, abstract: false, final false
inline void xBkklKdQbbiDwGUJfPLDHlzlKlMjb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadSafeUnityInput_Mouse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeUnityInput_Mouse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeUnityInput_Mouse(ThreadSafeUnityInput_Mouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeUnityInput_Mouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeUnityInput_Mouse(ThreadSafeUnityInput_Mouse const& ) = delete;

/// @brief Field BaCEzCOJOCDRuKAjjxahRzZFqxoQ offset 0xffffffff size 0x4
static constexpr int32_t  BaCEzCOJOCDRuKAjjxahRzZFqxoQ{static_cast<int32_t>(0x7)};

/// @brief Field ZJbguBdjbvHMEQilSAqFbwKvBdkd offset 0xffffffff size 0x4
static constexpr int32_t  ZJbguBdjbvHMEQilSAqFbwKvBdkd{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1808};

/// @brief Field utZGqzeOkPShxrVuCTylBRmEzZNcA, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<bool>  ___utZGqzeOkPShxrVuCTylBRmEzZNcA;

/// @brief Field BSVHttslunbDrJUmxJqadyPDxvGIA, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ___BSVHttslunbDrJUmxJqadyPDxvGIA;

/// @brief Field LayGRoCcxIZpoZjkPipwgAOHcMGY, offset: 0x20, size: 0x4, def value: None
 int32_t  ___LayGRoCcxIZpoZjkPipwgAOHcMGY;

/// @brief Field YviRighcNyenPPwJvdBbgPstnUqbA, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___YviRighcNyenPPwJvdBbgPstnUqbA;

/// @brief Field JRyKFWXmdMHrHEmfQNkQyteAzAVC, offset: 0x30, size: 0x1, def value: None
 bool  ___JRyKFWXmdMHrHEmfQNkQyteAzAVC;

/// @brief Field ClsUvGSqeyLpkGvUOrZRCyXXEgOO, offset: 0x31, size: 0x1, def value: None
 bool  ___ClsUvGSqeyLpkGvUOrZRCyXXEgOO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Mouse, ___utZGqzeOkPShxrVuCTylBRmEzZNcA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Mouse, ___BSVHttslunbDrJUmxJqadyPDxvGIA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Mouse, ___LayGRoCcxIZpoZjkPipwgAOHcMGY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Mouse, ___YviRighcNyenPPwJvdBbgPstnUqbA) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Mouse, ___JRyKFWXmdMHrHEmfQNkQyteAzAVC) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ThreadSafeUnityInput_Mouse, ___ClsUvGSqeyLpkGvUOrZRCyXXEgOO) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Rewired::ThreadSafeUnityInput_Mouse) == 0x38, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ThreadSafeUnityInput
class CORDL_TYPE ThreadSafeUnityInput : public ::System::Object {
public:
// Declarations
using Keyboard = ::Rewired::ThreadSafeUnityInput_Keyboard;

using Mouse = ::Rewired::ThreadSafeUnityInput_Mouse;

/// @brief Field RyZvGtrXpRqTShoKUhaHbbZapkxA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RyZvGtrXpRqTShoKUhaHbbZapkxA, put=setStaticF_RyZvGtrXpRqTShoKUhaHbbZapkxA)) ::Rewired::ThreadSafeUnityInput_Keyboard*  RyZvGtrXpRqTShoKUhaHbbZapkxA;

/// @brief Field zkrzynlhkQxBumXLNLfVfoRfiZJd, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zkrzynlhkQxBumXLNLfVfoRfiZJd, put=setStaticF_zkrzynlhkQxBumXLNLfVfoRfiZJd)) ::Rewired::ThreadSafeUnityInput_Mouse*  zkrzynlhkQxBumXLNLfVfoRfiZJd;

/// @brief Method Deinitialize, addr 0x181847550, size 0x80, virtual false, abstract: false, final false
static inline void Deinitialize() ;

/// @brief Method Initialize, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method PostInitialize, addr 0x1818475d0, size 0x50, virtual false, abstract: false, final false
static inline void PostInitialize() ;

/// @brief Method PostInitialize2, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void PostInitialize2() ;

/// @brief Method Update, addr 0x181847620, size 0x150, virtual false, abstract: false, final false
static inline void Update() ;

static inline ::Rewired::ThreadSafeUnityInput_Keyboard* getStaticF_RyZvGtrXpRqTShoKUhaHbbZapkxA() ;

static inline ::Rewired::ThreadSafeUnityInput_Mouse* getStaticF_zkrzynlhkQxBumXLNLfVfoRfiZJd() ;

/// @brief Method get_keyboard, addr 0x181847770, size 0x170, virtual false, abstract: false, final false
static inline ::Rewired::ThreadSafeUnityInput_Keyboard* get_keyboard() ;

/// @brief Method get_mouse, addr 0x1818478e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Rewired::ThreadSafeUnityInput_Mouse* get_mouse() ;

static inline void setStaticF_RyZvGtrXpRqTShoKUhaHbbZapkxA(::Rewired::ThreadSafeUnityInput_Keyboard*  value) ;

static inline void setStaticF_zkrzynlhkQxBumXLNLfVfoRfiZJd(::Rewired::ThreadSafeUnityInput_Mouse*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadSafeUnityInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeUnityInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadSafeUnityInput(ThreadSafeUnityInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeUnityInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadSafeUnityInput(ThreadSafeUnityInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ThreadSafeUnityInput) == 0x10, "Size mismatch!");

} // namespace end def Rewired
