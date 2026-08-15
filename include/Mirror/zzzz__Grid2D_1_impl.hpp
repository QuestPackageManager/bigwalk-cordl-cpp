#pragma once
// IWYU pragma private; include "Mirror/Grid2D_1.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "Mirror/zzzz__Grid2D_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
template<typename T>
inline void Mirror::Grid2D_1<T>::_ctor(int32_t  initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Grid2D_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity);
}
template<typename T>
inline void Mirror::Grid2D_1<T>::Add(::UnityEngine::Vector2Int  position, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Grid2D_1<T>>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, value);
}
template<typename T>
inline void Mirror::Grid2D_1<T>::GetAt(::UnityEngine::Vector2Int  position, ::System::Collections::Generic::HashSet_1<T>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Grid2D_1<T>>(),
                        {"GetAt", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, result);
}
template<typename T>
inline void Mirror::Grid2D_1<T>::GetWithNeighbours(::UnityEngine::Vector2Int  position, ::System::Collections::Generic::HashSet_1<T>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Grid2D_1<T>>(),
                        {"GetWithNeighbours", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, result);
}
template<typename T>
inline void Mirror::Grid2D_1<T>::ClearNonAlloc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Grid2D_1<T>>(),
                        {"ClearNonAlloc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "grid", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int,::System::Collections::Generic::HashSet_1<T>*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "neighbourOffsets", ty: "::ArrayW<::UnityEngine::Vector2Int>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Mirror::Grid2D_1<T>::Grid2D_1(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int,::System::Collections::Generic::HashSet_1<T>*>*  grid, ::ArrayW<::UnityEngine::Vector2Int>  neighbourOffsets) noexcept  {
this->grid = grid;
this->neighbourOffsets = neighbourOffsets;
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::Grid2D_1<T>::Grid2D_1()   {
}
