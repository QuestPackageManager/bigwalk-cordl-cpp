#pragma once
// IWYU pragma private; include "MA/Flora/InstanceInContainer.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__InstanceInContainer_def.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceContainer_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceInContainer.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInContainer (*)()>(&::MA::Flora::InstanceInContainer::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInContainer.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>> (::MA::Flora::InstanceInContainer::*)()>(&::MA::Flora::InstanceInContainer::get_Container)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInContainer.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInContainer::*)(::MA::Flora::InstanceInContainer)>(&::MA::Flora::InstanceInContainer::CompareTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18147c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInContainer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInContainer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInContainer::*)()>(&::MA::Flora::InstanceInContainer::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                    {::i2c::class_of<::MA::Flora::InstanceInContainer>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInContainer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceInContainer::*)(::MA::Flora::InstanceInContainer)>(&::MA::Flora::InstanceInContainer::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18147c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInContainer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInContainer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::InstanceInContainer::*)()>(&::MA::Flora::InstanceInContainer::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181482230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                    {::i2c::class_of<::MA::Flora::InstanceInContainer>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::InstanceInContainer MA::Flora::InstanceInContainer::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInContainer>(nullptr, ___internal_method);
}
inline ::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>> MA::Flora::InstanceInContainer::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::EntityObjectRef_1<::UnityW<::MA::Flora::FloraInstanceContainer>>>(*this, ___internal_method);
}
inline int32_t MA::Flora::InstanceInContainer::CompareTo(::MA::Flora::InstanceInContainer  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInContainer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::InstanceInContainer::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInContainer>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::InstanceInContainer::Equals(::MA::Flora::InstanceInContainer  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInContainer>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInContainer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW MA::Flora::InstanceInContainer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInContainer>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceInContainer>"
constexpr  MA::Flora::InstanceInContainer::operator ::System::IComparable_1<::MA::Flora::InstanceInContainer>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInContainer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceInContainer>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceInContainer>* MA::Flora::InstanceInContainer::i___System__IComparable_1___MA__Flora__InstanceInContainer_()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInContainer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceInContainer>"
constexpr  MA::Flora::InstanceInContainer::operator ::System::IEquatable_1<::MA::Flora::InstanceInContainer>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInContainer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceInContainer>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceInContainer>* MA::Flora::InstanceInContainer::i___System__IEquatable_1___MA__Flora__InstanceInContainer_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInContainer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ContainerEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexInContainer", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceInContainer::InstanceInContainer(::UnityEngine::EntityId  ContainerEntity, int32_t  IndexInContainer) noexcept  {
this->ContainerEntity = ContainerEntity;
this->IndexInContainer = IndexInContainer;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceInContainer::InstanceInContainer()   {
}
