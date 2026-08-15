#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineComputeBufferScope_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineComputeBufferScope_1)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename T>
struct SplineComputeBufferScope_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Splines::SplineComputeBufferScope_1);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Splines::SplineComputeBufferScope_1, "UnityEngine.Splines", "SplineComputeBufferScope`1");
// Dependencies 
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Splines.SplineComputeBufferScope`1<T>
struct CORDL_TYPE SplineComputeBufferScope_1 {
public:
// Declarations
 __declspec(property(get=get_CurveLengths)) ::UnityEngine::ComputeBuffer*  CurveLengths;

 __declspec(property(get=get_Curves)) ::UnityEngine::ComputeBuffer*  Curves;

 __declspec(property(get=get_Info)) ::UnityEngine::Vector4  Info;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Bind(::UnityEngine::ComputeShader*  shader, int32_t  kernel, ::StringW  info, ::StringW  curves, ::StringW  lengths) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Upload, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Upload() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  spline) ;

/// @brief Method get_CurveLengths, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ComputeBuffer* get_CurveLengths() ;

/// @brief Method get_Curves, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ComputeBuffer* get_Curves() ;

/// @brief Method get_Info, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_Info() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineComputeBufferScope_1() ;

// Ctor Parameters [CppParam { name: "m_Spline", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_KnotCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurveBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_LengthBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_Shader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "m_Info", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Curves", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_CurveLengths", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Kernel", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineComputeBufferScope_1(T  m_Spline, int32_t  m_KnotCount, ::UnityEngine::ComputeBuffer*  m_CurveBuffer, ::UnityEngine::ComputeBuffer*  m_LengthBuffer, ::UnityW<::UnityEngine::ComputeShader>  m_Shader, ::StringW  m_Info, ::StringW  m_Curves, ::StringW  m_CurveLengths, int32_t  m_Kernel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18760};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_Spline, offset: 0x0, size: 0x8, def value: None
 T  m_Spline;

/// @brief Field m_KnotCount, offset: 0x8, size: 0x4, def value: None
 int32_t  m_KnotCount;

/// @brief Field m_CurveBuffer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  m_CurveBuffer;

/// @brief Field m_LengthBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  m_LengthBuffer;

/// @brief Field m_Shader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  m_Shader;

/// @brief Field m_Info, offset: 0x28, size: 0x8, def value: None
 ::StringW  m_Info;

/// @brief Field m_Curves, offset: 0x30, size: 0x8, def value: None
 ::StringW  m_Curves;

/// @brief Field m_CurveLengths, offset: 0x38, size: 0x8, def value: None
 ::StringW  m_CurveLengths;

/// @brief Field m_Kernel, offset: 0x40, size: 0x4, def value: None
 int32_t  m_Kernel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
