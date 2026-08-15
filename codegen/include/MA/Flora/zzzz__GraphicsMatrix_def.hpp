#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsMatrix.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsMatrix)
namespace MA::Flora {
struct FloraLocalToWorld;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4x4;
}
// Forward declare root types
namespace MA::Flora {
struct GraphicsMatrix;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsMatrix);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsMatrix, "MA.Flora", "GraphicsMatrix");
// Dependencies Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsMatrix
struct CORDL_TYPE GraphicsMatrix {
public:
// Declarations
 __declspec(property(get=get_Position, put=set_Position)) ::Unity::Mathematics::float3  Position;

 __declspec(property(get=get_XAxis, put=set_XAxis)) ::Unity::Mathematics::float3  XAxis;

 __declspec(property(get=get_YAxis, put=set_YAxis)) ::Unity::Mathematics::float3  YAxis;

 __declspec(property(get=get_ZAxis, put=set_ZAxis)) ::Unity::Mathematics::float3  ZAxis;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::GraphicsMatrix>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::GraphicsMatrix>*() ;

/// @brief Method Equals, addr 0x1815000c0, size 0x140, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1806463f0, size 0x210, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::GraphicsMatrix  rhs) ;

/// @brief Method GetHashCode, addr 0x1814f59c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method NearlyEquals, addr 0x1814f59d0, size 0x1f0, virtual false, abstract: false, final false
inline bool NearlyEquals(::by_ref<::MA::Flora::GraphicsMatrix>  rhs, float_t  epsilon) ;

/// @brief Method ToString, addr 0x1814f5ed0, size 0x150, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x1814f5bc0, size 0x310, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x1814f60c0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method .ctor, addr 0x1814f6020, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  position) ;

/// @brief Method get_Identity, addr 0x181500200, size 0xd0, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsMatrix get_Identity() ;

/// @brief Method get_Position, addr 0x180646600, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Position() ;

/// @brief Method get_XAxis, addr 0x1803bdaa0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_XAxis() ;

/// @brief Method get_YAxis, addr 0x180646620, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_YAxis() ;

/// @brief Method get_ZAxis, addr 0x180646640, size 0x210, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_ZAxis() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::GraphicsMatrix>"
constexpr ::System::IEquatable_1<::MA::Flora::GraphicsMatrix>* i___System__IEquatable_1___MA__Flora__GraphicsMatrix_() ;

/// @brief Method op_Equality, addr 0x1815002d0, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::GraphicsMatrix  lhs, ::MA::Flora::GraphicsMatrix  rhs) ;

/// @brief Method op_Implicit, addr 0x1815003f0, size 0x70, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraLocalToWorld op_Implicit___MA__Flora__FloraLocalToWorld(::MA::Flora::GraphicsMatrix  m) ;

/// @brief Method op_Implicit, addr 0x181500300, size 0x90, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsMatrix op_Implicit___MA__Flora__GraphicsMatrix(::MA::Flora::FloraLocalToWorld  m) ;

/// @brief Method op_Implicit, addr 0x181500300, size 0x90, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsMatrix op_Implicit___MA__Flora__GraphicsMatrix(::Unity::Mathematics::float4x4  m) ;

/// @brief Method op_Implicit, addr 0x181500390, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4x4 op_Implicit___Unity__Mathematics__float4x4(::MA::Flora::GraphicsMatrix  m) ;

/// @brief Method op_Inequality, addr 0x181500460, size 0xf0, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::GraphicsMatrix  lhs, ::MA::Flora::GraphicsMatrix  rhs) ;

/// @brief Method set_Position, addr 0x1814f6150, size 0x30, virtual false, abstract: false, final false
inline void set_Position(::Unity::Mathematics::float3  value) ;

/// @brief Method set_XAxis, addr 0x1814f6180, size 0x30, virtual false, abstract: false, final false
inline void set_XAxis(::Unity::Mathematics::float3  value) ;

/// @brief Method set_YAxis, addr 0x1814f61b0, size 0x20, virtual false, abstract: false, final false
inline void set_YAxis(::Unity::Mathematics::float3  value) ;

/// @brief Method set_ZAxis, addr 0x1814f61d0, size 0x20, virtual false, abstract: false, final false
inline void set_ZAxis(::Unity::Mathematics::float3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsMatrix() ;

// Ctor Parameters [CppParam { name: "packed0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "packed1", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "packed2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
constexpr GraphicsMatrix(::Unity::Mathematics::float4  packed0, ::Unity::Mathematics::float4  packed1, ::Unity::Mathematics::float4  packed2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field packed0, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  packed0;

/// @brief Field packed1, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  packed1;

/// @brief Field packed2, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::float4  packed2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsMatrix, packed0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsMatrix, packed1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GraphicsMatrix, packed2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsMatrix) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
