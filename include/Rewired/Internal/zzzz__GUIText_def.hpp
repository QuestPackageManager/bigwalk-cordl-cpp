#pragma once
// IWYU pragma private; include "Rewired/Internal/GUIText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIText)
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct TextAlignment;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Internal {
class GUIText;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::GUIText*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::GUIText*, "Rewired.Internal", "GUIText");
// Dependencies UnityEngine.Color, UnityEngine.FontStyle, UnityEngine.MonoBehaviour, UnityEngine.TextAlignment, UnityEngine.TextAnchor, UnityEngine.Vector2
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.GUIText
class CORDL_TYPE GUIText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IQDrufXnyQcjwFRSmBTHDVUPAsZoA, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IQDrufXnyQcjwFRSmBTHDVUPAsZoA, put=__cordl_internal_set_IQDrufXnyQcjwFRSmBTHDVUPAsZoA)) bool  IQDrufXnyQcjwFRSmBTHDVUPAsZoA;

/// @brief Field KKHbjkghMrJQIXIUbAFgkdzWpMXgA, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_KKHbjkghMrJQIXIUbAFgkdzWpMXgA, put=__cordl_internal_set_KKHbjkghMrJQIXIUbAFgkdzWpMXgA)) ::UnityEngine::FontStyle  KKHbjkghMrJQIXIUbAFgkdzWpMXgA;

/// @brief Field NSdTKvjnYBGMOjbalDzWKNkuCQqB, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_NSdTKvjnYBGMOjbalDzWKNkuCQqB, put=__cordl_internal_set_NSdTKvjnYBGMOjbalDzWKNkuCQqB)) float_t  NSdTKvjnYBGMOjbalDzWKNkuCQqB;

/// @brief Field QDhKivEhHSQMqyVXJnCUAwivRpdR, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_QDhKivEhHSQMqyVXJnCUAwivRpdR, put=__cordl_internal_set_QDhKivEhHSQMqyVXJnCUAwivRpdR)) bool  QDhKivEhHSQMqyVXJnCUAwivRpdR;

/// @brief Field StxNoassIivBEhuvfBoomaemWDMW, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StxNoassIivBEhuvfBoomaemWDMW, put=__cordl_internal_set_StxNoassIivBEhuvfBoomaemWDMW)) ::StringW  StxNoassIivBEhuvfBoomaemWDMW;

/// @brief Field TKzVgLQhmFmRVJLZIvBTnVaUqicE, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TKzVgLQhmFmRVJLZIvBTnVaUqicE, put=__cordl_internal_set_TKzVgLQhmFmRVJLZIvBTnVaUqicE)) ::UnityEngine::GUIStyle*  TKzVgLQhmFmRVJLZIvBTnVaUqicE;

/// @brief Field VXHnnmNAEKcNQeDtcAvZgDdsoaThA, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_VXHnnmNAEKcNQeDtcAvZgDdsoaThA, put=__cordl_internal_set_VXHnnmNAEKcNQeDtcAvZgDdsoaThA)) ::UnityEngine::Color  VXHnnmNAEKcNQeDtcAvZgDdsoaThA;

/// @brief Field WVvKjfspBJtPThIMhaWflYKwyLpB, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_WVvKjfspBJtPThIMhaWflYKwyLpB, put=__cordl_internal_set_WVvKjfspBJtPThIMhaWflYKwyLpB)) ::UnityW<::UnityEngine::UI::Text>  WVvKjfspBJtPThIMhaWflYKwyLpB;

/// @brief Field XcSHhCKSndOiEYLGupRjsoOKaHjY, offset 0x6b, size 0x1 
 __declspec(property(get=__cordl_internal_get_XcSHhCKSndOiEYLGupRjsoOKaHjY, put=__cordl_internal_set_XcSHhCKSndOiEYLGupRjsoOKaHjY)) bool  XcSHhCKSndOiEYLGupRjsoOKaHjY;

/// @brief Field YMYDDiHWSTdaLVmrmBXggsLXdhLgA, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_YMYDDiHWSTdaLVmrmBXggsLXdhLgA, put=__cordl_internal_set_YMYDDiHWSTdaLVmrmBXggsLXdhLgA)) int32_t  YMYDDiHWSTdaLVmrmBXggsLXdhLgA;

/// @brief Field ZNboAZTBXStchIYhKYpezHAFnhmb, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_ZNboAZTBXStchIYhKYpezHAFnhmb, put=__cordl_internal_set_ZNboAZTBXStchIYhKYpezHAFnhmb)) bool  ZNboAZTBXStchIYhKYpezHAFnhmb;

/// @brief Field _pixelOffset, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__pixelOffset, put=__cordl_internal_set__pixelOffset)) ::UnityEngine::Vector2  _pixelOffset;

/// @brief Field _useUnityUI, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__useUnityUI, put=__cordl_internal_set__useUnityUI)) bool  _useUnityUI;

 __declspec(property(get=get_alignment, put=set_alignment)) ::UnityEngine::TextAlignment  alignment;

 __declspec(property(get=get_anchor, put=set_anchor)) ::UnityEngine::TextAnchor  anchor;

/// @brief Field cTnKwxTOCjwjOsWJcvORphgTiQao, offset 0x6e, size 0x1 
 __declspec(property(get=__cordl_internal_get_cTnKwxTOCjwjOsWJcvORphgTiQao, put=__cordl_internal_set_cTnKwxTOCjwjOsWJcvORphgTiQao)) bool  cTnKwxTOCjwjOsWJcvORphgTiQao;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

/// @brief Field dzesXKotijWRtHCDykRzxFsNUUXX, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_dzesXKotijWRtHCDykRzxFsNUUXX, put=__cordl_internal_set_dzesXKotijWRtHCDykRzxFsNUUXX)) bool  dzesXKotijWRtHCDykRzxFsNUUXX;

/// @brief Field eXOLIPiLQFttDjEXLjoquHspBPCaA, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_eXOLIPiLQFttDjEXLjoquHspBPCaA, put=__cordl_internal_set_eXOLIPiLQFttDjEXLjoquHspBPCaA)) bool  eXOLIPiLQFttDjEXLjoquHspBPCaA;

 __declspec(property(get=get_font, put=set_font)) ::UnityW<::UnityEngine::Font>  font;

 __declspec(property(get=get_fontSize, put=set_fontSize)) int32_t  fontSize;

 __declspec(property(get=get_fontStyle, put=set_fontStyle)) ::UnityEngine::FontStyle  fontStyle;

/// @brief Field kvGyRIqmUZgvrVVMQzRZAyRZNmxw, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_kvGyRIqmUZgvrVVMQzRZAyRZNmxw, put=__cordl_internal_set_kvGyRIqmUZgvrVVMQzRZAyRZNmxw)) ::UnityEngine::TextAnchor  kvGyRIqmUZgvrVVMQzRZAyRZNmxw;

 __declspec(property(get=get_lineSpacing, put=set_lineSpacing)) float_t  lineSpacing;

/// @brief Field nBMaibCTZuMKBLCLtHllncjwxFsR, offset 0x6f, size 0x1 
 __declspec(property(get=__cordl_internal_get_nBMaibCTZuMKBLCLtHllncjwxFsR, put=__cordl_internal_set_nBMaibCTZuMKBLCLtHllncjwxFsR)) bool  nBMaibCTZuMKBLCLtHllncjwxFsR;

/// @brief Field nWCKhFxsVfAkZEUqvFcSdLSTZpGv, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_nWCKhFxsVfAkZEUqvFcSdLSTZpGv, put=__cordl_internal_set_nWCKhFxsVfAkZEUqvFcSdLSTZpGv)) ::UnityW<::UnityEngine::Font>  nWCKhFxsVfAkZEUqvFcSdLSTZpGv;

 __declspec(property(get=get_pixelOffset, put=set_pixelOffset)) ::UnityEngine::Vector2  pixelOffset;

/// @brief Field sUMlcgfEpUSKuPuuxLoYwxVakoGt, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_sUMlcgfEpUSKuPuuxLoYwxVakoGt, put=__cordl_internal_set_sUMlcgfEpUSKuPuuxLoYwxVakoGt)) bool  sUMlcgfEpUSKuPuuxLoYwxVakoGt;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

 __declspec(property(get=get_useUnityUI, put=set_useUnityUI)) bool  useUnityUI;

/// @brief Field xTqUmHlVeHfJsBjdgpfFHVosunSX, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_xTqUmHlVeHfJsBjdgpfFHVosunSX, put=__cordl_internal_set_xTqUmHlVeHfJsBjdgpfFHVosunSX)) ::UnityEngine::TextAlignment  xTqUmHlVeHfJsBjdgpfFHVosunSX;

/// @brief Method Awake, addr 0x18048e710, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateLogger, addr 0x1818f1500, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::Rewired::Internal::GUIText> CreateLogger(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetOrAddComponent, addr 0x1818f15b0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::Rewired::Internal::GUIText> GetOrAddComponent(::UnityEngine::GameObject*  gameObject) ;

static inline ::Rewired::Internal::GUIText* New_ctor() ;

/// @brief Method OnGUI, addr 0x1818f1630, size 0x200, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnValidate, addr 0x1818f1830, size 0x30, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x1818f1860, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1818f1880, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_IQDrufXnyQcjwFRSmBTHDVUPAsZoA() const;

constexpr bool& __cordl_internal_get_IQDrufXnyQcjwFRSmBTHDVUPAsZoA() ;

constexpr ::UnityEngine::FontStyle const& __cordl_internal_get_KKHbjkghMrJQIXIUbAFgkdzWpMXgA() const;

constexpr ::UnityEngine::FontStyle& __cordl_internal_get_KKHbjkghMrJQIXIUbAFgkdzWpMXgA() ;

constexpr float_t const& __cordl_internal_get_NSdTKvjnYBGMOjbalDzWKNkuCQqB() const;

constexpr float_t& __cordl_internal_get_NSdTKvjnYBGMOjbalDzWKNkuCQqB() ;

constexpr bool const& __cordl_internal_get_QDhKivEhHSQMqyVXJnCUAwivRpdR() const;

constexpr bool& __cordl_internal_get_QDhKivEhHSQMqyVXJnCUAwivRpdR() ;

constexpr ::StringW const& __cordl_internal_get_StxNoassIivBEhuvfBoomaemWDMW() const;

constexpr ::StringW& __cordl_internal_get_StxNoassIivBEhuvfBoomaemWDMW() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_TKzVgLQhmFmRVJLZIvBTnVaUqicE() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_TKzVgLQhmFmRVJLZIvBTnVaUqicE() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_VXHnnmNAEKcNQeDtcAvZgDdsoaThA() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_VXHnnmNAEKcNQeDtcAvZgDdsoaThA() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_WVvKjfspBJtPThIMhaWflYKwyLpB() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_WVvKjfspBJtPThIMhaWflYKwyLpB() ;

constexpr bool const& __cordl_internal_get_XcSHhCKSndOiEYLGupRjsoOKaHjY() const;

constexpr bool& __cordl_internal_get_XcSHhCKSndOiEYLGupRjsoOKaHjY() ;

constexpr int32_t const& __cordl_internal_get_YMYDDiHWSTdaLVmrmBXggsLXdhLgA() const;

constexpr int32_t& __cordl_internal_get_YMYDDiHWSTdaLVmrmBXggsLXdhLgA() ;

constexpr bool const& __cordl_internal_get_ZNboAZTBXStchIYhKYpezHAFnhmb() const;

constexpr bool& __cordl_internal_get_ZNboAZTBXStchIYhKYpezHAFnhmb() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__pixelOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__pixelOffset() ;

constexpr bool const& __cordl_internal_get__useUnityUI() const;

constexpr bool& __cordl_internal_get__useUnityUI() ;

constexpr bool const& __cordl_internal_get_cTnKwxTOCjwjOsWJcvORphgTiQao() const;

constexpr bool& __cordl_internal_get_cTnKwxTOCjwjOsWJcvORphgTiQao() ;

constexpr bool const& __cordl_internal_get_dzesXKotijWRtHCDykRzxFsNUUXX() const;

constexpr bool& __cordl_internal_get_dzesXKotijWRtHCDykRzxFsNUUXX() ;

constexpr bool const& __cordl_internal_get_eXOLIPiLQFttDjEXLjoquHspBPCaA() const;

constexpr bool& __cordl_internal_get_eXOLIPiLQFttDjEXLjoquHspBPCaA() ;

constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_kvGyRIqmUZgvrVVMQzRZAyRZNmxw() const;

constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_kvGyRIqmUZgvrVVMQzRZAyRZNmxw() ;

constexpr bool const& __cordl_internal_get_nBMaibCTZuMKBLCLtHllncjwxFsR() const;

constexpr bool& __cordl_internal_get_nBMaibCTZuMKBLCLtHllncjwxFsR() ;

constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_nWCKhFxsVfAkZEUqvFcSdLSTZpGv() const;

constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_nWCKhFxsVfAkZEUqvFcSdLSTZpGv() ;

constexpr bool const& __cordl_internal_get_sUMlcgfEpUSKuPuuxLoYwxVakoGt() const;

constexpr bool& __cordl_internal_get_sUMlcgfEpUSKuPuuxLoYwxVakoGt() ;

constexpr ::UnityEngine::TextAlignment const& __cordl_internal_get_xTqUmHlVeHfJsBjdgpfFHVosunSX() const;

constexpr ::UnityEngine::TextAlignment& __cordl_internal_get_xTqUmHlVeHfJsBjdgpfFHVosunSX() ;

constexpr void __cordl_internal_set_IQDrufXnyQcjwFRSmBTHDVUPAsZoA(bool  value) ;

constexpr void __cordl_internal_set_KKHbjkghMrJQIXIUbAFgkdzWpMXgA(::UnityEngine::FontStyle  value) ;

constexpr void __cordl_internal_set_NSdTKvjnYBGMOjbalDzWKNkuCQqB(float_t  value) ;

constexpr void __cordl_internal_set_QDhKivEhHSQMqyVXJnCUAwivRpdR(bool  value) ;

constexpr void __cordl_internal_set_StxNoassIivBEhuvfBoomaemWDMW(::StringW  value) ;

constexpr void __cordl_internal_set_TKzVgLQhmFmRVJLZIvBTnVaUqicE(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set_VXHnnmNAEKcNQeDtcAvZgDdsoaThA(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_WVvKjfspBJtPThIMhaWflYKwyLpB(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_XcSHhCKSndOiEYLGupRjsoOKaHjY(bool  value) ;

constexpr void __cordl_internal_set_YMYDDiHWSTdaLVmrmBXggsLXdhLgA(int32_t  value) ;

constexpr void __cordl_internal_set_ZNboAZTBXStchIYhKYpezHAFnhmb(bool  value) ;

constexpr void __cordl_internal_set__pixelOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__useUnityUI(bool  value) ;

constexpr void __cordl_internal_set_cTnKwxTOCjwjOsWJcvORphgTiQao(bool  value) ;

constexpr void __cordl_internal_set_dzesXKotijWRtHCDykRzxFsNUUXX(bool  value) ;

constexpr void __cordl_internal_set_eXOLIPiLQFttDjEXLjoquHspBPCaA(bool  value) ;

constexpr void __cordl_internal_set_kvGyRIqmUZgvrVVMQzRZAyRZNmxw(::UnityEngine::TextAnchor  value) ;

constexpr void __cordl_internal_set_nBMaibCTZuMKBLCLtHllncjwxFsR(bool  value) ;

constexpr void __cordl_internal_set_nWCKhFxsVfAkZEUqvFcSdLSTZpGv(::UnityW<::UnityEngine::Font>  value) ;

constexpr void __cordl_internal_set_sUMlcgfEpUSKuPuuxLoYwxVakoGt(bool  value) ;

constexpr void __cordl_internal_set_xTqUmHlVeHfJsBjdgpfFHVosunSX(::UnityEngine::TextAlignment  value) ;

/// @brief Method .ctor, addr 0x1818f1980, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_alignment, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::TextAlignment get_alignment() ;

/// @brief Method get_anchor, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::TextAnchor get_anchor() ;

/// @brief Method get_color, addr 0x180e3e650, size 0xbb40, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_font, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Font> get_font() ;

/// @brief Method get_fontSize, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_fontSize() ;

/// @brief Method get_fontStyle, addr 0x180e25b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::FontStyle get_fontStyle() ;

/// @brief Method get_lineSpacing, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_lineSpacing() ;

/// @brief Method get_pixelOffset, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_pixelOffset() ;

/// @brief Method get_text, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method get_useUnityUI, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool get_useUnityUI() ;

/// @brief Method kdnxVlNbdWbcpzSOdvNhMUUDVHNH, addr 0x1818f19a0, size 0x500, virtual false, abstract: false, final false
inline void kdnxVlNbdWbcpzSOdvNhMUUDVHNH() ;

/// @brief Method rGdiRTEHdTkIZUVMlgiFvATjHrZt, addr 0x1818f1ea0, size 0x80, virtual false, abstract: false, final false
inline void rGdiRTEHdTkIZUVMlgiFvATjHrZt() ;

/// @brief Method set_alignment, addr 0x1818f1f20, size 0x10, virtual false, abstract: false, final false
inline void set_alignment(::UnityEngine::TextAlignment  value) ;

/// @brief Method set_anchor, addr 0x1818f1f30, size 0x20, virtual false, abstract: false, final false
inline void set_anchor(::UnityEngine::TextAnchor  value) ;

/// @brief Method set_color, addr 0x1818f1f50, size 0x50, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_font, addr 0x1818f1fe0, size 0x50, virtual false, abstract: false, final false
inline void set_font(::UnityEngine::Font*  value) ;

/// @brief Method set_fontSize, addr 0x1818f1fa0, size 0x20, virtual false, abstract: false, final false
inline void set_fontSize(int32_t  value) ;

/// @brief Method set_fontStyle, addr 0x1818f1fc0, size 0x20, virtual false, abstract: false, final false
inline void set_fontStyle(::UnityEngine::FontStyle  value) ;

/// @brief Method set_lineSpacing, addr 0x1818f2030, size 0x10, virtual false, abstract: false, final false
inline void set_lineSpacing(float_t  value) ;

/// @brief Method set_pixelOffset, addr 0x1818f2040, size 0x10, virtual false, abstract: false, final false
inline void set_pixelOffset(::UnityEngine::Vector2  value) ;

/// @brief Method set_text, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

/// @brief Method set_useUnityUI, addr 0x1818f2050, size 0x20, virtual false, abstract: false, final false
inline void set_useUnityUI(bool  value) ;

/// @brief Method yLVFssfzfZFfBAbngQimClWeOjSCc, addr 0x1818f2070, size 0x1c0, virtual false, abstract: false, final false
inline void yLVFssfzfZFfBAbngQimClWeOjSCc() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIText(GUIText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIText(GUIText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2815};

/// @brief Field StxNoassIivBEhuvfBoomaemWDMW, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___StxNoassIivBEhuvfBoomaemWDMW;

/// @brief Field TKzVgLQhmFmRVJLZIvBTnVaUqicE, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ___TKzVgLQhmFmRVJLZIvBTnVaUqicE;

/// @brief Field kvGyRIqmUZgvrVVMQzRZAyRZNmxw, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::TextAnchor  ___kvGyRIqmUZgvrVVMQzRZAyRZNmxw;

/// @brief Field xTqUmHlVeHfJsBjdgpfFHVosunSX, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::TextAlignment  ___xTqUmHlVeHfJsBjdgpfFHVosunSX;

/// @brief Field NSdTKvjnYBGMOjbalDzWKNkuCQqB, offset: 0x38, size: 0x4, def value: None
 float_t  ___NSdTKvjnYBGMOjbalDzWKNkuCQqB;

/// @brief Field nWCKhFxsVfAkZEUqvFcSdLSTZpGv, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Font>  ___nWCKhFxsVfAkZEUqvFcSdLSTZpGv;

/// @brief Field YMYDDiHWSTdaLVmrmBXggsLXdhLgA, offset: 0x48, size: 0x4, def value: None
 int32_t  ___YMYDDiHWSTdaLVmrmBXggsLXdhLgA;

/// @brief Field KKHbjkghMrJQIXIUbAFgkdzWpMXgA, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::FontStyle  ___KKHbjkghMrJQIXIUbAFgkdzWpMXgA;

/// @brief Field VXHnnmNAEKcNQeDtcAvZgDdsoaThA, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ___VXHnnmNAEKcNQeDtcAvZgDdsoaThA;

/// @brief Field _pixelOffset, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____pixelOffset;

/// @brief Field _useUnityUI, offset: 0x68, size: 0x1, def value: None
 bool  ____useUnityUI;

/// @brief Field ZNboAZTBXStchIYhKYpezHAFnhmb, offset: 0x69, size: 0x1, def value: None
 bool  ___ZNboAZTBXStchIYhKYpezHAFnhmb;

/// @brief Field dzesXKotijWRtHCDykRzxFsNUUXX, offset: 0x6a, size: 0x1, def value: None
 bool  ___dzesXKotijWRtHCDykRzxFsNUUXX;

/// @brief Field XcSHhCKSndOiEYLGupRjsoOKaHjY, offset: 0x6b, size: 0x1, def value: None
 bool  ___XcSHhCKSndOiEYLGupRjsoOKaHjY;

/// @brief Field IQDrufXnyQcjwFRSmBTHDVUPAsZoA, offset: 0x6c, size: 0x1, def value: None
 bool  ___IQDrufXnyQcjwFRSmBTHDVUPAsZoA;

/// @brief Field sUMlcgfEpUSKuPuuxLoYwxVakoGt, offset: 0x6d, size: 0x1, def value: None
 bool  ___sUMlcgfEpUSKuPuuxLoYwxVakoGt;

/// @brief Field cTnKwxTOCjwjOsWJcvORphgTiQao, offset: 0x6e, size: 0x1, def value: None
 bool  ___cTnKwxTOCjwjOsWJcvORphgTiQao;

/// @brief Field nBMaibCTZuMKBLCLtHllncjwxFsR, offset: 0x6f, size: 0x1, def value: None
 bool  ___nBMaibCTZuMKBLCLtHllncjwxFsR;

/// @brief Field WVvKjfspBJtPThIMhaWflYKwyLpB, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___WVvKjfspBJtPThIMhaWflYKwyLpB;

/// @brief Field QDhKivEhHSQMqyVXJnCUAwivRpdR, offset: 0x78, size: 0x1, def value: None
 bool  ___QDhKivEhHSQMqyVXJnCUAwivRpdR;

/// @brief Field eXOLIPiLQFttDjEXLjoquHspBPCaA, offset: 0x79, size: 0x1, def value: None
 bool  ___eXOLIPiLQFttDjEXLjoquHspBPCaA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Internal::GUIText, ___StxNoassIivBEhuvfBoomaemWDMW) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___TKzVgLQhmFmRVJLZIvBTnVaUqicE) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___kvGyRIqmUZgvrVVMQzRZAyRZNmxw) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___xTqUmHlVeHfJsBjdgpfFHVosunSX) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___NSdTKvjnYBGMOjbalDzWKNkuCQqB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___nWCKhFxsVfAkZEUqvFcSdLSTZpGv) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___YMYDDiHWSTdaLVmrmBXggsLXdhLgA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___KKHbjkghMrJQIXIUbAFgkdzWpMXgA) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___VXHnnmNAEKcNQeDtcAvZgDdsoaThA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ____pixelOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ____useUnityUI) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___ZNboAZTBXStchIYhKYpezHAFnhmb) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___dzesXKotijWRtHCDykRzxFsNUUXX) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___XcSHhCKSndOiEYLGupRjsoOKaHjY) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___IQDrufXnyQcjwFRSmBTHDVUPAsZoA) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___sUMlcgfEpUSKuPuuxLoYwxVakoGt) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___cTnKwxTOCjwjOsWJcvORphgTiQao) == 0x6e, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___nBMaibCTZuMKBLCLtHllncjwxFsR) == 0x6f, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___WVvKjfspBJtPThIMhaWflYKwyLpB) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___QDhKivEhHSQMqyVXJnCUAwivRpdR) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::GUIText, ___eXOLIPiLQFttDjEXLjoquHspBPCaA) == 0x79, "Offset mismatch!");

static_assert(sizeof(::Rewired::Internal::GUIText) == 0x80, "Size mismatch!");

} // namespace end def Rewired::Internal
